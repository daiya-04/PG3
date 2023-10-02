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

	printf("Ä‹A“I‚È’À‹à‘ÌŒn  ŽžŠÔ:%d ‹‹—¿:%d\n", workTime,RecursiveWage(workTime, recursiveHourlyWage));
	printf("ˆê”Ê“I‚È’À‹à‘ÌŒn  ŽžŠÔ:%d ‹‹—¿:%d\n", workTime, normalHourlyWage * workTime);


	return 0;
}