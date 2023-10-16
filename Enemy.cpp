#include "Enemy.h"
#include <stdio.h>
#include <Windows.h>
#include <time.h>

void (Enemy::*Enemy::State[])() = {
	&Enemy::ApproachUpdate,
	&Enemy::AttackUpdate,
	&Enemy::LeaveUpdate
};

void Enemy::Update() {

	do {
		SetTimeout(2);
	} while (!(phase_ == Phase::Approach));
	

}

void Enemy::ApproachUpdate() {

	printf("Ú‹ß’†\n");
	phase_ = Phase::Attack;

}

void Enemy::AttackUpdate() {

	printf("ŽËŒ‚’†\n");
	phase_ = Phase::Leave;

}

void Enemy::LeaveUpdate() {

	printf("—£’E’†\n");
	phase_ = Phase::Approach;

}

void Enemy::SetTimeout(int second) {

	Sleep(second * 1000);
	(this->*State[static_cast<size_t>(phase_)])();
}
