#include <iostream>
#include <stdlib.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float matriz[2][2];
	float mayor=0,menor=0;
	float promedio;
	
	cout<<"llenado de la matriz"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>matriz[i][j];
		}
	}
	
	cout<<"impresion de la matriz"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	mayor=matriz[0][0];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(mayor<matriz[i][j])
			{
				mayor=matriz[i][j];
			}
		}
	}
	
	menor=matriz[0][0];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(menor>matriz[i][j])
			{
				menor=matriz[i][j];
			}
		}
	}
	
	cout<<endl;
	cout<<"el numero mayor es "<<mayor<<endl;
	
	cout<<endl;
	cout<<"el numero menor es "<<menor<<endl;
	
	cout<<endl;
	promedio=(mayor+menor)/2;
	cout<<"el promedio entre el numero mayor y el numero menor es "<<promedio<<endl;
	
	
	
	
	
	return 0;
	
}
