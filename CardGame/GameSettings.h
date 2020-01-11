#pragma once
#include "SFML/Graphics.hpp"
#include <vector>

struct GameSettings {
	sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode(800, 640), "Planowanie");;
	std::vector <int> players;
	std::vector <int> rounds;
	bool newGame = false;
	sf::String cardTheme = "images\\cards\\card_back_black.png";
	int backgroundColor[3] = { 44, 89, 56 };
	sf::Color backgroundColour = sf::Color(44, 89, 56);
};