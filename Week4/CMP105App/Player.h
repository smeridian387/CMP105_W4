#pragma once
#include "Framework/GameObject.h"
class Player : public GameObject
{
public:

	Player();
	~Player();
	void handleInput(float dt);


private:

	GameObject player;
	sf::Texture playerTexture;
};

