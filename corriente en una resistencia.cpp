#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float resistencia,tension,corriente;
	cout<<"programa para calcular la corriente de una resistencia"<<endl;
	cout<<"por favor ingrese el valor de la resistencia"<<endl;
	cin>>resistencia;
	cout<<"*******************************"<<endl;
	cout<<"por favor ingrese el valor de la tension"<<endl;
	cin>>tension;
	cout<<"*******************************"<<endl;
	corriente=tension/resistencia;
	cout<<"el valor de la corriente en la resistencia es ="<<corriente<<endl;
	
	
	
	
	
	return 0;
}
