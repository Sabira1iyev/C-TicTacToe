#include <iostream>
using namespace std;

const char x = 3, o = 3;

void printMatrix(char matrix[x][o]) {
	for (int i = 0; i < x;i++) {
		for (int j = 0; j < o;j++) {
			cout << matrix[i][j] << " " << '\t';
		}
		cout << endl;
	}
	cout << endl;
}


int main() {

 
	char matrix[x][o];

	printMatrix(matrix);


	for (int i = 0;i < x;i++) {
		for (int j=0;j < o;j++) {
			matrix[i][j] = '-';
		}
	}

	for (char i = 0; i < x; i++) {
		for (char j = 0; j < o; j++) {
			cin >> matrix[i][j];
			if (matrix[i][j] != 'o' && matrix[i][j] != 'x') {
				cout << "yanlis deger girdiniz!" << endl;
				return 1; 
			}
			for (char i = 0;i < x;i++) {
				for (char j = 0; j < o;j++) {
					cout << matrix[i][j] << '\t';
				}
				cout << endl;
			}
		}
	}
 
	system("cls");
	printMatrix(matrix);
  

	if (matrix[0][0] == matrix[0][1] && matrix[0][1] == matrix[0][2]) {
		cout << matrix[0][0] << " won the game" << endl;
	}
	else if (matrix[0][0] == matrix[1][0] && matrix[1][0] == matrix[2][0]) {
		cout << matrix[0][0] << " won the game" << endl;
	}
	else if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2]) {
		cout << matrix[0][0] << " won the game" << endl;
	}
	else if (matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0]) {
		cout << matrix[0][2] << " won the game" << endl;
	}
	else if (matrix[0][2] == matrix[1][2] && matrix[1][2] == matrix[2][2]) {
		cout << matrix[0][2] << " won the game" << endl;
	}
	else if (matrix[0][1] == matrix[1][1] && matrix[1][1] == matrix[2][1]) {
		cout << matrix[0][1] << " won the game" << endl;
	}
	else if (matrix[1][0] == matrix[1][1] && matrix[1][1] == matrix[1][2]) {
		cout << matrix[1][0] << " won the game" << endl;
	}
	else if (matrix[2][0] == matrix[2][1] && matrix[2][1] == matrix[2][2]) {
		cout << matrix[2][0] << " won the game" << endl;
	}

	else {
		cout << "kazanan cikmadi " << endl;
	}
}