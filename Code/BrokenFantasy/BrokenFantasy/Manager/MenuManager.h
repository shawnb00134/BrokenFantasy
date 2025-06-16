#pragma once

#include "../View/Menu.h"

using namespace View;

namespace Manager
{
	class MenuManager
	{
	public:
		MenuManager();
		~MenuManager();
		void Draw();
	private:
		Menu mainMenu;
	};
}


