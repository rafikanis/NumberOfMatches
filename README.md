# NumberOfMatches

A lightweight C++ console application designed to calculate tournament scheduling, fixture counts, and match statistics for various sports competition formats.

## Features

### 1. League Stage (Double Round-Robin / Home & Away)
Given the total number of participating teams, the program calculates:
* **Total Matches:** The overall number of fixtures in the league.
* **Matches per Leg:** Fixture count for a single leg (e.g., home leg vs. away leg).
* **Matches per Game Week:** How many games are played in each round.
* **Individual Team Matches:** The total matches played by each team during the league.

### 2. Group Stage
Given the number of groups, teams per group, and whether they play a Home-Away format, the program calculates:
* **Total Group Stage Matches:** The total number of fixtures across all groups.
* **Matches per Group:** Fixture count within each group.
* **Individual Team Matches:** The total matches played by each team during the group stage.

---

## Getting Started

### Prerequisites
To build and run this project, you need:
* A C++ compiler supporting C++11 or newer (such as GCC/MinGW, Clang, or MSVC).
* Alternatively, you can open and run the project using **Code::Blocks** using the included `NumberOfMatches.cbp` project file.

### Compilation
You can compile the project using standard CLI compiler tools (e.g., `g++`):
```bash
g++ -O2 main.cpp -o NumberOfMatches
```

### Running the Executable
Run the compiled binary in your console:
```bash
./NumberOfMatches
```

---

## How it Works
The program utilizes basic combinatorics to determine fixture counts:
* **Round-Robin Match count:** Uses the combination equation $C(n, 2) = \frac{n(n-1)}{2}$ to find unique matchups between $n$ teams.
* **Home-Away Multiplier:** Multiplies the combination result by 2 to account for both legs.
