#include<stdio.h>
void hoanDoi(int *a,int *b){
	int temp= *a;
	*a = *b;
	*b = temp; 
} 
int main(){
	int x,y;
	printf("nhap gia tri bien x \n:");
	scanf("%d",&x);
	printf("nhap gia tri bien y:\n");
	scanf("%d",&y);
	printf("gia tri truoc khi hoan doi: x=%d,y=%d\n",x,y);
	hoanDoi(&x,&y);
	printf("gia tri sau khi hoan doi:x=%d,Y=%d\n",x,y);
	return 0; 
} 
