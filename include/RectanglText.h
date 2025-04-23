#pragma once
#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class RectanglText
{
public:

	RectanglText(const int sizeText, sf::Vector2f size, sf::Vector2f position, sf::Color ColorRec, sf::Color ColorText
					,std::string text);
	void drawRec(sf::RenderWindow& Window);

private:
	sf::RectangleShape m_Rectangle;
	sf::Text m_Text;
	static sf::Font m_font;
	
};