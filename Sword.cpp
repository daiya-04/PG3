#include "Sword.h"
#include <stdio.h>

Sword::Sword() {

	printf("剣を入手した\n");

}

Sword::~Sword() {

	printf("剣が壊れた\n");

}

void Sword::Update() {

	printf("岩を切った\n");

}