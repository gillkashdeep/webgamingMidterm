#include "Level1Scene.h"
#include "Game.h"
#include <iostream>
#include <ctime>
#include "DiceThree.h"
#include "DiceFour.h"
#include "DiceFive.h"
#include "DiceSix.h"

Level1Scene::Level1Scene()
{
	start();
}

Level1Scene::~Level1Scene()
{
}

void Level1Scene::draw()
{
	m_pRollButton->draw();

	m_pDiceOne->draw();

	m_pDiceTwo->draw();

	m_pLabel1->draw();

	m_pLabel2->draw();
}

void Level1Scene::update()
{
	m_pDiceOne->setPosition(glm::vec2(170, 200));
	m_pDiceTwo->setPosition(glm::vec2(420, 200));

	m_pRollButton->setMousePosition(m_mousePosition);
	m_pRollButton->ButtonClick(this);
	//m_pRollButton->dice
	
}



void Level1Scene::clean()
{
}

void Level1Scene::handleEvents()
{
	int wheel = 0;

	SDL_Event event;
	while(SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			TheGame::Instance()->quit();
			break;
		case SDL_MOUSEMOTION:
			m_mousePosition.x = event.motion.x;
			m_mousePosition.y = event.motion.y;
			break;

		case SDL_MOUSEBUTTONDOWN:
			switch(event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pRollButton->setMouseButtonClicked(true);

				break;
			}
		
			break;
		case SDL_MOUSEBUTTONUP:
			switch (event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pRollButton->setMouseButtonClicked(false);

				break;
			}
			break;
		case SDL_MOUSEWHEEL:
			wheel = event.wheel.y;
			break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym)
			{
			case SDLK_ESCAPE:
				TheGame::Instance()->quit();
				break;
			case SDLK_1:
				TheGame::Instance()->changeSceneState(SceneState::START_SCENE);
				break;
			case SDLK_2:
				TheGame::Instance()->changeSceneState(SceneState::END_SCENE);
				break;
			

				/************************************************************************/
			case SDLK_w:
				
				break;
			case SDLK_s:
				
				break;
			case SDLK_a:

				break;
			case SDLK_d:

				break;
			}
			
			break;
		case SDL_KEYUP:
			switch (event.key.keysym.sym)
			{
			case SDLK_w:
				
				break;

			case SDLK_s:
				
				break;

			case SDLK_a:

				break;
			case SDLK_d:

				break;
			}
			
			break;
		default:
			break;
		}
	}
}



void Level1Scene::start()
{

	m_pRollButton = new rollButton();
	m_pRollButton->setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.4f, Config::SCREEN_HEIGHT * 0.7f));
	addChild(m_pRollButton);


	m_pDiceOne = new  DiceOne();
	m_pDiceOne->setPosition(glm::vec2( 150.0f,150.0f));
	addChild(m_pDiceOne);

	m_pDiceTwo = new  DiceTwo();
	m_pDiceTwo->setPosition(glm::vec2(400.0f, 150.0f));
	addChild(m_pDiceTwo);


	SDL_Color black = { 0, 0, 0, 255 };
	m_pLabel1 = new Label("1", "Consolas", 40, black,
		glm::vec2(150.0f, 280.0f));
	m_pLabel1->setParent(this);
	addChild(m_pLabel1);


	m_pLabel2 = new Label("2", "Consolas", 40, black,
		glm::vec2(390.0f, 280.0f));
	m_pLabel2->setParent(this);
	addChild(m_pLabel2);


	
}

glm::vec2 Level1Scene::getMousePosition()
{
	return m_mousePosition;
}

void Level1Scene::rollDice()
{
	int diceOne = (int)(1 + rand() % 6);
	std::cout << diceOne << std::endl;
	if (diceOne == 1)
	{
		m_pDiceOne = new DiceOne();
		m_pLabel1->setText(std::to_string(diceOne));
		

	}
	else if (diceOne == 2)
	{
		m_pDiceOne = new DiceTwo();
		m_pLabel1->setText(std::to_string(diceOne));

	}
	else if (diceOne == 3)
	{
		m_pDiceOne = new DiceThree();
		m_pLabel1->setText(std::to_string(diceOne));

	}
	else if (diceOne == 4)
	{
		m_pDiceOne = new DiceFour();
		m_pLabel1->setText(std::to_string(diceOne));

	}
	else if (diceOne == 5)
	{
		m_pDiceOne = new DiceFive();
		m_pLabel1->setText(std::to_string(diceOne));

	}
	else if (diceOne == 6)
	{
		m_pDiceOne = new DiceSix();
		m_pLabel1->setText(std::to_string(diceOne));

	}
	int Dtwo = (int)(1 + rand() % 6);

	std::cout << Dtwo << std::endl;

	if (Dtwo == 1)
	{
		m_pDiceTwo = new DiceOne();
		m_pLabel2->setText(std::to_string(Dtwo));

	}
	else if (Dtwo == 2)
	{
		m_pDiceTwo = new DiceTwo();
		m_pLabel2->setText(std::to_string(Dtwo));
	}
	else if (Dtwo == 3)
	{
		m_pDiceTwo = new DiceThree();
		m_pLabel2->setText(std::to_string(Dtwo));
	}
	else if (Dtwo == 4)
	{
		m_pDiceTwo = new DiceFour();
		m_pLabel2->setText(std::to_string(Dtwo));
	}
	else if (Dtwo == 5)
	{
		m_pDiceTwo = new DiceFive();
		m_pLabel2->setText(std::to_string(Dtwo));
	}
	else if (Dtwo == 6)
	{
		m_pDiceTwo = new DiceSix();
		m_pLabel2->setText(std::to_string(Dtwo));
	}
}

