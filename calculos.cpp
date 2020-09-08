
#include <iostream>
#include <cmath>
using namespace std;
int suma (){
  int op1, op2, suma;
  cout <<"\n\nSUMA\n\n";
  cout << "Digite la primera cantidad : ";
  cin >> op1;
  cout << "Digite la segunda cantidad : ";
  cin >> op2;
  suma = op1 + op2;
  cout << "La suma total entre " << op1 << " + " << op2 << " = " ;
  return suma;
}
int resta (){
  cout <<"\n\nRESTA\n\n";
  int op1, op2, resta;
  cout << "Digite la primera cantidad : ";
  cin >> op1;
  cout << "Digite la segunda cantidad : ";
  cin >> op2;
  resta = op1 - op2;
  cout << "La resta total entre " << op1 << " - " << op2 << " = " ;
 
  return resta;
}
int division (){
  cout <<"\n\nDIVISION\n\n";
  int op1, op2, division, residuo;
  
  cout << "Digite el dividendo : ";
  cin >> op1;
  
  cout << "Digite el divisor : ";
  cin >> op2;
  if (op2 != 0){
   division = op1/op2;
   residuo = op1%op2;
   cout << "\nEl residuo es = " << residuo<< endl;
   cout << op1 << " ÷ " << op2 << " = " ;
  }
  else {
    cout << "El divisor debe ser distinto de cero, intentelo de nuevo\n";
  }
  
  return division;
}
int multiplicacion (){
  cout <<"\n\nMULTIPLICACION\n\n";
  int op1, op2, multiplicacion;
  cout << "Digite el primer factor : ";
  cin >> op1;
  cout << "Digite el segundo factor : ";
  cin >> op2;
  multiplicacion = op1 * op2;
  cout << "La multiplicacion entre " << op1 << " X " << op2 << " = " ;
 
  return multiplicacion;
}
int potenciacion (){
  cout <<"\n\nPOTENCIACION\n\n";
  int op1, op2, potenciacion;
  cout << "Digite la base : ";
  cin >> op1;
  cout << "Digite el exponente : ";
  cin >> op2;
  potenciacion = pow(op1, op2);
  cout << "La potenciacion entre " << op1 << " ^ " << op2 << " = " ;
 
  return potenciacion;
}
int raizCuadrada (){
  cout <<"\n\nRAIZ CUADRADA\n\n";
  int op1;
  double raiz;
  do{
   cout << "\nDigite la cantidad a poner dentro de la raiz : ";
   cin >> op1;
   if (op1 > 0){
    raiz = sqrt(op1);
    cout << "La raiz cuadrada de " << " √ " << op1 << " = " ;
   }
   else {
    cout << "La cantidad debe ser positiva";
   }
  }while (op1 < 0);
  return raiz;
}
int factorial (){
  cout <<"\n\nFACTORIAL\n\n";
  int factorial = 1, op1, num;
  
  cout << "Calcular el factorial de : ";
  cin >> op1;
  if (op1 >= 1){
    num = op1;
    while (op1 >= 1){
      factorial = factorial * op1;
      op1--;
    }
  }
  else {
    cout <<"El numero debe ser positivo, por favor intente de nuevo";
  }
  
  cout <<"El factorial de "<< num << "! = ";

  return factorial;
}