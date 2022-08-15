#include <stdio.h>
#include <string.h>

int donustur(char dizi[], int l){
	int k = strlen(dizi);
	char yeniDizi[k];
	
	if(dizi[l] == 32)
		yeniDizi[l] = ' ';
	else if((dizi[l]-5) >= 97)
		yeniDizi[l] = dizi[l] - 5;
	else 	
		yeniDizi[l] = dizi[l] + 21;
		
	printf("%c",yeniDizi[l]); 	
	l++;
	
	if(l<k)
		donustur(dizi,l);	
	else 
		return 1;	
}


void main(){
	char dizi[] = {};
	
	printf("Sifrelenmis karakter dizinini giriniz: ");
	gets(dizi);
	printf("\nCozulmus karakter dizini: ");
	
	donustur(dizi,0);
	
	getch();
}


