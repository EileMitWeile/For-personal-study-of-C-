#include "deQue.h"

int main(void)
{
	DQueType* DQ1 = createDQue();  // 데크 생성
	element data;
	printf("\n ***** 데크 연산 ***** \n");
	printf("\n front 삽입 A>> ");  insertFront(DQ1, 'A');  printDQ(DQ1);
	printf("\n rear  삽입 B>> ");  insertRear(DQ1, 'B');  printDQ(DQ1);
	printf("\n rear  삽입 C>> ");  insertRear(DQ1, 'C');  printDQ(DQ1);
	printf("\n front 삽입 1>> ");  insertFront(DQ1, '1');  printDQ(DQ1);
	printf("\n rear  삽입 E>> ");  insertRear(DQ1, 'E');  printDQ(DQ1);
	printf("\n front 삭제  >> ");  data = deleteFront(DQ1);    printDQ(DQ1);
	//printf("\t삭제 데이터: %c", data);
	printf("\n rear  삭제  >> ");  data = deleteRear(DQ1);     printDQ(DQ1);
	//printf("\t\t삭제 데이터: %c", data);
	printf("\n rear  삭제  >> ");  data = deleteRear(DQ1);     printDQ(DQ1);
	//printf("\t\t삭제 데이터: %c", data);
	printf("\n rear  삭제  >> ");  data = deleteRear(DQ1);     printDQ(DQ1);
	//printf("\t\t삭제 데이터: %c", data);
	printf("\n front 삭제  >> ");  data = deleteFront(DQ1);    printDQ(DQ1);
	//printf("\t\t삭제 데이터: %c", data);
	printf("\n front 삽입 X>> ");  insertFront(DQ1, 'X');  printDQ(DQ1);
	printf("\n rear  삽입 Y>> ");  insertRear(DQ1, 'Y');  printDQ(DQ1);

	data = peekFront(DQ1);  printf("\n peek Front item : %c \n", data);
	data = peekRear(DQ1);  printf(" peek Rear item : %c \n", data);

	getchar();  return 0;
}



