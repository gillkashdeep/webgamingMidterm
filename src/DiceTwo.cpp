#include "DiceTwo.h"
#include "TextureManager.h"
#include "Game.h"

DiceTwo::DiceTwo()
{
	TheTextureManager::Instance()->load("../Assets/textures/2.png",
		"dicetwo", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("dicetwo");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::DICETWO);
	setState(SteeringState::IDLE);
}

DiceTwo::~DiceTwo()
{
}

void DiceTwo::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw("dicetwo", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void DiceTwo::update()
{
}

void DiceTwo::clean()
{
}
