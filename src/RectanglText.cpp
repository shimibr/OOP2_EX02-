#include "RectanglText.h"

RectanglText::RectanglText(const int sizeText, sf::Vector2f size, sf::Vector2f position, sf::Color ColorRec, sf::Color ColorText
	, sf::Font& font, std::string text)
	:m_Text(text, font, sizeText)
{
	m_Rectangle.setSize(size);
	m_Rectangle.setPosition(position);
	m_Rectangle.setFillColor(ColorRec);
	m_Text.setFillColor(ColorText);
	m_Text.setPosition(position.x + 8, position.y + 10);
}
//=======================================
void RectanglText::drawRec(sf::RenderWindow& Window)
{
	Window.draw(m_Rectangle);
	Window.draw(m_Text);
}
