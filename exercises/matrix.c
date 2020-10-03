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
	
	// Normal pattern
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	// Pyramid pattern 1
	
	for(i=0; i<row; i++){
		for(j=0; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	
	// Pyramid pattern 2
	
	int p_min_char = 1;
	int p_space = row - 1;
	int p_height = row;
	int k;
	
	for(i=0; i<p_height; i++){
		for(j=p_space; j>i; j--){
			printf(" ");
		}
		for(k=0; k<p_min_char; k++){
			printf("*");
		}
		p_min_char += 2;
		printf("\n");
	}
	printf("\n");
	
	// Insert data in matrix
	int m[MAXROW][MAXCOL];
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			do{
				printf("m[%d][%d]? ", i, j);
				scanf("%d", &m[i][j]);
				if( (m[i][j] < 0)||(m[i][j] > MAXROW) ){
					printf("Incorrect value!\n");
				}
			}while( (m[i][j] < 0)||(m[i][j] > MAXROW) );
		}
	}
	
	// Display data from matrix
	for (i=0; i<row; i++) {
		for (j=0; j<col; j++) {
	 		printf("%d\t", m[i][j]);
	 	}
	printf("\n");
	}
	printf("\n");
	
	// Display specific row
	int specific_row = -1;
	do{
		printf("Display specific row ? ");
		scanf("%d", &specific_row);
		if((specific_row < 0) || (specific_row > row)){
			printf("This row not exist!\n");
		}
	}while((specific_row < 0) || (specific_row > row));
	
	for(j=0; j<col; j++){
		printf("%d \t", m[specific_row][j]);
	}
	printf("\n");
	
	// Write in specific column
	int specific_col = -1;
	do{
		printf("Choose column to write? ");
		scanf("%d", &specific_col);
		if((specific_col < 0)||(specific_col > col)){
			printf("This column not exist!\n");
		}
	}while((specific_col < 0)||(specific_col > col));
	
	for(i=0; i<row; i++){
		printf("m[%d][%d] ? ", i, specific_col);
		scanf("%d", &m[i][specific_col]);
	}
	
	printf("\n");
	for(i=0; i<row; i++){
		printf("%d \t", m[i][specific_col]);
	}
	
}
