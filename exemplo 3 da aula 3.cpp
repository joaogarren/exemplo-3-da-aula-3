#include <iostream>
using namespace std;
int main(){
    int dia;
    
    cout<<"digite o número do dia da semana (1-7):";
    cin>>dia;
    
    switch(dia){
        case 1:
        cout<< "Domingo"<<endl;
        break;
        case 2:
        cout<< "Segunda-feira"<<endl;
        break;
        case 3:
        cout<< "Terça-feira"<<endl;
        break;
        case 4:
        cout<< "Quarta-feira"<<endl;
        break;
        case 5:
        cout<< "Quinta-feira"<<endl;
        break;
        case 6:
        cout<< "Sabado"<<endl;
        break;
        default:
        cout<<"Dia inválido"<<endl;
        break;
    }