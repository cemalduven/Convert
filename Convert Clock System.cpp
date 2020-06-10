#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	cout <<"Please enter one hour in the system of 12 : "<< endl;//03:03:56PM---15:03:56AM
	char a[12];
	cin >> a;		
	if(a[8]=='P'){
		char b[3];
		b[0]=a[0];
		b[1]=a[1];
		b[2]='\0';
		
		int clock = atoi(b);
		
		/*int saat=0;
		clock += ((int)b[0]-48)*10;
		clock += (int)b[1]-48;*/
		clock +=12;
	
	
		a[0]=(char)48+clock/10;
		a[1]=(char)48+clock%10;
		
		a[8]='\0';
		cout <<a<< endl;
		cout <<"Successfully, the 24-hour system was launched ..."<<endl;
	
			
	}
	
	else{
	
		a[8]='\0';
		cout <<a<< endl;
		cout <<"Successfully, the 24-hour system was launched ..."<<endl;
	}
	
	
	
	
return 0; }
