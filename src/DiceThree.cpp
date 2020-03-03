#include "TextureManager.h"
#include "Game.h"
#include "DiceThree.h"

DiceThree::DiceThree()
{

	//handling the drawing of elements/objects
	TheTextureManager::Instance()->load("../Assets/textures/3.png",
		"diceThree", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("diceThree");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::DICEONE);
	setState(SteeringState::IDLE);
}

DiceThree::~DiceThree()
{
}

void DiceThree::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw("diceThree", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void DiceThree::update()
{
}

void DiceThree::clean()
{
}
