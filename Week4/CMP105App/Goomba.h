#pragma once
#include "Framework/GameObject.h"
class Goomba : public GameObject
{

public:

	Goomba();
	~Goomba();

	void update(float dt,sf::RenderWindow* RW_);




private:

	sf::Texture enemyTexture;
	sf::Vector2f direction;
	int speed = 100;

};

