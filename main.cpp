#include <stdio.h>

int RecursiveWage(int n,int wage) {
	if (n <= 1) {
		return wage;
	}

	return (wage + RecursiveWage(n - 1, wage * 2 - 50));
}

int main() {

	int workTime = 8;
	int normalHourlyWage = 1072;
	int recursiveHourlyWage = 100;

	printf("再帰的な賃金体系  時間:%d 給料:%d\n", workTime,RecursiveWage(workTime, recursiveHourlyWage));
	printf("一般的な賃金体系  時間:%d 給料:%d\n", workTime, normalHourlyWage * workTime);


	return 0;
}