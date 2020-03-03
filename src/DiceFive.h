#pragma once
#ifndef __diceFive__
#define __diceFive__
#include "DisplayObject.h"

class DiceFive : public DisplayObject
{
public:
	DiceFive();
	~DiceFive();

	void draw() override;
	void update() override;
	void clean() override;
private:
	double m_currentDirection;
};
#endif
