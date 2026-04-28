# C++ Exercises — CPP02

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)
![Standard](https://img.shields.io/badge/Standard-C%2B%2B98-blue?style=flat-square)

## About

This repository contains three small C++ exercises (ex00, ex01, ex02) that demonstrate basic class design, operator overloading, and the implementation of a small utility class. The code is written to be compatible with the C++98 standard and follows small, self-contained exercise constraints used in introductory OOP training.

## Project structure

- ex00/
  - Fixed.cpp, Fixed.hpp, main.cpp, Makefile
- ex01/
  - Fixed.cpp, Fixed.hpp, main.cpp, Makefile
- ex02/
  - Fixed.cpp, Fixed.hpp, main.cpp, Makefile

Each exercise implements a `Fixed` class (fixed-point number) and a small `main.cpp` demonstrating its usage. Header and implementation files are separate and a `Makefile` is provided in each exercise folder to build the corresponding example.

## Exercises overview

- Exercise 00 — Basic class skeleton
  - Implements a basic `Fixed` class with default constructor, destructor and a simple `main` that compiles and runs.
  - Learning goals: project layout, header/implementation separation, building with a Makefile.

- Exercise 01 — Copy semantics and member functions
  - Adds copy constructor, assignment operator, and additional methods to `Fixed`.
  - Learning goals: copy constructor, operator=, proper resource handling, and value semantics.

- Exercise 02 — Operator overloads and conversions
  - Extends `Fixed` with conversion methods and I/O-friendly behavior used from `main.cpp`.
  - Learning goals: operator overloading, const-correctness, and small utility methods.

## Build and run

Each exercise has its own `Makefile`. From the repository root run:

```bash
cd ex00
make
./ex00

# repeat for ex01 and ex02
```

If the executable is named differently in the `Makefile`, run the produced binary instead (check the `Makefile`).

## Compiler and flags

- Compiler: `g++` (or compatible)
- Recommended flags: `-Wall -Wextra -Werror -std=c++98`

## Notes and style

- Code targets C++98 style and simplicity; avoid modern C++ conveniences not available in C++98.
- Keep headers guarded and avoid `using namespace` in headers.

## Author

opopov — student exercises and learning notes.

If you want, I can expand the README with example outputs from each exercise, add short API notes for the `Fixed` class, or run the builds and include the exact produced binary names. Tell me which you'd prefer next.
