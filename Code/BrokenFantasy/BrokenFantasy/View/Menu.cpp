#include "Menu.h"
#include <iostream>

namespace View
{
	Menu::Menu()
	{
	}

	Menu::~Menu()
	{
	}

	void Menu::Draw()
	{
		std::cout << "Menu Being Drawn" << std::endl;
	}

	std::string Menu::getScreenTitle() const
	{
		return screenTitle;
	}
}