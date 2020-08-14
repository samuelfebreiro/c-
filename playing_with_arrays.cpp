#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int A[50][50], B[50][50], C[50][50], D[50][50], rc, counter = 0;
	
	cout<<"Hey! Look at this :)";
	cout<<"\n\nEnter one number for the rows and columns of your array: ";
	cin>>rc;
	
	cout<<"\n";
	
	//Array A storage
	for(int i=0; i<rc; i++){
		for(int j=0; j<rc; j++){
			cout<<"Enter number for A ["<<i<<"]["<<j<<"]: ";
			cin>>A[i][j];
		}
	}
	
	cout<<"\n";
	
	//Showing A
	cout<<"A, your array:"<<endl;
	for(int i=0; i<rc; i++){
		for(int j=0; j<rc; j++){
			cout<<A[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n";
	
	//Creating B, the transposed array of A
	for(int i=0; i<rc; i++){
		for(int j=0; j<rc; j++){
			B[j][i] = A[i][j];
		}
	}
	
	//Showing B
	cout<<"B, the transposed array:"<<endl;
	for(int j=0; j<rc; j++){
		for(int i=0; i<rc; i++){
			cout<<B[j][i]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n";
	
	//Summ of arrays
	for(int i=0; i<rc; i++){
		for(int j=0; j<rc; j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	
	//Showing the sum
	cout<<"C, the sum (A+B):"<<endl;
	for(int i=0; i<rc; i++){
		for(int j=0; j<rc; j++){
			cout<<C[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n";
	
	//Array multiplication
	for(int i=0; i<rc; i++){
		for(int j=0; j<rc; j++){
			D[i][j] = 0;
			for(int k=0; k<rc; k++){
				D[i][j] = D[i][j] + A[i][k]*B[k][j];
			}
		}
	}
	
	//Showing C, the multiplication
	cout<<"D, the multiplication (A*B):"<<endl;
	for(int i=0; i<rc; i++){
		for(int j=0; j<rc; j++){
			cout<<D[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
