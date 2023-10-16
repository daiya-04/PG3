#include <stdio.h>
#include "Enemy.h"
#include <memory>



int main() {

	std::unique_ptr<Enemy> enemy;
	enemy = std::make_unique<Enemy>();

	enemy->Update();
	


	return 0;
}