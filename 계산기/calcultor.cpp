#include<stdio.h>
#include<math.h>
#include"calculator.h"

int x, y, r, a;

void menu(int a) {

		
		printf_s("원하는 연산을 선택하세요.");
        scanf_s("%d", &a);

};



void Plus(int x, int y) {                   //덧셈

	printf_s("두개의 정수를 입력하세요.");
	scanf_s("%d%d", &x, &y);

	r = x + y;

	printf_s("덧셈 결과는 %d 입니다.", r);

};

void subtraction(int x, int y) {             //뺄셈

	printf_s("두개의 정수를 입력하세요.");
	scanf_s("%d%d", &x, &y);

	if (x >= y) {
		r = x - y;
	}
	else {

		r = y - x;
	}

	printf_s("뺼셈 결과는 %d 입니다.", r);

};
