#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	
	cout << "\nBrett Balquist\n";
	cout <<"\nLab #6 Matrix Manipulation\n";

	// This ititalizes the 2d matrices with max of 100 in both x and y.
	int matrixA[100][100];
	int matrixB[100][100];
	string filename;
	cout << "\nWhat is the name of your file?\n" << endl;
	cin >> filename;
	ifstream infile(filename);	
	int matrixSize;
	infile >> matrixSize;
	//This reads each element of the file and adds it to Matrix A. 
	for (int i =0; i < matrixSize; i++){
		for (int j= 0; j < matrixSize; j++){
			infile >> matrixA[i][j];
		}
	}
	// This reads the remaining elements and adds them to matrix B.
	for (int i =0; i < matrixSize; i++){
		for (int j= 0; j < matrixSize; j++){
			infile >> matrixB[i][j];
		}
	}
	infile.close();
	cout << "\nMatrix A:" << endl;
	// This prints out each element of matrix A/	
	for (int i =0; i < matrixSize; i++){
		for (int j= 0; j < matrixSize; j++){
			cout <<  matrixA[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\nMatrix B:" << endl;
	// This prints out each element of matrix B/	
	for (int i =0; i < matrixSize; i++){
		for (int j= 0; j < matrixSize; j++){
			cout <<  matrixB[i][j] << " ";
		}
		cout << endl;
	}
	// This prints out the sum of matrix A and B.
	cout << "\nMatrix Sum (A + B): " << endl;
		
		for (int i =0; i < matrixSize; i++){
			for (int j= 0; j < matrixSize; j++){
				cout <<  matrixA[i][j] + matrixB[i][j] << " ";
			}
			cout << endl;
		}
		//This prints out the product of matrix a and b.
	cout << "\nMatrix Product (A * B): " << endl;
		
		for (int i =0; i < matrixSize; i++){
			for (int j= 0; j < matrixSize; j++){
				cout <<  matrixA[i][j] * matrixB[i][j] << " ";
			}
			cout << endl;
		}
		// This prints out the difference of matrix A and B.
	cout << "\nMatrix Difference (A-B): " << endl;
		
		for (int i =0; i < matrixSize; i++){
			for (int j= 0; j < matrixSize; j++){
				cout <<  matrixA[i][j] -  matrixB[i][j] << " ";
			}
			cout << endl;
		}

}
