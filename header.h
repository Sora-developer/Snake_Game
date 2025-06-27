// #include <stdio.h>
// #include <unistd.h>
// #include <termios.h>
// #include <time.h>
// #include <stdlib.h>

// #define WIDTH 60
// #define HEIGHT 30
// #define RED "\x1b[31m"
// #define RESET_COLOR "\x1b[0m"

// enum
// {
// 	UP,
// 	DOWN,
// 	LEFT,
// 	RIGHT
// };

// typedef struct
// {
// 	int x, y;
// } Point;

// typedef struct
// {
// 	Point body[100];
// 	int length;
// 	int direction;
// } Snake;

// extern Point food;

// void clear_screen();
// void goto_xy();
// void disable_buffering();
// void restore_buffering();
// void initialize();
// void initialize_2();
// void draw();
// void draw_2();
// void move_snake();
// void move_snake_2();
// int check_collision();
// int check_collision_2();
// void change_direction(Snake *snake, char input);
// void change_direction_2(Snake *snake, Snake *snake2, char input1);
// int gamemode();

#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <time.h>
#include <stdlib.h>

#define WIDTH 60
#define HEIGHT 30
#define RED "\x1b[31m"
#define RESET_COLOR "\x1b[0m"

enum
{
	UP,
	DOWN,
	LEFT,
	RIGHT
};

typedef struct
{
	int x, y;
} Point;

typedef struct
{
	Point body[100];
	int length;
	int direction;
} Snake;

extern Point food;

// Terminal control
void clear_screen(void);
void goto_xy(int x, int y);
void disable_buffering(void);
void restore_buffering(void);

// Game logic
void initialize(Snake *snake);
void initialize_2(Snake *snake1, Snake *snake2);
void draw(Snake *snake);
void draw_2(Snake *snake1, Snake *snake2);
void move_snake(Snake *snake);
void move_snake_2(Snake *snake1, Snake *snake2);
int check_collision(Snake *snake);
int check_collision_2(Snake *snake1, Snake *snake2);
void change_direction(Snake *snake, char input);
void change_direction_2(Snake *snake1, Snake *snake2, char input1);
int gamemode(void);

#endif // HEADER_H