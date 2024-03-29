#include <bits/stdc++.h>
    /* Akhil Humane
PRN : 10303320171124510016*/
     
#define MAX_SIZE 9
int main (int argc, const char * argv[]) {

	int s;

	char digitString[MAX_SIZE];

	
	const char conversionTable[10][7] = {
		      /* T  R   L   B   R   L   B */
		/* 0 */ '-','|','|',' ','|','|','-',	  
		/* 1 */ ' ','|',' ',' ','|',' ',' ',
		/* 2 */ '-','|',' ','-',' ','|','-',
		/* 3 */ '-','|',' ','-','|',' ','-',
		/* 4 */ ' ','|','|','-','|',' ',' ',
		/* 5 */ '-',' ','|','-','|',' ','-',
		/* 6 */ '-',' ','|','-','|','|','-',
		/* 7 */ '-','|',' ',' ','|',' ',' ',
		/* 8 */ '-','|','|','-','|','|','-',
		/* 9 */ '-','|','|','-','|',' ','-',
	};

	int i, j, k;
	
	while(scanf("%d %s", &s, &digitString) != EOF) {

		if (!s) {
			return 0;
		}
		
		int n = strlen(digitString);
		int digit;
		
		for (i = 0; i < 2*s+3; i++) {					
			for (j = 0; j < n; j ++) { 
						
				digit = digitString[j] - '0';
				/* upper, middle and lower parts */
				if ((i % (s + 1)) == 0) {
					printf(" ");
					for (k = 0; k < s; k++) {
						printf("%c", conversionTable[digit][(i / (s + 1)) * 3]);
					}
					printf(" ");
				}
				
				/* between upper and middle parts */
				if (i > 0 && i < (s + 1)) {
					printf("%c", conversionTable[digit][2]);
					for (k = 0; k < s; k++) {
						printf(" ");
					}
					printf("%c", conversionTable[digit][1]);
				}
				
				/* between middle and lower parts */
				if (i > (s + 1) && i < (2*s + 2)) {
					printf("%c", conversionTable[digit][5]);
					for (k = 0; k < s; k++) {
						printf(" ");
					}
					printf("%c", conversionTable[digit][4]);
				}
				
				/* if not the last number */
				if (j != n-1)
					printf(" ");
	
			}			
			printf("\n");
			
		}
		printf("\n");
		
	}
	
	return 0;
}
