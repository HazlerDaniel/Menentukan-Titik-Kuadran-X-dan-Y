#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y;
	printf("mengetahui kuadran dari inputan koordinat x dan y\n");
	printf("=====================================================\n");
	printf("masukan nilai x :");
	scanf("%i",&x);
	printf("masukan nilai y :");
	scanf("%i",&y);
	
	if(x>0 && y>0)
	printf("kuadaran 1");
	if(x>0&&y<0)
	printf("kuadaran 2");
	if(x<0&&y<0)
	printf("kuadran 3");
	if(x<0&& y>0)
	printf("kuadran 4");
	if(x==0 && y==0)
	printf("titik pusat");
	
	getch();
}
