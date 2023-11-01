#include "Rectangle.h"
#include <stdio.h>

void Rectangle::Size() {

	area_ = width_ * height_;

}

void Rectangle::Draw() {

	printf("面積 : %f\n", area_);

}