#include "header.h"

void change_direction(Snake *snake, char input)
{
    switch (input)
    {
    case 'w':
        if (snake->direction != DOWN)
            snake->direction = UP;
        break;
    case 's':
        if (snake->direction != UP)
            snake->direction = DOWN;
        break;
    case 'a':
        if (snake->direction != RIGHT)
            snake->direction = LEFT;
        break;
    case 'd':
        if (snake->direction != LEFT)
            snake->direction = RIGHT;
        break;
    }
}

void change_direction_2(Snake *snake1, Snake *snake2, char input)
{
    change_direction(snake1, input);

    switch (input)
    {
    case 'i':
        if (snake2->direction != DOWN)
            snake2->direction = UP;
        break;
    case 'k':
        if (snake2->direction != UP)
            snake2->direction = DOWN;
        break;
    case 'j':
        if (snake2->direction != RIGHT)
            snake2->direction = LEFT;
        break;
    case 'l':
        if (snake2->direction != LEFT)
            snake2->direction = RIGHT;
        break;
    }
}

int gamemode()
{
    int n;
    printf("Select game mode:\n1 -> Solo\n2 -> 1 vs 1 Multiplayer\n> ");
    scanf("%d", &n);
    return n;
}
