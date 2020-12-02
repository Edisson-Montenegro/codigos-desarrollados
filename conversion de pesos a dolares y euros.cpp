#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	double pesos,dolares,euros;
	cout<<"conversion de pesos a dolares y pesos a euros"<<endl;
	cout<<"por favor ingrese el valor en pesos $"<<endl;
	cin>>pesos;
	
	dolares=pesos*0.00027;
	euros=pesos*0.00023;
	
	cout<<"el valor en dolares es "<<dolares<<endl;
	cout<<"el valor en euros es "<<euros<<endl;
	
	
	
	
	
	
	
	
	return 0;
}
