#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n,a=0,b=1,c=1;
	
	do{
		cout<<"introduzca el numero de digitos: ";
		cin>>n;
	}while(n<=0);
	
	cout<<"1 ";
	for(int i=1;i<n;i++){
		c = a + b;
		cout<<c<<" ";
		a = b;
		b = c;		
	}
	
	cout<<"\n";
	system("pause");
	return 0;
}
