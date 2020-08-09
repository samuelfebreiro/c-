#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n, op = 0, total = 0, odd = 0;
	
	cout<<"This program returns the result of the operation: 1-2+3-4+5...-n, where 'n' is the number you enter on the screen";
	cout<<"\nIntroduce N: ";
	cin>>n;
	
	for(int i=0;i<=n;i++){
		op += i;
	}
		
	for(int j=0;j<=n;j++){
		if(j%2!=0){
			odd += j;
		} else{
			j;
		}
	}
	
	total = (2*odd) - op;	
	cout<<"\nThe result is: "<<total;
	cout<<"\nThanks! Press 0 to exit.";
	getch();
	return 0;
}
