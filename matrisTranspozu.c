#include <stdio.h>

void main(){
	int i, j, temp, matris[4][4];
	
	printf("4x4luk matris giriniz: \n");
	for(i=0; i<4; i++)
		for(j=0; j<4; j++)
			scanf("%2d", &matris[i][j]);
	
	printf("Orijinal matris: \n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++)
			printf("%2d\t",matris[i][j]);
		printf("\n");	
	}
	
	for(i=0; i<4; i++)
		for(j=i+1; j<4; j++){
			temp = matris[i][j];
			matris[i][j] = matris[j][i];
			matris[j][i] = temp;
		}
	
	printf("Transpozlu matris: \n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++)
			printf("%2d\t",matris[i][j]);
		printf("\n");	
	}
	
	getch();
}
