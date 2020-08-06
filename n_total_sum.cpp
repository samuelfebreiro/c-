#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, sum = 0;
	
	cout<<"Introduce N: "; cin>>n;
	
	for(int i=1;i<=n;i++){
		sum += i;
	}
	
	cout<<"The total sum is: "<<sum;	
	
	getch();
	return 0;
}
