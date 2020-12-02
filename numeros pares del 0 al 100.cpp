#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int A[51];
	cout<<"arreglo de numeros pares del 0 al 100"<<endl;
	
	for(int i=0;i<51;i++)
	{
		A[i]=2*i;
	}
	
	for(int i=0;i<51;i++)
	{
		cout<<A[i]<<endl;
	}
	
	
	
	return 0;
}
