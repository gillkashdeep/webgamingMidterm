#pragma once
#ifndef __LEVEL_1_SCENE__
#define __LEVEL_1_SCENE__

#include "Scene.h"
#include "rollButton.h"
#include "DiceOne.h"
#include "DiceTwo.h"
#include "Label.h"

class Level1Scene : public Scene
{
public:
	Level1Scene();
	~Level1Scene();
	
	void draw() override;
	void update() override;
	void clean() override;
	void handleEvents() override;
	void start() override;

	// getters
	glm::vec2 getMousePosition();

	void rollDice();

private:
	// game objects

	rollButton* m_pRollButton;

	/*DiceOne* m_pDiceOne;
	DiceTwo* m_pDiceTwo;*/

	DisplayObject* m_pDiceOne;
	DisplayObject* m_pDiceTwo;

	Label* m_pLabel1;
	Label* m_pLabel2;
	
	

	// private data member
	glm::vec2 m_mousePosition;


	
	
};

#endif /* defined (__LEVEL_1_SCENE__) */
