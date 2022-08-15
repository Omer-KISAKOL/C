#include <stdio.h>

void main(){
	
	float afiyat, kdvfiyat;
	int kdv, kar, indirim, i=1;
	
	while(1){
		
		printf("%d. Urun fiyatini giriniz : ",i);
		scanf("%f",&afiyat);
		if(afiyat<=0) break;
		
		printf("KDV yuzdesini giriniz : ");
		scanf("%d",&kdv);
		
		float kdvfiyat = afiyat + afiyat*kdv/100;
		
		printf("Kar yuzdesini giriniz : ");
		scanf("%d",&kar);
		
		float sfiyat = kdvfiyat + kdvfiyat*kar/100;
		
		printf("\nSatis fiyati = %f \n\n",sfiyat);
		i++;
	}
getch();
}
