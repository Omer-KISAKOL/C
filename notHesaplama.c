#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	setlocale(LC_ALL,"Turkish");
		float v,f,a;
		int b;
		char x;
	abc5:
	printf("1. Not-Ge�ti/Ge�medi\n2. Ge�mek i�in finalden ka� almal�y�m?\n");
	abc4:
	x=getch();
	switch(x){
		case '1':
			abc1:
			printf("Vize notu: "); scanf("%f",&v);
			while(v>100 || v<0) { printf("Ge�erli bir say� giriniz\n"); goto abc1; }
			abc2:
			printf("Final notu: "); scanf("%f",&f);
			while (f>100 || v<0) { printf("Ge�erli bir say� giriniz\n"); goto abc2;}
			a=v*30/100+f*70/100; 
			printf("Not: %f",a);
			if(a>=50) printf("\nGe�ti!");
			else printf("\nGe�medi!");
			printf("\n1. Ana Men� \n2. Bitir\n");
			acc1:
			x=getch();
			if (x=='1') {
			system("cls"); goto abc5;}
			else if (x=='2') break;
			else if (x!='1' || x!='2') { printf("Ge�erli girdi veriniz\n"); goto acc1;}
		break;
		case '2':
			abc3:
			printf("Vize notu: "); scanf("%f",&v);
			while(v>100 || v<0) { printf("Ge�erli bir say� giriniz\n"); goto abc3; } 
			a= 71.428571-v*3/7;
			b=a;
			if (a>b) {a=b; a+=1;}
			printf("Ge�mek i�in finalden en az [%f] almal�s�n.",a);
			printf("\n1. Ana Men� \n2. Bitir\n");
			acc2:
			x=getch();
			if (x=='1') {
			system("cls"); goto abc5;}
			else if (x=='2') break;
			else if (x!='1' || x!='2') { printf("Ge�erli girdi veriniz\n"); goto acc2;}
		break;
		default: printf("Ge�erli girdi veriniz\n"); goto abc4;
	}
return 0;
}
