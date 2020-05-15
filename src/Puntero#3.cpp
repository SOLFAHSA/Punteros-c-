#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

int i;
int *ptrToi;
int **ptrToPtrToi;

ptrToPtrToi = &ptrToi;
ptrToi =&i;
i = 10;
*ptrToi = 20;
**ptrToPtrToi = 30;

cout<<"Dato de la variable: "<<i<<endl;
cout<<"Dato de Posicion de Memoria: "<<&i<<endl;
cout<<"Posicion de Memoria de Variable: "<<ptrToi<<endl;
cout<<"Dato de variable ala que apunta: "<<*ptrToi<<endl;
cout<<"Posicion de Memoria"<<&ptrToi<<endl;
cout<<endl;

cout<<"Posicion de Memoria de Variable: "<<ptrToPtrToi<<endl;
cout<<"Dato de variable ala que apunta: "<<*ptrToPtrToi<<endl;
cout<<"Dato de variable ala que apunta a otro apuntador:"<<**ptrToPtrToi<<endl;
cout<<"Posicion de Memoria: "<<&ptrToPtrToi<<endl;


return 0;
}