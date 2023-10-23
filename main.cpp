#include <stdio.h>

template <typename Type>
Type Min(Type a, Type b) {
	return static_cast<Type>(a < b ? a : b);
}

template<>
char Min<char>(char a, char b) {
	return '\n';
}

int main() {

	printf("%d\n", Min<int>(1, 5));
	printf("%f\n", Min<float>(1.0f, 2.0f));
	printf("%lf\n", Min<double>(1.0, 2.0));
	if (Min<char>('1', '5') == '\n') {
		printf("数字以外は代入できません");
	}
	

	return 0;
}