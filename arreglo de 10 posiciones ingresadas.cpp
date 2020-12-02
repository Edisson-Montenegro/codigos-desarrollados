#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int A[10],a;
	cout<<"arreglo de 10 posiciones ingresadas por teclado"<<endl;
	
	for(int i=0;i<=9;i++)
	{
    	cout<<"por favor ingrese el valor "<<i<<endl;
    	cin>>a;
    	A[i]=a;
	}
	cout<<"*************************"<<endl;
	cout<<endl;
	cout<<"el arreglo de 10 posiciones es"<<endl;
	for(int i=0;i<=9;i++)
	{
    	cout<<A[i]<<endl;
	}
	
	
	
	
	
	
	return 0;
}
