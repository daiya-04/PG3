#include <stdio.h>
#include <windows.h>
#include <time.h>

typedef void (*pFunc)(int& num);

void DiceRole() {
	printf("サイコロを振った！\n");
}

void SelectRole(int& selectNumber) {

	while (true) {
		if (selectNumber != 1 && selectNumber != 2) {
			printf("サイコロの目が半(奇数)なら'1'を、丁(偶数)なら'2'を入力してください\n入力 : ");
			scanf_s("%d", &selectNumber);
		}else {
			printf("結果は...\n\n");
			break;
		}
	}
}

void ResultRole(int& selectNumber) {

	int diceNum = rand() % 6 + 1;
	printf("結果 : %d\n", diceNum);
	if ((selectNumber == 1 && (diceNum % 2) == 1)||(selectNumber == 2 && (diceNum % 2) == 0)) {
		printf("正解!!\nおめでとう!!\n");
	}else {
		printf("不正解\n残念...\n");
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