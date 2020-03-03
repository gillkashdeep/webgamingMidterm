#include "DiceFive.h"
#include "TextureManager.h"
#include "Game.h"

DiceFive::DiceFive()
{
	TheTextureManager::Instance()->load("../Assets/textures/5.png",
		"diceFive", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("diceFive");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::DICEONE);
	setState(SteeringState::IDLE);
}

DiceFive::~DiceFive()
{
}

void DiceFive::draw()
{

	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw("diceFive", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void DiceFive::update()
{
}

void DiceFive::clean()
{
}
