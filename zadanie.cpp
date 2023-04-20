#include <iostream>
using namespace std;
int main(){
    int liczba;
    cout << "Podaj liczbe, a powiem czy przy dzieleniu przez 5 daje reszte 2 czy nie:"<< endl;
    cin>>liczba;
    cout << "Liczba = " << liczba << endl;
    if(!liczba){
        cout<<"Podaj liczbę."<<endl;
    }
    else if(liczba%5==2){
        cout<<"Tak, liczba przy dzieleniu przez 5 daje reszte 2."<<endl;
    }
    else{
        cout<<"Nie, liczba przy dzieleniu przez 5 nie daje reszty 2."<<endl;
    }
    return 0;
}