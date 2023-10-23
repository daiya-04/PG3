#include "Hammer.h"
#include <stdio.h>

Hammer::Hammer() {

	printf("ハンマーを入手した\n");

}

Hammer::~Hammer() {

	printf("ハンマーが壊れた\n");

}

void Hammer::Update() {

	printf("岩を砕いた\n");

}