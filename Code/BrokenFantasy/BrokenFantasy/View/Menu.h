#pragma once

#include <raylib.h>
#include <string>

#include "Button.h"

namespace View
{
	class Menu
	{
	public:
		Menu();
		~Menu();
		void Draw();
		std::string getScreenTitle() const;
	private:
		Texture2D background;
		Button startButton;
		Button exitButton;
		std::string screenTitle;
	};
}
