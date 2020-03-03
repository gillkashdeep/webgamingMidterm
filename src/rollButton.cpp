#include "rollButton.h"
#include "Game.h"
#include <ctime>
#include "Level1Scene.h"

rollButton::rollButton()
	:Button(
		"../Assets/textures/rollButton.png",
		"startButton",
		ROLL_BUTTON, glm::vec2(400.0f, 300.0f)), m_isClicked(false)
{
}

rollButton::~rollButton()
{
}


//function for dice roll

int diceroll()
{
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		int dice1 = (int)(1 + rand() % 6);
		int dice2 = (int)(1 + rand() % 6);
		int diceSum = dice1 + dice2;

		std::cout << dice1 << std::endl;
		std::cout << dice2 << std::endl;

	}
	return 0;
}

bool rollButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			//Game::Instance()->changeSceneState(LEVEL1_SCENE);
			//diceroll();
			m_DiceOneout = (int)(1 + rand() % 6);
			m_DiceTwoout = (int)(1 + rand() % 6);
			m_isClicked = true;
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}

bool rollButton::ButtonClick(Level1Scene* sender)
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			sender->rollDice();
			m_DiceOneout = (int)(1 + rand() % 6);
			m_DiceTwoout = (int)(1 + rand() % 6);
			m_isClicked = true;
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}
