#include  "DiceSix.h"
#include "TextureManager.h"
#include "Game.h"

DiceSix::DiceSix()
{

	//handling the drawing of elements/objects
	TheTextureManager::Instance()->load("../Assets/textures/6.png",
		"diceSix", TheGame::Instance()->getRenderer());
	m_currentDirection = 0;
	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("diceSix");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, 300.0f));
	setVelocity(glm::vec2(0.0f, 0.0f));
	setAcceleration(glm::vec2(0.0f, 0.0f));
	setIsColliding(false);
	setType(GameObjectType::DICEONE);
	setState(SteeringState::IDLE);
}

DiceSix::~DiceSix()
{
}

void DiceSix::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw("diceSix", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), m_currentDirection, 255, true);
}

void DiceSix::update()
{
}

void DiceSix::clean()
{
}
