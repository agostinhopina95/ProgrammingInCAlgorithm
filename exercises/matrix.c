#include<stdio.h>

#define MAXROW 10
#define MAXCOL 10

int main(int argc, char *argv[]){
	int i, j, row, col;
	
	/* INPUT WITH VALIDATION */
	
	do{
		printf("Please introduce the number of Row? ");
		scanf("%d", &row);
		if((row<0)||(row>MAXROW)){
			printf("Incorrect value!\n");
		}
	}while((row<0)||(row>MAXROW));
	
	do{
		printf("Please introduce the number of Col? ");
		scanf("%d", &col);
		if((col<0)||(col>MAXCOL)){
			printf("Incorrect value!\n");
		}
	}while((col<0)||(col>MAXCOL));
	
	
	/* DRAW */
	
	printf("\n-------------------- @@@@ --------------------\n\n");
	
	// Normal
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("*");
		}
		printf("\n");
	}
	
	
}
