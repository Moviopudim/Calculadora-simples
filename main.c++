#include<iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main(){
    cout<<"**********************************\n";
    cout<<"       Qual A sua operacao:  \n";
    cout<<"**********************************\n";
    cout<<"1 == Adicao \n";
    cout<<"2 == Subtracao \n";
    cout<<"3 == divisao \n";
    cout<<"4 == Multiplicacao \n";
    cout<<"5 == potencia \n";
    cout<<"6 == raiz quadrada \n";

    int operacao;

    cout<<"Qual a sua operacao: ";
    cin >>operacao; 

    if (operacao == 1)
    {
        int num1;
        int num2;

       cout<<"Digite a sua conta:";
       cin >> num1;
       cout<<"+ ";
       cin >>num2;
       cout<<"= "<<num1 + num2;

    }

       if (operacao == 2)
    {
        int num1;
        int num2;

       cout<<"Digite a sua conta:";
       cin >> num1;
       cout<<"- ";
       cin >>num2;
       cout<<"= "<<num1 - num2;

    }
    
     if (operacao == 3)
    {
        int num1;
        int num2;

       cout<<"Digite a sua conta:";
       cin >> num1;
       cout<<"/ ";
       cin >>num2;
       cout<<"= "<<num1 / num2;
    }

     if (operacao == 4)
    {
        int num1;
        int num2;

       cout<<"Digite a sua conta:";
       cin >> num1;
       cout<<"* ";
       cin >>num2;
       cout<<"= "<<num1 * num2;
    }

     if (operacao == 5)
    {
        int num1;
        int num2;

       cout<<"Digite a sua conta:";
       cin >> num1;
       cout<<"^ ";
       cin >>num2;
       cout<<"= "<< pow(num1, num2);
    }

       if (operacao == 6)
    {
        int num1;

       cout<<"Digite a sua raiz:";
       cin >> num1;
       cout<<"= "<< sqrt(num1);
    }
}