# Fillit

Fillit is a program that takes a file containing a list of tetriminoes and arranges them in the smallest possible square.

## The Problem
A Tetrimino block is a shape made up of 4 consecutive characters. You’ve probably seen Tetrominoes in the popular game, Tetris. For the purpose of this puzzle, Tetrominoes are considered fixed, meaning that they cannot be rotated and there are a total of 19 possible pieces that can be provided as input, as pictured below:

The goal of the puzzle is to find the smallest possible square board that the tetrominoes can fit in. Below is an examples of input and the desired solutions:

Note that when there are multiple solutions possible within the same size square, the solution with the pieces placed in the order they are provided at their top-most left-most positions is correct.

## Validating the Input
The first step was to validate the input. Tetrominoes needed to be passed into our program as a file in the following format.

After writing the basic validation such as checking if the newlines were in the right place, we moved on to the more difficult checks. Specifically, we needed to validate the individual tetromino pieces:

Although we had a complete list of all 19 valid tetrominoes, checking every piece against that list isn’t efficient so we had to come up with a way to validate blocks. After discussing several different ideas, we decided the easiest implementation was to count the total number of sides touching:

If we find a single character with zero adjacent blocks, we can discard the tetromino input immediately. However, a more complicated case is the invalid piece pictured in dark purple above. Each piece is touching another piece, and yet it is does not fit the definition of a tetromino. As long as there are 6 sides total touching between the characters, we can be sure that the input piece is, in fact, a valid tetromino.
Once we validated the tetrominoes, we were ready to start placing them on a board.

## Choosing Data Structures

The elements we needed to solve this problem were a list of tetrominoes and a square board to try and place the tetrominoes on. We chose to represent each tetrimino as a structure that contained a height, width and character array and we stored the tetrominoes in a linked list to keep track of their input order. We knew we could use recursion while placing the pieces so a singly linked list was ok, as there was no need to traverse backwards in the list.
Since we chose to store the shape of the tetromino pieces as an array of strings within the tetromino structure, we decided to also represent the square solution board as an array of strings. We found this was especially useful while debugging as at any point we could easily print tetromino pieces and the current state of the solution on the board.



## Getting Started

To test out this program, clone the repo, run `make` and then run the program with one of the sample input maps included in the test\_input repo. Eg. `./fillit test_input/valid_maps/basic_input`. Feel free to make your own input file and pass it in as a parameter to the program. You can check how long your tetriminoes take to find the smallest square by running `time ./fillit <your input file>`.


## Testing

You can find unit tests and see a variety of boards solved by running `make test`.You may need to install [Check](https://libcheck.github.io/check/web/install.html) if you don't have it installed already.

## Authors

* [*Maria Goretti Rivera Mendoza*](https://github.com/GorettiRivera)
* [*Consuelo Alejandra Pinto Toro*](https://github.com/hatejandra)
