#pragma once
#ifndef __diceOne__
#define __diceOne__
#include "DisplayObject.h"

class DiceOne : public DisplayObject
{
public:
	DiceOne();
	~DiceOne();

	void draw() override;
	void update() override;
	void clean() override;
private:
	double m_currentDirection;
};
#endif
