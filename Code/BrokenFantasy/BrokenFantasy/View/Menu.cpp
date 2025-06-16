#include "Menu.h"
#include <iostream>

namespace View
{
	Menu::Menu() : startButton("assets/start_button.png", {100, 200}, 0.5f), exitButton("assets/exit_button.png", {100, 300}, 0.5f)
	{
		background = LoadTexture("assets/background.png");
	}

	Menu::~Menu()
	{
	}

	void Menu::Draw()
	{
		DrawTexture(background, 0, 0, WHITE);
		startButton.Draw();
		exitButton.Draw();

		DrawText("TITLE MENU GOES HERE", 300, 300, 20, DARKGRAY);
	}

	std::string Menu::getScreenTitle() const
	{
		return screenTitle;
	}
}