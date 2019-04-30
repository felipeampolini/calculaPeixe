#include<stdio.h>
#include <iostream>

using namespace std;

int valorPeixe, quantidadePeixe, valorPicado, quantidadePicado;
int res1, res2;

int main(){
    cout << "Digite o valor do peixe: ";
    cin >> valorPeixe;
    cout << "Digite a quantidade do peixe: ";
    cin >> quantidadePeixe;
    cout << "Digite o valor do peixe picado: ";
    cin >> valorPicado;
    cout << "Digite o quantidade do peixe picado: ";
    cin >> quantidadePicado;
    res1 = valorPeixe*quantidadePeixe;
    res2 = valorPicado*quantidadePicado;
    cout << "---------------------\n";
    cout << "Peixe | Picado\n";
    cout << res1 << "|" << res2;
}
