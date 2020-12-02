#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int A[10];
	cout<<"programa para obrener numeros aleatorios"<<endl;
	
	srand (time(NULL));
	for(int i=0;i<10;i++)
	{
		A[i]=rand()%10;
	}
	cout<<"tus  umeros aleatorios son los siguientes"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<A[i]<<" ";
	}
	
	
	
	
	
	return 0;
}
