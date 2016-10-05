#include <stdio.h>
#include <ncurses.h>

int main() {
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	printw("Hello, World!!! ");
	refresh();
	int ch;
	while ((ch = getch()) != 'q') {
		printw("%c", ch);
		refresh();
	}
	endwin();

	return(0);
}
