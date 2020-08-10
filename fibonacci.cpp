#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n,n1 = 0, n2 = 1, serie = 0;
	
	
	cout<<"Write the number of the Fibonacci series position you want to see: ";
	cin>>n;
	
	cout<<"0 ";
	for(int i=2;i<=n;i++){
			serie = n1 + n2;
			n2 = n1;
			n1 = serie;
			cout<<serie<<" ";
		}
	
	cout<<"\nThanks! Press 0 to exit";
	
	getch();
	return 0;
}
