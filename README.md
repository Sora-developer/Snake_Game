# Snake Game

A terminal-based Snake game written in C, featuring both solo and duel (1 vs 1 multiplayer) modes.

## Features

- Play solo or compete against a friend in duel mode.
- Game grid of size 60x30.
- Simple terminal graphics using ASCII characters.
- Food appears randomly; only one food item at a time.
- Duel mode introduces unique features for competitive play.
- Terminal display and input buffering are managed for smooth gameplay.

## Controls

### Solo Mode & 'O' Snake in Duel Mode
- **W**: Up
- **S**: Down
- **A**: Left
- **D**: Right

### 'A' Snake in Duel Mode
- **I**: Up
- **K**: Down
- **J**: Left
- **L**: Right

- **Q**: Quit the game

## File Structure

- [`main.c`]: Main entry point, handles game loop and mode selection.
- [`terminal.c`]: Terminal display and input buffering functions.
- [`snake.c`]: Snake and food initialization, drawing functions.
- [`movesnake.c`]: Functions to move the snake(s).
- [`chngdir.c`]): Functions to change snake direction based on input.
- [`collision.c`]): Collision detection functions.
- [`header.h`]: Common definitions, structs, and function declarations.
- [`Makefile`]: Build instructions.

## Building and Running

1. Open a terminal and navigate to the `230150010_Om` directory.
2. Build the game using `make`:
   ```sh
   make
   ```
3. Run the game:
   ```sh
   ./game
   ```

## Notes

- The game is designed for Unix-like terminals.
- Make sure your terminal supports ANSI escape codes for proper display.
- Cursor is hidden during gameplay and restored on exit.

## Credits

This project was created as a learning exercise.

**Enjoy!**
