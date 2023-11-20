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
				printf("サイコロの目が半(奇数)なら'1'を、丁(偶数)なら'2'を入力してください\n入力 : ");
				scanf_s("%d", &selectNumber);
			}
			else {
				printf("結果は...\n\n");
				break;
			}
		}
	};

	std::function<void()> ResultRole = [&selectNumber]() {

		int diceNum = rand() % 6 + 1;
		printf("結果 : %d\n", diceNum);
		if ((selectNumber == 1 && (diceNum % 2) == 1) || (selectNumber == 2 && (diceNum % 2) == 0)) {
			printf("正解!!\nおめでとう!!\n");
		}
		else {
			printf("不正解\n残念...\n");
		}
	};

	printf("サイコロを振った！\n");
	SetTimeout(SelectRole, 1);
	SetTimeout(ResultRole, 3);

	return 0;
}