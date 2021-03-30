#include <cstdlib>
#include <iostream>
#include <string>

const int ROUNDS = 10;
const int NUM_OF_MOVES = 3;
const std::string MOVES[NUM_OF_MOVES] = {"Rock", "Paper", "Scissors"};

int main() {
    std::string user_move;
    std::cout << ROUNDS << " rounds!\n\n";

    for (int i = 0; i < ROUNDS; ++i) {
        std::cout << ">> ";
        std::cin >> user_move;
    }

    return 0;
}
