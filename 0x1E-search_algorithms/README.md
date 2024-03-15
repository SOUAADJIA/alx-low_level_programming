# 0x1E. C - Search Algorithms

## Description

This project focuses on understanding and implementing search algorithms in the C programming language. Specifically, it covers the concepts of linear search and binary search algorithms. These algorithms are fundamental in computer science for finding elements within a data structure efficiently. By completing this project, you will develop a deeper understanding of how search algorithms work and when to use them effectively.

## Resources

To aid in your understanding of search algorithms, consider exploring the following resources:

- [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
- [Space complexity](https://en.wikipedia.org/wiki/Space_complexity)
- [Search Algorithms video playlist](https://www.youtube.com/playlist?list=PLDN4rrl48XKpZkf03iYFl-O29szjTrs_O)

## Learning Objectives

Upon completion of this project, you should be able to explain the following concepts without relying on external sources:

### General
- What is a search algorithm?
- What is a linear search?
- What is a binary search?
- What is the best search algorithm to use depending on your needs?

## Requirements

### General
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with the options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file, at the root of the project folder, is mandatory
- Code should follow the Betty style
- Do not use global variables
- No more than 5 functions per file
- Only use the `printf` function of the standard library; avoid using other library functions like `strdup`, `malloc`, etc.
- The prototypes of all functions should be included in the header file `search_algos.h`
- Ensure your header files are include guarded

### More Info
- When writing files containing Big O notations, use the provided format:
  - `O(1)`
  - `O(n)`
  - `O(n!)`
  - `n*m -> O(nm)`
  - `n square -> O(n^2)`
  - `sqrt n -> O(sqrt(n))`
  - `log(n) -> O(log(n))`
  - `n * log(n) -> O(nlog(n))`

## Files

- `0-linear.c`: Implementation of the linear search algorithm.
- `0-main.c`: Examples to test the `0-linear.c` function.
- `search_algos.h`: Header file containing function prototypes.

## Usage

To utilize the provided functions, clone this repository and compile the files using `gcc`. For example:

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o main 0-main.c 0-linear.c
$ ./main

