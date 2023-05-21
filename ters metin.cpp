#include <iostream>
#include <string>
using namespace std;

void tersceviryaz(string metin , int uzunluk){
	if(uzunluk==0){
		return;
	}
	else{	
	cout<<metin[uzunluk-1];
	tersceviryaz(metin,uzunluk-1);
	}
}
int main(){
	tersceviryaz("enterYourText",13);
	return 0;
}
