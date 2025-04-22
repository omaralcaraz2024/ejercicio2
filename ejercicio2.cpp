/******************************************************************************
Creador: 
omar alejandro alcaraz renteria

Nombre programa:
ejercicio2

Fecha:
21 de abril del 2025
*******************************************************************************/

#include <iostream>

int main() {
    float numero1, numero2;
    
    std::cout <<"Escribe el primer numero: ";
    std::cin >> numero1;
    
    std::cout <<"Escribe el segundo numero: ";
    std::cin >> numero2;
    
    float suma = numero1 + numero2;
    float resta = numero1 - numero2;
    float multiplicacion = numero1 * numero2;
    float division = numero1 / numero2;
    
    std::cout <<"La suma es: " <<suma <<std::endl;
    std::cout <<"La resta es: " <<resta <<std::endl;
    std::cout <<"La multiplicacion es: " << multiplicacion <<std::endl;
    std::cout <<"la division es: " <<division <<std::endl;
    
    return 0;
}
