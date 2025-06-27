#include "header.h"

void print_instructions()
{
    printf("Welcome to Snake Game!\n");
    printf("Solo Controls: W/A/S/D\n");
    printf("Duel Controls:\n");
    printf("  Player O: W/A/S/D\n");
    printf("  Player A: I/J/K/L\n");
    printf("Press Q to quit during game.\n");
    printf("-------------------------\n");
}

int main()
{
    print_instructions();
    int mode = gamemode();

    srand(time(NULL));
    disable_buffering();
    atexit(restore_buffering);

    if (mode == 1)
    {
        Snake snake;
        char input;

        initialize(&snake);
        printf("Press W to start...\n");
        do
        {
            read(STDIN_FILENO, &input, 1);
        } while (input != 'w' && input != 'W');

        while (1)
        {
            printf("\e[?25l"); // Hide cursor
            if (read(STDIN_FILENO, &input, 1) == 1)
            {
                if (input == 'q' || input == 'Q')
                    break;
                change_direction(&snake, input);
            }
            move_snake(&snake);
            if (check_collision(&snake))
                break;
            draw(&snake);
            usleep(120000);
        }

        printf("\nGame Over! Your score: %d\n", snake.length - 1);
    }
    else if (mode == 2)
    {
        Snake snake1, snake2;
        char input;

        initialize_2(&snake1, &snake2);
        printf("Press W to start...\n");
        do
        {
            read(STDIN_FILENO, &input, 1);
        } while (input != 'w' && input != 'W');

        while (1)
        {
            printf("\e[?25l");
            if (read(STDIN_FILENO, &input, 1) == 1)
            {
                if (input == 'q' || input == 'Q')
                    break;
                change_direction_2(&snake1, &snake2, input);
            }

            move_snake_2(&snake1, &snake2);
            if (check_collision_2(&snake1, &snake2))
                break;
            draw_2(&snake1, &snake2);
            usleep(120000);
        }

        printf("\nGame Over! O Score: %d | A Score: %d\n", snake1.length - 1, snake2.length - 1);
    }
    else
    {
        printf("Invalid game mode.\n");
    }

    printf("\e[?25h"); // Show cursor
    return 0;
}
