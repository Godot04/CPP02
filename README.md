# C++ — Module 02: Fixed-point Numbers and Operator Overloads

![42 school](https://img.shields.io/badge/42-School-000000?style=flat-square&logo=42&logoColor=white)
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)
![Standard](https://img.shields.io/badge/Standard-C%2B%2B98-blue?style=flat-square)

## About

Module 02 focuses on implementing a small `Fixed` class (fixed-point numbers) and exploring object semantics, conversions, and operator overloading in C++98. Each exercise builds on the previous one: starting from a minimal class, adding copy semantics, and finally providing conversion and I/O-friendly behavior.

## Project goals

- Implement a simple fixed-point numeric type with predictable behavior
- Practice constructors, copy constructor, and assignment operator
- Implement conversion routines and operator overloads (where required)

## Exercises overview

### Exercise 00: Basic `Fixed` skeleton
**Directory:** `ex00/`

Implements the minimal `Fixed` class with a default constructor, destructor, and a `main.cpp` that demonstrates basic instantiation and compilation.

Learning concepts:
- Class skeleton and header/implementation separation
- Default constructor and destructor
- Building with a Makefile

### Exercise 01: Copy semantics and internal state
**Directory:** `ex01/`

Extends `Fixed` with a copy constructor, assignment operator, and member functions to access internal representation.

Learning concepts:
- Copy constructor and operator=
- Proper handling of member data
- Const-correctness for accessors

### Exercise 02: Conversions and operator-friendly behavior
**Directory:** `ex02/`

Adds conversion functions and user-facing behaviors expected in the subject: converting to/from integer/floating-point values and supporting readable output from `main.cpp`.

Learning concepts:
- Implementing conversion functions
- Operator overloading (as required by the exercise)
- Ensuring predictable output for demonstration programs

## Build and run

Each exercise contains its own `Makefile`. To build and run an exercise from the repository root:

```bash
cd ex00
make
./ex00

# For other exercises:
cd ../ex01
make
./ex01

cd ../ex02
make
./ex02
```

## Compilation flags

- Compiler: `c++` / `g++`
- Recommended flags: `-std=c++98 -Wall -Wextra -Werror`

## Testing

Recommended checks:
- Build each exercise with `make` and confirm the produced binary runs.
- Verify copy semantics by inspecting output from `main.cpp` in `ex01`.
- Check conversions and printed values in `ex02` to ensure correct behavior.

## Author

**opopov** — 42 School student
