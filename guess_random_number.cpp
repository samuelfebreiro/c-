#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(){
	int number, random, counter = 0;
	
	srand(time(NULL));
	random = 1 + rand()%(100);
	
	do {
		cout<<"\nTry to guess a number: ";
		cin>>number;
		
		if(number<random){
			cout<<"\n-Enter a higher number-";
		}
		
		if(number>random){
			cout<<"\n-Enter a smaller number-";
		}
		
		counter++;
		
	} while(number != random);
	
	cout<<"\nCongratulations :P";
	cout<<"\nYou found it in "<<counter<<" attempts";	
	
	getch();
	return 0;
}
