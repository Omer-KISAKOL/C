#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
	int secim, kdv;
	int i=1;
	float afiyat, kdvfiyat, yirmi, yirmibes, otuz;
	

	while(1){
	
		printf("\n%d. Alis fiyatini giriniz : ",i);
		scanf("%f",&afiyat);
		 
		float temel = afiyat + afiyat*8/100;
	
		float muhtelif = afiyat + afiyat*18/100;
		
		float kdvsiz = afiyat;
		
		printf("\nUrun turunu seciniz \n\n1.TEMEL GIDA \n2.MUHTELIF GIDA  \n3.KDV'li FIYAT UZERINDEN \n\nSeciminiz : ");
		scanf("%d",&secim);
		
		if (secim == 1){
			yirmi = temel + temel*20/100;
			yirmibes = temel + temel*25/100;
			otuz = temel + temel*30/100;
			printf("20 : %f \n25 : %f \n30 : %f\n",yirmi,yirmibes,otuz);
		}	
		
		if (secim == 2){
			yirmi = muhtelif + muhtelif*20/100;
			yirmibes = muhtelif + muhtelif*25/100;
			otuz = muhtelif + muhtelif*30/100;
			printf("20 : %f \n25 : %f \n30 : %f\n",yirmi,yirmibes,otuz);
		}
		
		if (secim == 3){
			yirmi = kdvsiz + kdvsiz*20/100;
			yirmibes = kdvsiz + kdvsiz*25/100;
			otuz = kdvsiz + kdvsiz*30/100;
			printf("20 : %f \n25 : %f \n30 : %f\n",yirmi,yirmibes,otuz);
		}
		
		if (afiyat < 0)break;
		
		i++;
	}
getch();
}
