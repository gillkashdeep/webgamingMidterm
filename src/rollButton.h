#pragma once
#ifndef __ROLL_BUTTON__
#define __ROLL_BUTTON__
#include "Button.h"
#include "Label.h"


class Level1Scene;

class rollButton : public Button
{

public:

	rollButton();
	~rollButton();
	
	bool ButtonClick() override;
	bool ButtonClick(Level1Scene* sender);
	bool ButtonClickDice();

	int getDiceOneOut() { return m_DiceOneout; }
	int getDiceTwoOut() { return m_DiceTwoout; }



	
private:
	bool m_isClicked;
	int m_DiceOneout;
	int m_DiceTwoout;
	
	Label* m_pLabel1;
	Label* m_pLabel2;
	
};

#endif
