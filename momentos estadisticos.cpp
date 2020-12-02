#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float suma=0, a;
	int nt;
	cout<<"por favor ingrese el numero de valores que se tiene"<<endl;
	cin>>nt;
	cout<<"*******************************"<<endl;
	for(int i=0;i<nt;i++)
	{
		cout<<"por favor ingrese el valor "<<(i+1)<<" : "<<endl;
		cin>>a;
		suma+=a;
	}
	cout<<"*******************************"<<endl;
	cout<<"el valor de la media aritmetica es = "<<(suma/nt)<<endl;
	
	
	
	
	return 0;
}
