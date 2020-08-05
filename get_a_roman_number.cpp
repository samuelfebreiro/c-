#include<iostream>;

using namespace std;

int main(){
	int number, units, dozens, hundreds, thousands;
	
	cout<<"Enter a number less than 4000 please : "; cin>>number;
	
	if(number >= 4000){
		cout<<"You don´t follow the rules baby, and I don´t like it...";
	}
	else{
	units = number%10; number /= 10;
	dozens = number%10; number /= 10;
	hundreds = number%10; number /= 10;
	thousands = number%10; number /= 10;
	
	switch(thousands) {
		case 1 : cout<<"M"; break;
		case 2 : cout<<"MM"; break;
		case 3 : cout<<"MMM"; break;
	}
	
	switch(hundreds){
		case 1 : cout<<"C"; break;
		case 2 : cout<<"CC"; break;
		case 3 : cout<<"CCC"; break;
		case 4 : cout<<"CD"; break;
		case 5 : cout<<"D"; break;
		case 6 : cout<<"DC"; break;
		case 7 : cout<<"DCC"; break;
		case 8 : cout<<"DCCC"; break;
		case 9 : cout<<"CM"; break;
	}
	
	switch(dozens){
		case 1 : cout<<"X"; break;
		case 2 : cout<<"XX"; break;
		case 3 : cout<<"XXX"; break;
		case 4 : cout<<"XL"; break;
		case 5 : cout<<"L"; break;
		case 6 : cout<<"LX"; break;
		case 7 : cout<<"LXX"; break;
		case 8 : cout<<"LXXX"; break;
		case 9 : cout<<"XC"; break;
	}
	
		switch(units){
		case 1 : cout<<"I"; break;
		case 2 : cout<<"II"; break;
		case 3 : cout<<"III"; break;
		case 4 : cout<<"IV"; break;
		case 5 : cout<<"V"; break;
		case 6 : cout<<"VI"; break;
		case 7 : cout<<"VII"; break;
		case 8 : cout<<"VIII"; break;
		case 9 : cout<<"IX"; break;
	}
	
	cout<<"\nThis is your Roman number. Thanks.";
	
	}
	
	cout<<"\nPress any button to continue.";
	
	system("pause>null");
	
	return 0;
}
