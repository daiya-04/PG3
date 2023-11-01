#pragma once
#include "IShape.h"

class Rectangle : public IShape{
private:

	float width_ = 2.0f;
	float height_ = 3.0f;
	float area_ = 0;

public:

	void Size()override;
	void Draw()override;

};

