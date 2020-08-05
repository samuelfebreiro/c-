#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int num, i = 0;
	
	do{
		cout<<"Introduce a number please: "; cin>>num;
		
		if(num>0){
			i++;
		}else {
			i;
		}
		
	} while(num != 0);
	
	cout<<"You was introduce "<<i<<" numbers greater than zero before the zero";
	
	getch();
	return 0;
}
