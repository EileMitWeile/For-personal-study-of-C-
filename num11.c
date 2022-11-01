#include<stdio.h>
                                                            //다차원 배열을 사용해 문자열을 다섯 개 입력받아 출력하는 프로그램 작성
void main() {

    int i, j;
    char str[5][50];
    for (i = 0; i < 5; i++) {
        printf_s("\n 문자열%d : ", i+1);
        gets_s(str[i]);
    }
    for (i = 0; i < 5; i++) {
        printf_s("\n\n 문자열%d ", i + 1);
        for (j = 0; str[i][j] != '\0'; j++) {
            printf_s("%c", str[i][j]);
        }
    }

    getchar();

}