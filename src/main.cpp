// Play rock-paper-scissors with the computer

#include <cstdlib>
#include <iostream>
#include <string>

const int ROUNDS = 10;
const int NUM_OF_MOVES = 3;
const std::string MOVES[NUM_OF_MOVES] = {"Rock", "Paper", "Scissors"};
const std::string HELP = "r for rock, p for paper, s for scissors";

int main() {
    srand(time(0)); // Used for random number generation
    std::cout << "Instructions:\n";
    std::cout << HELP << "\n";
    std::cout << ROUNDS << " rounds!\n\n";

    // Game loop
    std::string user_move, comp_move;
    int user_wins = 0, comp_wins = 0;
    for (int i = 0; i < ROUNDS; ++i) {
        std::cout << ">> ";
        std::cin >> user_move;

        // Check user moves
        comp_move = MOVES[rand() % NUM_OF_MOVES];
        if (user_move == "r" || user_move == "R") {
            if (comp_move == MOVES[0]) {
                std::cout << "Tie\n";
            } else if (comp_move == MOVES[1]) {
                std::cout << "Computer wins\n";
                ++comp_wins;
            } else if (comp_move == MOVES[2]) {
                std::cout << "User wins\n";
                ++user_wins;
            }
        }
    }

    return 0;
}
