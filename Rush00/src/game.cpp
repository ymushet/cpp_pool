#include "game.hpp"


Game::Game(void)
{
	win = initscr();
	getmaxyx(win, WIDTH, HEIGHT);		/* Start curses mode*/
	cbreak();							/* One cherectr at a time mode */
	noecho();							/* No echo */						/* Erase all at the window*/
	refresh();							/* Erase and redraw */
	keypad(win, true);
	curs_set(0);
	start_color();
	attron(A_BOLD);
	box(win, 0, 0);
	attroff(A_BOLD);
	Ship = new Player (5, 5, 3, '^', HEIGHT, WIDTH);
	Dragons = new Dragon_Enemy*[10];
	Ships = new Ship_Enemy*[10];
	Meteors = new Meteor_Enemy*[10];
	for(int i = 0; i < 10; i++) {
		Dragons[i] = new Dragon_Enemy();
		Ships[i] = new Ship_Enemy();
		Meteors[i] = new Meteor_Enemy();
	}
}

Game::~Game(void)
{
	for (int i = 0; i < 0; i++) {
		delete Dragons[i];
		delete Ships[i];
		delete Meteors[i];
	}
	delete [] Ships;
	delete [] Dragons;
	delete [] Meteors;
	delete Ship;
	endwin();
}

void Game::PrintMap(void) {
	mvwprintw(win, Ship->getX(), Ship->getY(), "%c", Ship->getSymbol());
	refresh();
}

void Game::RunGame (void) {

    while(1)
    {
    	int code = wgetch(win);
   		Ship->movePlayer(win, code);
	    
   		refresh();
    }
    refresh();
}
