#include<stdio.h>
int main() {
	int myVariable=42;
	int *myPointer = &myVariable;
	//cach1 
	printf("gia tri cua bien : %d\n", myVariable);
	printf("dia chi cua bien : %p\n",(void*)&myVariable);
	//cach2 
	printf("gia tri cua bien qua con tro: %d\n", *myPointer) ;
	printf("gia tri cua bien qua con tro: %p\n",(void*)myPointer); 
}
