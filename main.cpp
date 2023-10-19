#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int readin(string filename, int matrixA[100][100], int matrixB[100][100]){
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
	return matrixSize;

}
void matrixPrint(int matrixSize, int matrix[100][100]){
	for (int i =0; i < matrixSize; i++){
			for (int j= 0; j < matrixSize; j++){
				cout <<  matrix[i][j] << " ";
			}
			cout << endl;
		}

}
void matrixAddition(int matrixSize, int matrixA[100][100], int matrixB[100][100]){
	// This prints out the sum of matrix A and B.
		cout << "\nMatrix Sum (A + B): " << endl;
			
			for (int i =0; i < matrixSize; i++){
				for (int j= 0; j < matrixSize; j++){
					cout <<  matrixA[i][j] + matrixB[i][j] << " ";
				}
				cout << endl;
			}

}
void matrixMultiplication(int matrixSize, int matrixA[100][100], int matrixB[100][100]){
	//This prints out the product of matrix a and b.
			int resultant[matrixSize][matrixSize];
		cout << "\nMatrix Product (A * B): " << endl;
			
			for (int i =0; i < matrixSize; i++){
				for (int j= 0; j < matrixSize; j++){
					resultant[i][j] =0;
					for (int k =0; k < matrixSize; k++){
						resultant[i][j] += matrixA[i][k] * matrixB[k][j];
					}
					cout << resultant[i][j] << " ";
				}
				cout << endl;
			}

}
void matrixSubtraction(int matrixSize, int matrixA[100][100],int matrixB[100][100]){
	// This prints out the difference of matrix A and B.
	cout << "\nMatrix Difference (A-B): " << endl;
		
		for (int i =0; i < matrixSize; i++){
			for (int j= 0; j < matrixSize; j++){
				cout <<  matrixA[i][j] -  matrixB[i][j] << " ";
			}
			cout << endl;
		}

}
int main(){
	
	cout << "\nBrett Balquist\n";
	cout <<"\nLab #6 Matrix Manipulation\n";

	// This ititalizes the 2d matrices with max of 100 in both x and y.
	int matrixA[100][100];
	int matrixB[100][100];
	string filename;
	cout << "\nWhat is the name of your file?\n" << endl;
	cin >> filename;
	//This populates the matrices
	int matrixSize = readin(filename, matrixA, matrixB);
		cout << "\nMatrix A:" << endl;
	// This prints out each element of matrix A/	
	matrixPrint(matrixSize, matrixA);
		cout << "\nMatrix B:" << endl;
	// This prints out each element of matrix B/	
	matrixPrint(matrixSize, matrixB);	
	// This runs the addition of matrix A and B
	matrixAddition(matrixSize, matrixA, matrixB);
	//This runs matrix multiplication and prints out hte result
	matrixMultiplication(matrixSize, matrixA, matrixB);
	//This runs matrix subtraction and prints out the result.
	matrixSubtraction(matrixSize, matrixA, matrixB);

}
