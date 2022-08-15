#include <stdio.h>
#include<stdlib.h>

#define MAX 30 

typedef struct kayit { char plaka[12]; }KAYIT;
int aracS;
KAYIT oto[MAX] = {0};

void main (){
	int secim;

	
	while (1) {

		secim = menuden_sec(); 
		switch (secim) {
			case 1: kayit();   break;
			case 2: silme();   break;
			case -1: cikis();  break;
		}
		
	} 
	
}

menuden_sec(){
	int i,secim1;
	printf("\n\t**** MENU ****\t \n\n1.ARAC GIRISI \n2.ARAC CIKISI  \n-1.PROGRAM CIKISI  \n ");
	printf ("\tSECiMiNiZ: ");
	scanf("%d",&secim1);
	return secim1;
}
	

kayit (){
	int indis;
	char kr;
	int k;
	unsigned int tane;
	FILE *di;
	
	indis = ver();
		
	printf ("ARAC PLAKASI: ");
	scanf("%s", oto[indis].plaka);
	
	if( (di=fopen ("araclar.txt", "w"))==NULL){ 
	printf("Dosya acilamadi \n"); 
	return;
	}
	
	for (k=0; k<MAX; k++)
		if (oto[k].plaka[0])
			fwrite(&oto [k], sizeof(KAYIT), 1, di);
				
	fclose(di);
	
	veriS();
	
	if(aracS>=20)
		printf("\n\tOtopark dolu ilk olarak arac cikisi yapin\n");
	
	printf("Baska giris yapacak misin? (E/H)\n");
	scanf("%s",&kr);
	if(kr == 'E' || kr=='e'){
		kayit();
	}
	else{
		main();
	}
		
	
}

veriS(){
	FILE *f;
	int i=0 , k=0;
	char ch;
	int karSayisi;
	
	f=fopen("araclar.txt" , "r");
	while(feof(f)==NULL){
		ch=getc(f);
		i++;
	}
	system("pause");
	karSayisi = i+1;
	aracS = karSayisi/12;
	printf("Arac sayisi: %d\n\n",karSayisi/12);
	return 0;
}

ver(){
	int bos;
	
	for(bos=0; oto[bos].plaka[0] && bos<MAX; bos++);
	if(bos<MAX)
		return bos;
	else
		return -1;
}

silme(){
	int indis;
	char plaka[12]; 
	unsigned int saat;
	FILE *di;
	
	printf ("Silmek istediginiz aracin plakasi: "); 
	scanf("%s", plaka);
	
	indis = varmi(plaka);
	
	if( (di=fopen ("araclar.txt", "w"))==NULL){ 
	printf("Dosya acilamadi \n"); 
	return;
	} 
	
	if (indis==-1){
		printf("\tBoyle bir arac yok!\n"); 
		return;
	} 
	else {
	oto[indis].plaka[0]='\0';
	printf("\tSilindi...\n %d\n",indis); 
	}
	
	fclose(di);
	
	printf("Kac saat kaldi otoparkta: ");
	scanf("%d",&saat);
	
	if(saat==1)
		printf("\n\tOTOPARK UCRETI: 5TL \n");
		
	if(saat==2)
		printf("\n\tOTOPARK UCRETI: 10TL \n");
		
	if(saat==3)
		printf("\n\tOTOPARK UCRETI: 15TL \n");
				
	if(saat>3)
		printf("\n\tOTOPARK UCRETI: 40TL \n");
		
	veriS();	
	
}

varmi(char plaka[]){
	int k;
	for (k=0; k<MAX; k++) 
		if (oto[k].plaka[0]) 
			if (!strcmp (oto[k].plaka,plaka))
				return k;

	return -1;
}

cikis(){
	exit(0);
}





