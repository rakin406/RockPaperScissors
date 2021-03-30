#include <cstdlib>
#include <iostream>
#include <string>

const int ROUNDS = 10;
const int NUM_OF_MOVES = 3;
const std::string MOVES[NUM_OF_MOVES] = {"Rock", "Paper", "Scissors"};
const std::string HELP = "r for rock, p for paper, s for scissors";

// TODO: Process input, generate computer move.
int main() {
    srand(time(0)); // Used for random number generation
    std::cout << "Instructions:\n";
    std::cout << HELP << "\n";
    std::cout << ROUNDS << " rounds!\n\n";

    // Game loop
    std::string user_move;
    int user_wins = 0, comp_wins = 0;
    for (int i = 0; i < ROUNDS; ++i) {
        std::cout << ">> ";
        std::cin >> user_move;
        if (user_move == "r" || user_move == "R") {
            if (MOVES[rand() % NUM_OF_MOVES] == MOVES[0]) {
                std::cout << "Tie\n";
            } else if (MOVES[rand() % NUM_OF_MOVES] == MOVES[1]) {
            } else if (MOVES[rand() % NUM_OF_MOVES] == MOVES[2]) {
            }
        }
    }

    return 0;
}
