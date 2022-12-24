#include<iostream>
#include<ctime>
using namespace std;
int main() {
	srand(time(0));
	const int M = 9, N=9;
	int Arr[M][N]{};
	for (int row = 0; row < M; row++){
		for (int col = 0; col < N; col++){
			Arr[row][col] = rand() % 20;
			cout << Arr[row][col]<<"\t";
		}
		cout << endl;
	}

	for (int col = 0; col < N; col++) {
		int max = Arr[col][0];
		int min = Arr[col][0];
		for (int row = 0; row < M; row++) {
			if (max < Arr[row][col]) {
				max = Arr[row][col];
			}
			if (min > Arr[row][col]) {
				min = Arr[row][col];
			}
		}
		Arr[0][col] = max;
		Arr[1][col] = min;
		
	}
	
	cout << endl;

	for (int row = 0; row < M; row++) {
		for (int col = 0; col < N; col++) {
			cout << Arr[row][col] << "\t";
		}
		cout << endl;
	}


	system("pause");
	return 0;
}