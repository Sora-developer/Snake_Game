#include "header.h"

void move_snake(Snake *snake)
{
    Point new_head = snake->body[0];

    switch (snake->direction)
    {
    case UP:
        new_head.y--;
        break;
    case DOWN:
        new_head.y++;
        break;
    case LEFT:
        new_head.x--;
        break;
    case RIGHT:
        new_head.x++;
        break;
    }

    if (new_head.x == food.x && new_head.y == food.y)
    {
        snake->length++;
        food.x = rand() % WIDTH;
        food.y = rand() % HEIGHT;
    }

    for (int i = snake->length - 1; i > 0; i--)
    {
        snake->body[i] = snake->body[i - 1];
    }
    snake->body[0] = new_head;
}

void move_snake_2(Snake *s1, Snake *s2)
{
    move_snake(s1);
    move_snake(s2);
}
