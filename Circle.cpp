#include "Circle.h"
#include <cmath>
#include <numbers>
#include <stdio.h>


void Circle::Size() {

	area_ = static_cast<float>(std::numbers::pi) * radius_ * 2.0f;

}

void Circle::Draw() {

	printf("面積 : %f\n", area_);

}