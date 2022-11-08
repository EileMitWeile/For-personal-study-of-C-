#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"H.h"

int user, computer;

void choice(){

	printf_s("가위, 바위, 보 게임에 오신 것을 환영합니다. \n");
	printf_s("하나를 선택하세요(가위-0, 바위-1, 보-2): \n");
	scanf("%d", &user);

}

//void timeset{
//
//	srand(time(NULL));
//	int coin = rand() % 2;
//}


void start(){                                        //사용자 선택 값 포인터로 전달 필요

	computer = rand() % 3;
printf_s("사용자=%d \n", user);
printf_s("컴퓨터=%d \n", computer);

if ((user + 1) % 3 == computer)
printf_s("패배 \n");
else if (computer == user)
printf_s("무승부");
else
printf_s("승리\n");

}


