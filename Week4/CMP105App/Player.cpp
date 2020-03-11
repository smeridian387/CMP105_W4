#include "Player.h"

Player::Player()
{
	// initialise game objects
	playerTexture.loadFromFile("gfx/Mushroom.png");

	player.setTexture(&playerTexture);
	player.setSize(sf::Vector2f(100, 100));
	player.setPosition(300, 300);
}

Player::~Player()
{

}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		move(velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		move(-velocity * dt);
	}
}

//void Player::update(float dt)
//{
//
//}