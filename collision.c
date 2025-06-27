#include "header.h"

int check_collision(Snake *snake)
{
    Point head = snake->body[0];

    if (head.x < 0 || head.x >= WIDTH || head.y < 0 || head.y >= HEIGHT)
        return 1;

    for (int i = 1; i < snake->length; i++)
    {
        if (head.x == snake->body[i].x && head.y == snake->body[i].y)
            return 1;
    }

    return 0;
}

int check_collision_2(Snake *snake1, Snake *snake2)
{
    Point h1 = snake1->body[0];
    Point h2 = snake2->body[0];

    if (h1.x < 0 || h1.x >= WIDTH || h1.y < 0 || h1.y >= HEIGHT ||
        h2.x < 0 || h2.x >= WIDTH || h2.y < 0 || h2.y >= HEIGHT)
        return 1;

    for (int i = 1; i < snake1->length; i++)
    {
        if (h1.x == snake1->body[i].x && h1.y == snake1->body[i].y)
            return 1;
    }

    for (int i = 1; i < snake2->length; i++)
    {
        if (h2.x == snake2->body[i].x && h2.y == snake2->body[i].y)
            return 1;
    }

    for (int i = 1; i < snake2->length; i++)
    {
        if (h1.x == snake2->body[i].x && h1.y == snake2->body[i].y)
            return 1;
    }

    for (int i = 1; i < snake1->length; i++)
    {
        if (h2.x == snake1->body[i].x && h2.y == snake1->body[i].y)
            return 1;
    }

    return 0;
}
