#include "Player.h"

Player::Player()
{
	// initialise game objects
	playerTexture.loadFromFile("gfx/Mushroom.png");

	setTexture(&playerTexture);
	setSize(sf::Vector2f(100, 100));
	setPosition(300, 300);
	setVelocity(100.0f, 100.0f);
}

Player::~Player()
{

}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::D))
	{
		move(velocity.x * dt,0);
	}
	if (input->isKeyDown(sf::Keyboard::A))
	{
		move(-velocity.x * dt,0);
	}
}

//void Player::update(float dt)
//{
//
//}