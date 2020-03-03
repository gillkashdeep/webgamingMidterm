#pragma once
#ifndef __diceSix__
#define __diceSix__
#include "DisplayObject.h"

class DiceSix : public DisplayObject
{
public:
	DiceSix();
	~DiceSix();

	void draw() override;
	void update() override;
	void clean() override;
private:
	double m_currentDirection;
};
#endif
