#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"

class Player {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	int hp = PLAYER_HP;
	/*sf::Clock left_clock;
	bool delleft = false;
	size_t frameleft = 0;
	size_t frameleft_delay = 42;*/
public:
	Player();
	void update();
	void draw(sf::RenderWindow& window);
	void decreaseHp(size_t);
	void increaseHp(size_t);
	sf::FloatRect getHitBox();
	sf::Vector2f getPosition();
	int getHp();
};

