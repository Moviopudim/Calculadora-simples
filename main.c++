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
    cout<<"7 == porcentagem \n";
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
       cout<<"A raiz de "<<num1 <<"e: "<< sqrt(num1);
    }

     if (operacao == 7)
    {
        float percentage, num;

       cout<<"Digite a porcentagem:";
       cin >> percentage;
       cout<<"A qual numero ela representa: ";
       cin >> num;
       float result = (percentage/100)*num;
       cout<<"A porcentagem de "<< num <<" e "<< result <<"%" ;
       
    }
}