#include <iostream>

//convierta una cantidad de metros dada en su equivalente en Pies, Yardas y Millas y mostrar la tabla de equivalencias mediante el uso de sentencias de salida//

using namespace std;
int main(int argc, char** argv) {

//declaracion de variables	

float metros,pies,yardas;
long millas;
int opcion;
float resultado=0;
	
	cout<<"Bienvenido al convertidor"<<endl;
	cout<<"Estimado usuario"<<endl;
	
	cout<<"\n Convierta metros en pies,yardas y millas"<<endl;
	cout<<"Ingrese la cantidad en metros"<<endl;
	cin>>metros;
	
	cout<<"escoge una opcion \n1.-Pie \n2.-Yarda \n3.-Milla";
 	cin>>opcion;
 	
	switch(opcion)
	{
		case 1:
			{
			cout<<"\t\tselecionaste la opcion pie";
			resultado=metros*3.28084;
			cout<<"tu resultado es:"<<resultado<<endl;
			break;
			}
		case 2:
			{
			cout<<"\t\tselecionaste la opcion Yarda";
			resultado=metros*0.9144;
			cout<<"tu resultado es:"<<resultado<<endl;
			break;
			}	
		case 3:
			{
			cout<<"selecionaste la opcion Milla";
			resultado=metros*1,609.35;
			cout<<"tu resultado es:"<<resultado<<endl;
			break;
			}		
	}
	system("pause");
	
	return 0;
}
