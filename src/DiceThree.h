#pragma once
#pragma once
#ifndef __diceThree__
#define __diceThree__
#include "DisplayObject.h"

class DiceThree : public DisplayObject
{
public:
	DiceThree();
	~DiceThree();

	void draw() override;
	void update() override;
	void clean() override;
private:
	double m_currentDirection;
};
#endif
