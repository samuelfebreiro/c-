#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n1, n2, n3 = 0;
	
	cout<<"Hi! Could you give me a number, please?: ";
	cin>>n1;
	
	for(int i=2; i<n1; i++){
		for(int j=2; j<n1; j++){
			n2 = i * j;
	
			if(n2 == n1){
				cout<<"Is not a prime number"<<endl;
				n3 += 1;
				break;
			}
		}
	}
	
	if(n3 == 0){
		cout<<"Yes! It is a prime number";
	}
	
	
	getch();
	return 0;
}
