# RockPaperScissors
Play rock-paper-scissors with the computer which generates random moves. The
rounds is specified by the user through CLI argument.

## Installation and usage
```shell
git clone https://github.com/rakin406/RockPaperScissors.git
cd RockPaperScissors
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make
./main -h     # Show help information
./main 10     # You can give any rounds here, I gave 10
```
