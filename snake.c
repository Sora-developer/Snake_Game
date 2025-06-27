#include "header.h"

Point food;

void initialize(Snake *snake)
{
    snake->length = 1;
    snake->body[0].x = WIDTH / 4;
    snake->body[0].y = HEIGHT / 4;
    snake->direction = RIGHT;

    food.x = rand() % WIDTH;
    food.y = rand() % HEIGHT;
}

void initialize_2(Snake *s1, Snake *s2)
{
    initialize(s1);
    s2->length = 1;
    s2->body[0].x = (3 * WIDTH) / 4;
    s2->body[0].y = (3 * HEIGHT) / 4;
    s2->direction = LEFT;

    food.x = rand() % WIDTH;
    food.y = rand() % HEIGHT;
}

void draw(Snake *snake)
{
    clear_screen();
    // Top border
    for (int i = 0; i <= WIDTH + 1; i++)
        printf("#");
    printf("\n");

    for (int y = 0; y < HEIGHT; y++)
    {
        printf("#"); // Left border
        for (int x = 0; x < WIDTH; x++)
        {
            int printed = 0;
            // Print snake
            for (int k = 0; k < snake->length; k++)
            {
                if (snake->body[k].x == x && snake->body[k].y == y)
                {
                    printf("O");
                    printed = 1;
                    break;
                }
            }
            // Print food
            if (!printed && food.x == x && food.y == y)
            {
                printf("*");
                printed = 1;
            }
            if (!printed)
                printf(" ");
        }
        printf("#\n"); // Right border
    }

    // Bottom border
    for (int i = 0; i <= WIDTH + 1; i++)
        printf("#");
    printf("\n");

    fflush(stdout);
}

void draw_2(Snake *s1, Snake *s2)
{
    clear_screen();
    // Top border
    for (int i = 0; i <= WIDTH + 1; i++)
        printf("#");
    printf("\n");

    for (int y = 0; y < HEIGHT; y++)
    {
        printf("#"); // Left border
        for (int x = 0; x < WIDTH; x++)
        {
            int printed = 0;
            // Print snake 1
            for (int k = 0; k < s1->length; k++)
            {
                if (s1->body[k].x == x && s1->body[k].y == y)
                {
                    printf("O");
                    printed = 1;
                    break;
                }
            }
            // Print snake 2
            if (!printed)
            {
                for (int k = 0; k < s2->length; k++)
                {
                    if (s2->body[k].x == x && s2->body[k].y == y)
                    {
                        printf("A");
                        printed = 1;
                        break;
                    }
                }
            }
            // Print food
            if (!printed && food.x == x && food.y == y)
            {
                printf("*");
                printed = 1;
            }
            if (!printed)
                printf(" ");
        }
        printf("#\n"); // Right border
    }

    // Bottom border
    for (int i = 0; i <= WIDTH + 1; i++)
        printf("#");
    printf("\n");

    fflush(stdout);
}
