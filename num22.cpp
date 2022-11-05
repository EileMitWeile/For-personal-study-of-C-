#include <stdio.h>
#include <stdlib.h>
//#define MAX 40;
//22번 문자열을 입력 받아 대문자는 소문자로, 소문자는 대문자로 변환하여 출력하는 프로그램을 작성하시오. (단, 포인터를 사용해야 한다.)


//int toupper(int)  대문자 변환
//int tolower(int)  소문자 변환

int main(void) {
   
    int i;
    char *str;
    str = (char*)malloc(40 * sizeof(char));

    for (i = 0; i < 40; i++) {
        printf_s("\n영어 문자열을 입력하세요%s ;");
        //gets_s(str[i]);
        scanf_s("%s", str[i]);
   }

    for (i = 0; i < 40; i++) {
        if (*(str + i) >= 'A' && *(str + i) <= 'Z') {
            printf_s("%c=>%c", *(str + i), *(str + i) + 32);
        }
        else if (*(str + i) >= 'a' && *(str + i) <= 'z') {
            printf_s("%c=>%c", *(str + i), *(str + i) - 32);
        }
        else {
            printf_s("영어 문자열이 아닙니다.");
        }
    }
    return 0;
}