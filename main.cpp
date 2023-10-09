#include <stdio.h>
#include <windows.h>
#include <time.h>

typedef void (*pFunc)(int& num);

void DiceRole() {
	printf("�T�C�R����U�����I\n");
}

void SelectRole(int& selectNumber) {

	while (true) {
		if (selectNumber != 1 && selectNumber != 2) {
			printf("�T�C�R���̖ڂ���(�)�Ȃ�'1'���A��(����)�Ȃ�'2'����͂��Ă�������\n���� : ");
			scanf_s("%d", &selectNumber);
		}else {
			printf("���ʂ�...\n\n");
			break;
		}
	}
}

void ResultRole(int& selectNumber) {

	int diceNum = rand() % 6 + 1;
	printf("���� : %d\n", diceNum);
	if ((selectNumber == 1 && (diceNum % 2) == 1)||(selectNumber == 2 && (diceNum % 2) == 0)) {
		printf("����!!\n���߂łƂ�!!\n");
	}else {
		printf("�s����\n�c�O...\n");
	}

}

void setTimeout(pFunc p, int second, int& num) {
	Sleep(second * 1000);
	p(num);
}

int main() {

	srand(time(nullptr));
	
	int selectNumber = 0;

	DiceRole();

	pFunc p = SelectRole;
	setTimeout(p, 1, selectNumber);

	p = ResultRole;
	setTimeout(p, 3, selectNumber);
	

	
	return 0;
}