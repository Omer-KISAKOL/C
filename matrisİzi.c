#include <stdio.h>

int iz(int a[3][3], int);

 void main(){
	int a[3][3], izA;
	int i, j;
	
	puts("Matris elemanarini giriniz: ");
	for(i=0; i<3; i++)
		for(j=0; j<3; j++)
			scanf("%d",&a[i][j]);
	
	izA = iz(a,3);
	printf("Matrisin izi: %d\n",izA);
	
	getch();
 } 
 
 int iz(int a[3][3], int n){
 	int i;
 	int toplam = 0;
 	
 	for(i=0; i<n; i++)
 	toplam += a[i][i];
 	
 	return toplam;
 }
 
