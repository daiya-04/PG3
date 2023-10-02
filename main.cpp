#include <stdio.h>

template <typename Type>
Type Min(Type a, Type b) {
	return static_cast<Type>(a < b ? a : b);
}


char Min(char a, char b) {
	printf("数字以外は代入できません");
	return '\n';
}

int main() {

	printf("%d\n", Min(1, 5));
	printf("%f\n", Min(1.0f, 2.0f));
	printf("%lf\n", Min(1.0, 2.0));
	printf("%c\n", Min('1', '5'));

	return 0;
}