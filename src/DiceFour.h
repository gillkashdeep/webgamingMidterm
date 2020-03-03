#pragma once
#ifndef __diceFour__
#define __diceFour__
#include "DisplayObject.h"

class DiceFour : public DisplayObject
{
public:
	DiceFour();
	~DiceFour();

	void draw() override;
	void update() override;
	void clean() override;
private:
	double m_currentDirection;
};
#endif
