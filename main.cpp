#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"

int main() {

	IShape* shape[2];

	shape[0] = new Circle();
	shape[1] = new Rectangle();

	for (size_t index = 0; index < 2; index++) {
		shape[index]->Size();
		shape[index]->Draw();
	}


	for (size_t index = 0; index < 2; index++) {
		delete shape[index];
	}

	return 0;
}