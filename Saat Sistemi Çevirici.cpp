#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	cout <<"Lutfen 12'lik sistemde bir saat giriniz : "<< endl;//03:03:56PM---15:03:56AM
	char a[12];
	cin >> a;		
	if(a[8]=='P'){
		char b[3];
		b[0]=a[0];
		b[1]=a[1];
		b[2]='\0';
		
		int saat = atoi(b);
		
		/*int saat=0;
		saat += ((int)b[0]-48)*10;
		saat += (int)b[1]-48;*/
		saat +=12;
	
	
		a[0]=(char)48+saat/10;
		a[1]=(char)48+saat%10;
		
		a[8]='\0';
		cout <<a<< endl;
		cout <<"Basariyla 24'luk saat sistemine geçilmiþtir..."<<endl;
	
			
	}
	
	else{
	
		a[8]='\0';
		cout <<a<< endl;
		cout <<"Basariyla 24'luk saat sistemine geçilmiþtir..."<<endl;
	}
	
	
	
	
return 0; }
