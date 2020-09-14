#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	double x,y,z;
	cout<<"----Temperature Converter---"<<endl;
	cout<<"Please chose 1. Fahrenheit  or 2.Celsius: "<< endl;
	cout<<endl;
	cin>>x;
	if(x==1){
		cout<<"Please enter your temp:"<<endl;
		cin>>y;
		cout<<endl;
		cout<<y<<"Fahrenheit is "<< ((y-32)*5/9) <<"Celsius."<<endl;
	}
	else if(x==2){
		cout<<"Please enter your temp:"<<endl;
		cin>>y;
		cout<<endl;
		cout<<y<<"Celsius "<< (y*9/5)+32 <<"Fahrenheit."<<endl;
	}
	else{
		cout<<"Please enter number 1 or 2."<<endl;
		}
	
	return 0;
}
