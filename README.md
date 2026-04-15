# C++

# C++ OOP Practicals

> Three complete C++ programs demonstrating core Object-Oriented Programming concepts —
> encapsulation, inheritance, polymorphism, file handling, and exception handling.

---

## Table of Contents

- [Practical 1 — Student Record System](#practical-1--student-record-system)
- [Practical 2 — Employee Salary Management System](#practical-2--employee-salary-management-system)
- [Practical 3 — Tic-Tac-Toe Game](#practical-3--tic-tac-toe-game)
- [Concepts Covered](#concepts-covered)
- [How to Compile and Run](#how-to-compile-and-run)

---

## Practical 1 — Student Record System

### Scenario
A student record management system for a college that allows addition, modification, and display of student records, along with grade average calculations.

### File
`student_record_system.cpp`

### Class Design

| Class | Inherits From | Extra Attribute |
|---|---|---|
| `Student` | — | `roll_number`, `name`, `marks[5]` |
| `UndergraduateStudent` | `Student` | `year_of_study` |
| `GraduateStudent` | `Student` | `research_topic` |

### Key Methods

| Method | Description |
|---|---|
| `Student()` | Default constructor |
| `Student(int roll)` | Overloaded — roll number only |
| `Student(int, string, float[])` | Overloaded — full information |
| `~Student()` | Destructor — cleans up object |
| `addStudent()` | Overloaded — takes input or direct arguments |
| `modifyStudent()` | Modify name, marks, or both |
| `displayStudent()` | Display full student record |
| `calculateAverage()` | Returns average of 5 subject marks |

### Salary Logic
```
Average = (Sum of 5 subject marks) / 5
```

### Sample Run
```
--------- MAIN MENU ---------
1. Add Student
2. Display Student
3. Modify Student
4. Calculate Average
5. Exit
Enter choice: 1

Student Type:
1. Undergraduate
2. Graduate
Enter type: 1

Enter Roll Number : 101
Enter Name        : Bhanu Pratap
Enter marks for 5 subjects:
  Subject 1 : 88
  Subject 2 : 92
  Subject 3 : 76
  Subject 4 : 85
  Subject 5 : 90
Student record added successfully.
Enter Year of Study (1-4): 1
```

### OOP Concepts Demonstrated
- **Encapsulation** — data members are `protected`/`private`
- **Constructor Overloading** — 3 versions of `Student()`
- **Destructor** — fires in correct derived → base order
- **Inheritance** — `UndergraduateStudent` and `GraduateStudent` extend `Student`
- **Polymorphism** — `addStudent()` and `displayStudent()` overridden in subclasses
- **Dynamic Memory** — objects created with `new`, freed with `delete`

---

## Practical 2 — Employee Salary Management System

### Scenario
An employee salary management system that reads employee records from a file, calculates net salary with bonuses and deductions, and writes updated data back to a file.

### File
`employee_salary_system.cpp`

### Class Design

| Class | Attributes |
|---|---|
| `Employee` | `employee_id`, `name`, `basic_salary`, `net_salary` |

### Key Methods

| Method | Description |
|---|---|
| `Employee()` | Default constructor |
| `Employee(int, string, float)` | Parameterized constructor |
| `calculateSalary()` | Computes net salary |
| `displayEmployee()` | Prints employee record |
| Getters / Setters | For file read/write operations |

### Salary Calculation Logic
```
Bonus      = 20% of Basic Salary
Tax        = 10% of Basic Salary
Net Salary = Basic + Bonus - Tax
```

### File Format — `employees.txt`
```
101 Bhanu 50000
102 Ravi 60000
103 Priya 45000
```
Each line: `employee_id  name  basic_salary`

### Output File — `employees_updated.txt`
```
ID    NAME        BASIC       NET SALARY
------------------------------------------------
101   Bhanu       50000       55000
102   Ravi        60000       66000
103   Priya       45000       49500
```

### Menu Flow
```
1. Load Employee Records    →  ifstream reads employees.txt
2. Calculate Salaries       →  calculateSalary() on all records
3. Save Updated Records     →  ofstream writes employees_updated.txt
4. Display All Records      →  prints all loaded records
5. Exit
```

### Exception Handling
| Scenario | Handled By |
|---|---|
| File not found | `if (!fin)` throws `runtime_error` |
| File write failure | `if (!fout)` throws `runtime_error` |
| No records loaded | Guard check before calculate/save |
| Max limit exceeded | `empCount < MAX` guard |

### OOP Concepts Demonstrated
- **Encapsulation** — all data `private`, accessed via getters/setters
- **Constructors** — default and parameterized
- **File Handling** — `ifstream` for reading, `ofstream` for writing
- **Exception Handling** — `try-catch` with `runtime_error`

---

## Practical 3 — Tic-Tac-Toe Game

### Scenario
A two-player Tic-Tac-Toe game with OOP design, supporting Player vs Player and Player vs AI modes.

### File
`tictactoe_game.cpp`

### Class Design

| Class | Inherits From | Extra Feature |
|---|---|---|
| `Game` | — | Core board, turn, winner logic |
| `PlayerVsAI` | `Game` | AI random move via `aiMove()` |

### Key Methods

| Method | Description |
|---|---|
| `resetGame()` | Resets board to positions 1–9 |
| `printBoard()` | Displays current 3×3 board |
| `makeMove(int pos)` | Validates and places mark |
| `checkWinner()` | Checks rows, cols, diagonals, draw |
| `switchTurn()` | Alternates between X and O |
| `aiMove()` | AI picks a random free cell |

### Board Layout
```
 1 | 2 | 3
-----------
 4 | 5 | 6
-----------
 7 | 8 | 9
```
Player enters `1–9` → mapped to row/col via:
```
row = (pos - 1) / 3
col = (pos - 1) % 3
```

### Win Detection Logic
```
Check 3 rows        →  board[i][0] == board[i][1] == board[i][2]
Check 3 columns     →  board[0][j] == board[1][j] == board[2][j]
Check diagonal      →  board[0][0] == board[1][1] == board[2][2]
Check anti-diagonal →  board[0][2] == board[1][1] == board[2][0]
Draw                →  all 9 cells filled, no winner
```

### Winner Values
| Value | Meaning |
|---|---|
| `'X'` | Player X wins |
| `'O'` | Player O wins |
| `'D'` | Draw |
| `' '` | Game ongoing |

### Sample Run
```
--------- MAIN MENU ---------
1. Player vs Player
2. Player vs AI
3. Exit

 1 | 2 | 3
-----------
 4 | 5 | 6
-----------
 7 | 8 | 9

Player X, enter position (1-9): 5

 1 | 2 | 3
-----------
 4 | X | 6
-----------
 7 | 8 | 9
```

### OOP Concepts Demonstrated
- **Encapsulation** — `board`, `turn`, `winner` all `private`
- **Constructors / Destructor** — proper initialization and cleanup
- **Inheritance** — `PlayerVsAI` extends `Game`
- **Polymorphism** — `aiMove()` adds specialized behavior in derived class
- **Game Logic** — complete win/draw detection, turn alternation

---

## Concepts Covered

| OOP Concept | Practical 1 | Practical 2 | Practical 3 |
|---|:---:|:---:|:---:|
| Classes & Objects | ✅ | ✅ | ✅ |
| Encapsulation | ✅ | ✅ | ✅ |
| Constructors (Default) | ✅ | ✅ | ✅ |
| Constructors (Overloaded) | ✅ | ✅ | — |
| Destructor | ✅ | ✅ | ✅ |
| Inheritance | ✅ | — | ✅ |
| Polymorphism | ✅ | — | ✅ |
| File Handling (ifstream) | — | ✅ | — |
| File Handling (ofstream) | — | ✅ | — |
| Exception Handling | — | ✅ | — |
| Dynamic Memory (new/delete) | ✅ | — | — |
| Menu-Driven Program | ✅ | ✅ | ✅ |

---

## How to Compile and Run

### Requirements
- Any C++ compiler: `g++`, MinGW, or Antigravity IDE
- C++11 or later

### Compile (g++ / MinGW)
```bash
# Practical 1
g++ student_record_system.cpp -o student

# Practical 2
g++ employee_salary_system.cpp -o employee

# Practical 3
g++ tictactoe_game.cpp -o tictactoe
```

### Run
```bash
./student      # Linux / WSL
./employee
./tictactoe

student.exe    # Windows
employee.exe
tictactoe.exe
```

### Notes
- For **Practical 2**, make sure `employees.txt` is in the **same folder** as the executable. The program auto-creates a sample file if it does not exist.
- All programs use only standard headers: `<iostream>`, `<string>`, `<fstream>`, `<cstdlib>`, `<ctime>` — no external libraries needed.

---

*Practicals completed as part of first-year C++ coursework.*
