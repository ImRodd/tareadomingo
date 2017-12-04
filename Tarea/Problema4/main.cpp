#include <iostream>

/* numero entero */
using namespace std;
int main(int argc, char** argv) {

//variables
            int num1;
            int segundos=0;
            printf("Introduzca un número:");
    scanf("%d",&num1);
   
    if (num1>10){
       printf("Es mayor\n");
    }
    else
    {
       printf("Es menor\n");
    }

   if (num1<0 || num1>10) cout << "***fin del tiempo ***" << endl;
   
   segundos=(1000); //1 segundo
   num1++;  
   
	return 0;
}
