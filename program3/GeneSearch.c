 /*CPE 101 Section 9
John Campbell
Jeremy Chen
GeneSearch.c File Project 3
March 14 2014 */

#include "genomics.h"

int findStartCodon(char s[], int length, int frame) {
	char amino[length];
	int i, q = 0;
	convert2Amino(s, amino, length, frame);
	for(i = 0; i < length; i++) {
		if (amino[i] == 'M') {
			q = i*3+frame-1;
		}
	}
	return q;
}

int findStopCodon(char s[], int length, int frame) {
	char amino[length];
	char revAmino[length];
	int j, k = 0;
	convert2Amino(s, amino, length, frame);
	reverse(amino, revAmino, length);
	for (j = 0; j < length; j++) {
		if (revAmino[j] == '#') {
			k = length -j*3;
			
		}
	}
	printf("%d\n", k);
	return k;
}


void printStrand(char s[], int length) {
	int max, i, j, frame, x[4], y[4], xr[4], yr[4], maxi[4], maxri[4];
	char ogString[length];
	char revString[length];

	strcpy(ogString, s);
	reverse(s, revString, length);

	for(frame = 1; frame < 4; frame++){
		x[frame] = findStartCodon(s, length, frame);
		y[frame] = findStopCodon(s, length, frame);
		xr[frame] = findStartCodon(revString, length, frame);
		yr[frame]= findStopCodon(revString, length, frame);
	}

	max = 0;

	for(i = 1; i < 4; i++){
		maxi[i] = y[i] - x[i];
		maxri[i] = yr[i] - xr[i];
	}

	for(i = 1; i < 4; i++){
		if (maxi[i] > max){
			max = maxi[i];
			frame = i;
		}
		if (maxri[i] > max){
			max = maxri[i];
			frame = i;
		}
	}

	printf("%s\n", ogString);

	for (i = 1; i < 4; i++){
		if (maxi[i] == max){
			printf("Positive Strand: \n => Frame %d: [%d, %d]\n",
			 frame, x[frame], y[frame]);
			for (j = x[frame-1]; j < (y[frame] + 1); j++){
				printf("%c", ogString[j]);
			}
			printf("\nNegative Strand:\n");
		}
		else if (maxri[i] == max){
			printf("Positive Strand:\n");
			printf("Negative Strand: \n ==> Frame %d: [%d, %d]\n",
				 frame, xr[frame], yr[frame]);
			for (j = xr[frame-1]; j < (yr[frame] + 1); j++){
				printf("%c", revString[j]);
			}
			printf("\n");
		}
	}
}

int main(){
	char s[] = "GATGGGTGTATGCCCCGATATAGACAGAGAGAGAGAGAGA";
	int length = 0;

	while(s[length] != '\0'){length++;}

	printStrand(s, length);

	return 0;
}