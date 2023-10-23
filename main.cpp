#include "Sword.h"
#include "Hammer.h"

int main() {

	Weapon* weapon[2];

	weapon[0] = new Sword();
	weapon[1] = new Hammer();

	for (size_t index = 0; index < 2; index++) {
		weapon[index]->Update();
	}

	for (size_t index = 0; index < 2; index++) {
		delete weapon[index];
	}


	return 0;
}