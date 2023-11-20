#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <functional>

void SetTimeout(std::function<void()> func, int second) {
	Sleep(second * 1000);
	func();
}

int main() {

	srand(time(nullptr));
	int selectNumber = 0;

	std::function<void()> SelectRole = [&selectNumber]() {
		while (true) {
			if (selectNumber != 1 && selectNumber != 2) {
				printf("�T�C�R���̖ڂ���(�)�Ȃ�'1'���A��(����)�Ȃ�'2'����͂��Ă�������\n���� : ");
				scanf_s("%d", &selectNumber);
			}
			else {
				printf("���ʂ�...\n\n");
				break;
			}
		}
	};

	std::function<void()> ResultRole = [&selectNumber]() {

		int diceNum = rand() % 6 + 1;
		printf("���� : %d\n", diceNum);
		if ((selectNumber == 1 && (diceNum % 2) == 1) || (selectNumber == 2 && (diceNum % 2) == 0)) {
			printf("����!!\n���߂łƂ�!!\n");
		}
		else {
			printf("�s����\n�c�O...\n");
		}
	};

	printf("�T�C�R����U�����I\n");
	SetTimeout(SelectRole, 1);
	SetTimeout(ResultRole, 3);

	return 0;
}