#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

int num1,num2;
int *ptr1, *ptr2;

ptr1 = &num1;
ptr2 = &num2;

num1 = 10;
num2 = 20;

ptr1 = ptr2;
ptr2 = NULL;

cout<<"Dato de variable 1: "<<num1<<endl;
cout<<"Dato de Posicion de Memoria: "<<&num1<<endl;
cout<<"Posicion de Memoria de Variable: "<<ptr1<<endl;
cout<<"Dato de variable ala que apunta: "<<*ptr1<<endl;
cout<<endl;
cout<<"Dato de variable 2: "<<num2<<endl;
cout<<"Dato de Posicion de Memoria: "<<&num2<<endl;
cout<<"Posicion de Memoria de Variable: "<<ptr2<<endl;
cout<<"Dato de variable al apuntador: "<<*ptr2<<endl;

return 0;
}