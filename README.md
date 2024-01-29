# Battleship Game in C++

This repository contains a simple console-based Battleship game implemented in C++. The game is a single-player version of the classic Battleship game, where the player tries to sink a set of randomly placed ships by guessing their locations on a 4x4 grid.

## Game Features

- **Random Ship Placement:** Each game session randomly places 4 ships on a 4x4 grid.
- **Intuitive Gameplay:** Players input row and column numbers between 1 and 4, making the game easy to understand and play.
- **Replayability:** The game can be played multiple times with different ship placements.

## Getting Started

### Prerequisites

To run this game, you need a C++ compiler installed on your machine.

### Installation

1. Clone the repository to your local machine:
   ```bash
   git clone https://github.com/yourusername/battleship-cpp.git

2. Navigate to the cloned directory:
    ```bash
    cd battleship-cpp

### Compilation

Compile the game using your C++ compiler. For example, with GCC:

    g++ -o battleship main.cpp

### Running the Game
After compilation, you can run the game:

    ./battleship


## How to play

After starting the game, you will be asked to choose a row and a column on a 4x4 grid (numbers between 1 and 4).

If you hit a ship, you'll get a "Hit!" message. Otherwise, you'll see "Miss".

The game continues until you have sunk all 4 ships.

After each game, you can choose to play again or exit.