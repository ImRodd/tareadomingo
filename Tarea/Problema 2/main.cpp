#include <iostream>
using namespace std;

int main(int argc, char** argv) 

{
	int segundos=0;
	
	do{
	cout<<"Ingrese la siguiente cantidad de segundos"<<endl;
	cin>>segundos;
	
}while(segundos>30 || segundos<120);
	
	for (int i=120; i>=2; i=30)
	cout<<"hola"<<endl;
	
	for (int i=120; i>=3; i=30)
	cout<<"soñando"<<endl;
	
	
	system("pause");
	return 0;
}
