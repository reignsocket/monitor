

#include <stdio.h>
#include <string.h>
char n1[11] = {"- -- -----"}; //Stroke 1 is covered by the numbers 0, 2, 3, 5, 6, 7, 8, 9
char n2[11] = {"| ||| ||"}; //Stroke 2 is covered by the numbers 0, 4, 5, 6, 8, 9
char n3[11] = {"||||| |||"};//Stroke 3 is covered by the numbers 0, 1, 2, 4, 7, 8, 9
char n4[11] = {" ----- --"};//Strokes 4 are covered by the numbers 2, 13, 4, 5, 6, 8, 9
char n5[11] = {"| | | | "}; //Stroke 5 is covered by the numbers 0, 2, 6, 8
char n6[11] = {"|| |||||||"}; //Stroke 6 is covered by the numbers 0, 1, 3, 4, 5, 6, 7, 8, 9
char n7[11] = {"- -- -- --"};//Strokes 7 are covered by the numbers 0, 2, 3, 5, 6, 8, 9

void main() {
	int s;
	char szNumber[20];
	int nDigit , nLength, i , j , k;
	while(1) {
		scanf( "%d%s", &s, szNumber);
		if (s == 0)
			break;
		nLength = strlen(szNumber);
		for (i = 0 ; i < nLength ; i++) {
			nDigit = szNumber[i] - '0';
			printf(" ");
			for (j = 0 ; j < s ; j++)
				printf("%c", n1[nDigit]);
			printf(" ");
		}
		printf("\n");
		for (i = 0 ; i < s ; i++) {
			for (j = 0 ; j < nLength ; j++) {
				nDigit = szNumber[j] - '0';
				printf("%c", n2[nDigit]);
				for (k = 0 ; k < s ; k++)
					printf(" ");
				printf("%c ", n3[nDigit]);
			}
			printf("\n");
		}
		for (i = 0 ; i < nLength ; i++) {
			printf(" ");
			nDigit = szNumber[i] - '0';
			for (j = 0 ; j < s ; j++)
				printf("%c", n4[nDigit]);
			printf(" ");

		}
		printf("\n");
		for (i = 0 ; i < s ; i++) {
			for (j = 0 ; j < nLength ; j++) {
				nDigit = szNumber[j] - '0';
				printf("%c", n5[nDigit]);
				for (k = 0 ; k < s ; k++)
					printf( " ");
				printf("%c ", n6[nDigit]);
			}
			printf("\n");
		}
		for (i = 0 ; i < nLength ; i++) {
			printf(" ");
			nDigit = szNumber[i] - '0';
			for (j = 0 ; j < s ; j++)
				printf("%c", n7[nDigit]);
			printf(" ");
		}
		printf("\n");
		printf("\n");
	}
}
