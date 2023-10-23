#pragma once


class Enemy{
private:

	enum class Phase {
		Approach,
		Attack,
		Leave,
	};

	Phase phase_ = Phase::Approach;

	static void(Enemy::*State[])();

public:

	void Update();

	void ApproachUpdate();

	void AttackUpdate();

	void LeaveUpdate();

	void SetTimeout(int second);

};

