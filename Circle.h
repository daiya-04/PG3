#pragma once
#include "IShape.h"

class Circle : public IShape{
private:

	float radius_ = 3.0f;
	float area_ = 0;

public:

	void Size()override;
	void Draw()override;

};

