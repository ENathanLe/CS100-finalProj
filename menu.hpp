#ifndef __MENU_HPP__
#define __MENU_HPP__

#include "menu.hpp"

class Menu {
	private:
		void saveGame(ifstream& file);
		void loadGame(fstream& file);
		void startGame();
		void loadDungeon();
};

#endif

