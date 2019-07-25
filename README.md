# Fillit

Fillit is a program that takes a file containing a list of tetriminoes and arranges them in the smallest possible square.

## The Problem
A Tetrimino block is a shape made up of 4 consecutive characters. You’ve probably seen Tetrominoes in the popular game, Tetris. For the purpose of this puzzle, Tetrominoes are considered fixed, meaning that they cannot be rotated and there are a total of 19 possible pieces that can be provided as input, as pictured below:

Fillit is a program that takes a file containing a list of tetriminoes and arranges them in the smallest possible square.

## Getting Started

To test out this program, clone the repo, run `make` and then run the program with one of the sample input maps included in the test\_input repo. Eg. `./fillit test_input/valid_maps/basic_input`. Feel free to make your own input file and pass it in as a parameter to the program. You can check how long your tetriminoes take to find the smallest square by running `time ./fillit <your input file>`.


## Testing

You can find unit tests and see a variety of boards solved by running `make test`.You may need to install [Check](https://libcheck.github.io/check/web/install.html) if you don't have it installed already.

## Authors

* [*Maria Goretti Rivera Mendoza*](https://github.com/GorettiRivera)
* [*Consuelo Alejandra Pinto Toro*](https://github.com/hatejandra)
