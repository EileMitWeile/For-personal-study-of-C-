//사각형 10개 그리기, 크기는 60X60, 위치는 (30,100)에서 시작하여 x좌표가 70씩 증가

#include<stdio.h>
#include<Windows.h>

int main() {

	HDC hdc = GetWindowDC(GetForegroundWindow());
	int x = 30;
	int y = 100;
	int i = 0;

	while (i<10)
	{
		Rectangle(hdc, x, y, x + 60, y + 60);   //hdc, x1, y1, x2, y2
		//Ellipse(hdc, 60, 60, 60, 60); //(30, 100), (90, 160)
		x += 70;
		i++;
	}
	return 0;
}