# C++ Module 01: Memory allocation, pointers to members, references, switch statements

## Overview

This module covers memory management in C++ including dynamic allocation, pointers to member functions, references, and switch statements.

## Exercises

### ex00 - BraiiiiiiinnnzzzZ
Understand heap vs stack allocation with a Zombie class.

**Files:** `Zombie.hpp`, `Zombie.cpp`, `main.cpp`, `newZombie.cpp`, `randomChump.cpp`, `Makefile`

**Concepts:**
- Stack allocation (automatic) vs Heap allocation (dynamic with `new`/`delete`)
- Destructors for resource cleanup

### ex01 - Moar brainz!
Create a horde of zombies allocated in a single heap allocation.

**Files:** `Zombie.hpp`, `Zombie.cpp`, `main.cpp`, `zombieHorde.cpp`, `Makefile`

**Concepts:**
- Array allocation with `new[]`
- Initializing multiple objects
- Proper cleanup with `delete[]`

### ex02 - HI THIS IS BRAIN
Demystify references through a simple comparison with pointers.

**Files:** `main.cpp`, `Makefile`

**Output example:**
```
String address: 0x7ffc8b4e7a70
Pointer address: 0x7ffc8b4e7a70
Reference address: 0x7ffc8b4e7a70
String value: HI THIS IS BRAIN
Pointer value: HI THIS IS BRAIN
Reference value: HI THIS IS BRAIN
```

### ex03 - Unnecessary violence
Learn pointers to members and references with Weapon and Human classes.

**Files:** `Weapon.hpp`, `Weapon.cpp`, `HumanA.hpp`, `HumanA.cpp`, `HumanB.hpp`, `HumanB.cpp`, `main.cpp`, `Makefile`

**Concepts:**
- References to members (HumanA)
- Pointers to members (HumanB)
- The difference between reference and pointer behavior

### ex04 - Sed is for losers
Implement a file replacement program using std::string manipulation.

**Files:** `main.cpp`, `*.cpp`, `*.hpp`, `Makefile`

**Usage:**
```bash
./sed_for_losers <filename> <s1> <s2>
```

Creates `<filename>.replace` with all occurrences of `s1` replaced by `s2`.

**Forbidden:** `std::string::replace()`

### ex05 - Harl 2.0
Automate Harl's complaints using pointers to member functions.

**Files:** `Harl.hpp`, `Harl.cpp`, `main.cpp`, `Makefile`

**Levels:** DEBUG, INFO, WARNING, ERROR

**Concepts:**
- Pointers to member functions
- Function pointer arrays
- Avoiding if/else chains

### ex06 - Harl filter (Bonus)
Filter Harl's complaints by log level using switch statements.

**Files:** `Harl.hpp`, `Harl.cpp`, `main.cpp`, `Makefile`

**Usage:**
```bash
./harlFilter "WARNING"
```

Displays WARNING and ERROR messages.

## Key Concepts

- **Memory Management**: `new`, `delete`, `new[]`, `delete[]`
- **Pointers**: Address manipulation, dereferencing
- **References**: Alternative syntax for pointers, non-nullable
- **Member Functions**: Pointers to member functions
- **Switch Statements**: Control flow with multiple conditions
- **Destructors**: Resource cleanup and RAII

## Compilation

```bash
cd cppXX/exXX
make
```

## Memory Leak Checking

Test for memory leaks using valgrind:
```bash
valgrind --leak-check=full ./program_name
```
