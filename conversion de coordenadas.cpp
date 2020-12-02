#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	double x,y,r,teta;
	cout<<"programa para pasar de coodenadas rectangulares(x,y) a polares (r,teta)"<<endl;
	
	cout<<"por favor ingrese el valor de x"<<endl;
	cin>>x;
	cout<<"por favor ingrese el valor de y"<<endl;
	cin>>y;
	
	r=sqrt(pow(x,2)+pow(y,2));
	teta=atan(y/x)*180/3.1416;
	
	cout<<"las coordenadas rectangulares ("<<x<<","<<y<<") en polares es ("<<r<<","<<teta<<")"<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
