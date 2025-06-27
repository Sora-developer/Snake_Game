#include "header.h"

void clear_screen()
{
    printf("\033[H\033[J");
}

void goto_xy(int x, int y)
{
    printf("\033[%d;%dH", y, x);
}

void disable_buffering()
{
    struct termios t;
    tcgetattr(STDIN_FILENO, &t);
    t.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &t);
}

void restore_buffering()
{
    struct termios t;
    tcgetattr(STDIN_FILENO, &t);
    t.c_lflag |= ICANON | ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &t);
}
