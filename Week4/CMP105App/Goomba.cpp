#include "Goomba.h"

Goomba::Goomba()
{
	// initialise game object
	enemyTexture.loadFromFile("gfx/Goomba.png");

	setTexture(&enemyTexture);
	setSize(sf::Vector2f(100, 100));
	setPosition(300, 300);
	setOrigin(getSize().x / 2, getSize().y / 2);
	direction = sf::Vector2f(1.0f, 1.0f);
	setVelocity(speed * direction.x, speed * direction.y);
}

Goomba::~Goomba()
{

}

void Goomba::update(float dt,sf::RenderWindow* RW_)
{
	if (getPosition().x >= (RW_->getSize().x - 50))
	{
		setPosition(sf::Vector2f((RW_->getSize().x - 50), getPosition().y));
		velocity.x = velocity.x * -1.0f;
	}
	else if (getPosition().x <= 50.0f)
	{
		setPosition(sf::Vector2f(50.0f, getPosition().y));
		velocity.x = velocity.x * -1.0f;
	}
	if (getPosition().y > (RW_->getSize().y - 50))
	{
		setPosition(sf::Vector2f(getPosition().x, (RW_->getSize().y - 50)));
		velocity.y = velocity.y * -1.0f;
	}
	else if (getPosition().y <= 50.0f)
	{
		setPosition(sf::Vector2f(getPosition().x, 50.0f));
		velocity.y = velocity.y * -1.0f;
	}

	move(velocity.x * dt, velocity.y * dt);
}
