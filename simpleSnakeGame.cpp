#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h> // For _kbhit() and _getch()
#include <windows.h> // For Sleep()

using namespace std;

const int WIDTH = 20;
const int HEIGHT = 10;
const int MAX_SNAKE_LENGTH = 100;

enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };

class SnakeGame {
private:
    int grid[HEIGHT][WIDTH]; 
    pair<int, int> snake[MAX_SNAKE_LENGTH];
    pair<int, int> food; 
    Direction dir;
    bool gameOver;
    int score;
    int snakeLength;
    
}