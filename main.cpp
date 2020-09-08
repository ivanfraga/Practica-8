#include "calculos.h"
#include <iostream>
using namespace std;
int main() {
  int op;
  do {
    cout << "-----------------------------------";
    cout <<"\n\nCALCULADORA\n\n";
    cout <<"1.- Suma\n";
    cout <<"2.- Resta\n";
    cout <<"3.- Multiplicación\n";
    cout <<"4.- Division\n";
    cout <<"5.- Potenciacion\n";
    cout <<"6.- Raiz Cuadrada\n";
    cout <<"7.- Factorial\n";
    cout <<"0.- Salir\n";
    cout << "Opcion : ";
    cin >> op;
    switch (op){
      case 1:
      {
        cout << suma()<< endl;
        break;
      }
      case 2:{
        cout <<resta()<< endl;
        break;
      }
      case 3:
      {
        cout <<multiplicacion()<< endl;
        break;
      }
      case 4:{
        cout << division()<< endl;
        break;
      }
      case 5:
      {
        cout << potenciacion()<< endl;
        break;
      }
      case 6:
      {
        cout << raizCuadrada()<< endl;
        break;
      }
      case 7:
      {
        cout << factorial()<< endl;
        break;
      }

    }
  }while (op !=0);
  
}