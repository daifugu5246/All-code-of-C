#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Init_table();
void Put_rook(int, int);

int Table[8][8];
int number;
int disableslot=0;

struct Rook {
	int X;
	int Y;
}rook[64];
int main() {
	Init_table();
	printf("Enter number of rook : ");
	scanf("%d", &number);
	printf("Enter position of each rook : \n");
	for (int i = 0; i < number;i++) {
		scanf("%d %d", &rook[i].X, &rook[i].Y);
	}
	for (int i = 0; i < number; i++) {
		Put_rook(rook[i].X, rook[i].Y);
	}
	printf("Able slot for pawn : ");
	printf("%d",64- disableslot);
	return 0;
}
void Init_table() {
	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 8; x++) {
			Table[x][y] = 0;
		}
	}
}
void Put_rook(int row,int col) {
	if (row > 0 && row <= 8) {
		//Disable slot right
		for (int x = row - 1; x < 8; x++) {
			if (Table[x][col - 1] == 0) {
				Table[x][col - 1] = 1;
				disableslot += 1;
			}
			else if (Table[x][col - 1] == 1) {
				Table[x][col - 1] = 1;
			}
		}
		//Disable slot left
		for (int x = row - 1; x >= 0; x--) {
			if (Table[x][col - 1] == 0) {
				Table[x][col - 1] = 1;
				disableslot += 1;
			}
			else if (Table[x][col - 1] == 1) {
				Table[x][col - 1] = 1;
			}
		}
	}
	//Disable slot down
	if (col > 0 && col <= 8) {
		for (int y = col - 1; y < 8; y++) {
			if (Table[row-1][y] == 0) {
				Table[row-1][y] = 1;
				disableslot += 1;
			}
			else if (Table[row-1][y] == 1) {
				Table[row-1][y] = 1;
			}
		}
		//Disable slot up
		for (int y = col - 1; y >= 0; y--) {
			if (Table[row-1][y] == 0) {
				Table[row-1][y] = 1;
				disableslot += 1;
			}
			else if (Table[row-1][y] == 1) {
				Table[row-1][y] = 1;
			}
		}
	}
}
