// Play rock-paper-scissors with the computer

#include <iostream>
#include <random>
#include <string>

// Return random integer in range
int generate_random(const int &min, const int &max) {
    static thread_local std::mt19937 generator;
    std::uniform_int_distribution<int> dist(min, max);
    return dist(generator);
}

// Return randomly generated computer move
std::string generate_move() {
    std::string moves[3] = {"Rock", "Paper", "Scissors"};
    return moves[generate_random(0, 2)];
}

// Judge and print the winner
void print_winner(int user_wins, int comp_wins) {
    if (user_wins == comp_wins) {
        std::cout << "It's a tie!\n";
    } else if (user_wins > comp_wins) {
        std::cout << "You won the game!\n";
    } else if (user_wins < comp_wins) {
        std::cout << "Computer won the game!\n";
    }
}

int main(int argc, char **argv) {
    // Process CLI argument
    int rounds;
    if (argc >= 2) {
        std::string option = argv[1];
        if (option == "-h" || option == "--help") {
            // Help
            std::cout << "Usage: ./program <rounds>\n";
            std::cout << "Example: \"./program 10\" results in 10 rounds\n";
            exit(0);
        } else {
            rounds = stoi(option);
        }
    } else {
        std::cout << "Please give argument.\n";
        std::cout << "Try -h option.\n";
        exit(1);
    }

    // Instructions
    std::cout << "Instructions:\n";
    std::cout << "r for rock, p for paper, s for scissors\n";
    std::cout << rounds << " rounds!\n";
    std::cout << "\n";

    std::string user_move;
    int user_wins = 0;
    int comp_wins = 0;

    // Game loop
    for (int i = 0; i < rounds; ++i) {
        std::cout << ">> ";
        std::cin >> user_move;

        // Check user moves
        std::string comp_move = generate_move();
        if (user_move == "r" || user_move == "R") {
            if (comp_move == "Rock") {
                std::cout << "User move: Rock\n";
                std::cout << "Computer move: " << comp_move << "\n";
                std::cout << "Tie\n";
                std::cout << "\n";
            } else if (comp_move == "Paper") {
                std::cout << "User move: Rock\n";
                std::cout << "Computer move: " << comp_move << "\n";
                std::cout << "Computer wins\n";
                std::cout << "\n";
                ++comp_wins;
            } else {
                std::cout << "User move: Rock\n";
                std::cout << "Computer move: " << comp_move << "\n";
                std::cout << "User wins\n";
                std::cout << "\n";
                ++user_wins;
            }
        } else if (user_move == "p" || user_move == "P") {
            if (comp_move == "Rock") {
                std::cout << "User move: Paper\n";
                std::cout << "Computer move: " << comp_move << "\n";
                std::cout << "User wins\n";
                std::cout << "\n";
                ++user_wins;
            } else if (comp_move == "Paper") {
                std::cout << "User move: Paper\n";
                std::cout << "Computer move: " << comp_move << "\n";
                std::cout << "Tie\n";
                std::cout << "\n";
            } else {
                std::cout << "User move: Paper\n";
                std::cout << "Computer move: " << comp_move << "\n";
                std::cout << "Computer wins\n";
                std::cout << "\n";
                ++comp_wins;
            }
        } else if (user_move == "s" || user_move == "S") {
            if (comp_move == "Rock") {
                std::cout << "User move: Scissors\n";
                std::cout << "Computer move: " << comp_move << "\n";
                std::cout << "Computer wins\n";
                std::cout << "\n";
                ++comp_wins;
            } else if (comp_move == "Paper") {
                std::cout << "User move: Scissors\n";
                std::cout << "Computer move: " << comp_move << "\n";
                std::cout << "User wins\n";
                std::cout << "\n";
                ++user_wins;
            } else {
                std::cout << "User move: Scissors\n";
                std::cout << "Computer move: " << comp_move << "\n";
                std::cout << "Tie\n";
                std::cout << "\n";
            }
        } else {
            std::cout << "Wrong move! Try again\n";
            ++rounds;
        }
    }

    // Print scores and winner
    std::cout << "User got " << user_wins << " wins.\n";
    std::cout << "Computer got " << comp_wins << " wins.\n";
    print_winner(user_wins, comp_wins);

    return 0;
}
