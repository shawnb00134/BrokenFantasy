#pragma once

#include <raylib.h>
#include <string>

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
		//Texture2D title;
		Texture2D startButton;
		Texture2D exitButton;
		Vector2 startButtonPos;
		Vector2 exitButtonPos;
		std::string screenTitle;
	};
}
