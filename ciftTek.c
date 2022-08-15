#include <stdio.h>
//Dýþarýdan girilen 25 elemanlý bir dizideki (array) tek ve çift elemanlarý, toplamýný, adedini ve ortalamasýný bulan C programýný yazýn.
int dizi[25];

void main(){
	int secim, i;
	
	for(i=0;i<25;i++){
		printf("%2d. Dizi elemanini giriniz: ",(i+1));
		scanf("%d",&dizi[i]);
	}
	
	while (1) {
		secim = menuden_sec(); 
		switch (secim) {
			case 1: ciftTek(); break;
			case 2: top();     break;
			case 3: adet();    break;
			case 4: ort(); 	   break;
			case -1:cikis();   break;	
		}
		
	} 
	
}

menuden_sec(){
	int secim;
	printf("\n\n\t**** MENU ****\t \n\n1.CIFT VE TEK SAYILAR LISTESI \n2.CIFT VE TEK SAYILARIN TOPLAMLARI \n3.CIFT VE TEK SAYILARIN ADETI \n4.CIFT VE TEK SAYILARIN ORTALAMASI  \n-1.PROGRAM CIKISI  \n ");
	printf ("\tSECiMiNiZ: ");
	scanf("%d",&secim);
	return secim;
}

ciftTek(){
	int tek[25], cift[25];
	int i, sayacCift=0, sayacTek=0;
	
	for(i=0;i<25;i++){
		if(dizi[i]%2==1){
			tek[sayacTek] = dizi[i];
			sayacTek++;
		}
		else{
			cift[sayacCift] = dizi[i];
			sayacCift++;
		}
	}
	
	printf("\nCIFT SAYILAR: ");
	for(i=0; i<sayacCift; i++){
		printf("%d ",cift[i]);
	}	
	printf("\nTEK SAYILAR: ");
	for(i=0; i<sayacTek; i++){
		printf("%d ",tek[i]);
	}	
	
}
	
top(){
printf("CIFT SAYILARIN TOPLAMI: %d  \nTEK SAYILARIN TOPLAMI: %d\n",ciftTop(),tekTop());	
}	

ciftTop(){
	int i, cift=0;
	for(i=0;i<25;i++){
	  if(dizi[i]%2==0){
		 cift+=dizi[i];
		}
	}

	return cift;
}
	
tekTop(){
	int i, tek=0;
	for(i=0;i<25;i++){
	  if(dizi[i]%2==1){
		 tek+=dizi[i];
		}
	}

	return tek;	
}	

adet(){
	int i, tek=0, cift=0;
	
	for(i=0;i<25;i++){
	  if(dizi[i]%2==0){
		 cift++;
		}
	}
	
	
	for(i=0;i<25;i++){
	  if(dizi[i]%2==1){
		 tek++;
		}
	}
	
	printf("CIFT SAYI ADETI: %d  \nTEK SAYI ADETI: %d\n",cift,tek);
}

ort(){
	int i, tek=0, cift=0;
	int ciftadet=0, tekadet=0, ciftort, tekort; 
	for(i=0;i<25;i++){
	  if(dizi[i]%2==0){
		 cift+=dizi[i];
		 ciftadet++;
		}
	}
	
	
	for(i=0;i<25;i++){
	  if(dizi[i]%2==1){
		 tek+=dizi[i];
		 tekadet++;
		}
	}
	
	ciftort = cift/ciftadet;
	tekort = tek/tekadet;
	printf("CIFT SAYILARIN ORTALAMASI: %d  \nTEK SAYILARIN ORTALAMASI: %d\n",ciftort,tekort);
}

cikis(){
	exit(0);
}

