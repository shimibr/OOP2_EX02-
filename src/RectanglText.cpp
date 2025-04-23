#include "RectanglText.h"

sf::Font RectanglText::m_font;

RectanglText::RectanglText(const int sizeText, sf::Vector2f size, sf::Vector2f position, sf::Color ColorRec, sf::Color ColorText
	, std::string text)
{
	static bool isLoad = false;
	if (!isLoad) {
		m_font.loadFromFile("C:/Windows/Fonts/arialbd.ttf");
		isLoad = true;
	}
	m_Rectangle.setSize(size);
	m_Rectangle.setPosition(position);
	m_Rectangle.setFillColor(ColorRec);
	m_Text.setFont(m_font);
	m_Text.setString(text);
	m_Text.setCharacterSize(sizeText);
	m_Text.setFillColor(ColorText);
	m_Text.setPosition(position.x + 8, position.y + 10);
}
//=======================================
void RectanglText::drawRec(sf::RenderWindow& Window)
{
	Window.draw(m_Rectangle);
	Window.draw(m_Text);
}
