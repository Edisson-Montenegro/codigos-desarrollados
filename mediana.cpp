#include <iostream>
#include <math.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n;
	
	cout<<"por favor ingrese el numero de valores"<<endl;
	cin>>n;
	
	float A[n];
	float mediana,aux;
	
	for(int i=0;i<n;i++)
	{
		cout<<"A["<<i<<"]: ";
		cin>>A[i];
	}
	
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<n-1;i++)
		{
			if(A[i]>A[i+1])
			{
				aux=A[i];
				A[i]=A[i+1];
				A[i+1]=aux;
			}
		}
	}
	
	if(n%2==1)
	{
		mediana=A[n/2];
	}
	else
	{
		mediana=(A[n/2]+A[n/2-1])/2;
	}
	
	cout<<"el valor de la mediana es "<<mediana<<endl;
	
	
	
	
	return 0;
}
