#include  "DiceOne.h"
#include "TextureManager.h"
#include "Game.h"

DiceOne::DiceOne()
{

	//handling the drawing of elements/objects
	TheTextureManager::Instance()->load("../Assets/textures/1.png",
		"diceone", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("diceone");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::DICEONE);
	setState(SteeringState::IDLE);
}

DiceOne::~DiceOne()
{
}

void DiceOne::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw("diceone", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void DiceOne::update()
{
}

void DiceOne::clean()
{
}
