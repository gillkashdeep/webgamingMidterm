#include "DiceFour.h"
#include "Game.h"

DiceFour::DiceFour()
{

	//handling the drawing of elements/objects
	TheTextureManager::Instance()->load("../Assets/textures/4.png",
		"diceFour", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("diceFour");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::DICEONE);
	setState(SteeringState::IDLE);
}

DiceFour::~DiceFour()
{
}

void DiceFour::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw("diceFour", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void DiceFour::update()
{
}

void DiceFour::clean()
{
}
