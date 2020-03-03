#pragma once
#ifndef __diceTwo__
#define __diceTwo__
#include "DisplayObject.h"

class DiceTwo : public DisplayObject
{
public:
	DiceTwo();
	~DiceTwo();

	void draw() override;
	void update() override;
	void clean() override;
private:
	double m_currentDirection;
};
#endif
