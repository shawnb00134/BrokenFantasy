#include "Button.h"

namespace View
{
	Button::Button(const char* imagePath, Vector2 impagePosition, float scale)
	{
		Image image = LoadImage(imagePath);

		int originalWidth = image.width;
		int originalHeight = image.height;

		int newWidth = static_cast<int>(originalWidth);
		int newHeight = static_cast<int>(originalHeight);

		ImageResize(&image, newWidth, newHeight);
		texture = LoadTextureFromImage(image);
		UnloadImage(image);
		position = impagePosition;
	}
	Button::~Button()
	{
		UnloadTexture(texture);
	}
	void Button::Draw()
	{
		DrawTextureV(texture, position, WHITE);
	}
	bool Button::IsPressed(Vector2 mousePos, bool mousePressed)
	{
		Rectangle rect = { position.x, position.y, static_cast<float>(texture.width), static_cast<float>(texture.height) };

		if (CheckCollisionPointRec(mousePos, rect) && mousePressed)
		{
			return true;
		}
		return false;
	}
}