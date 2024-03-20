#include <iostream>

using namespace std;

int main()
{
    cout << "09 Programa que calcula el valor de la cuota mensual de una matricula y el valor total" << endl;
    double valorDeMatricula, valorDeCuota, valorTotal;
    int numeroDeCuotas;

    // Ingresar el valor de la matrícula y el número de cuotas en las que se cancelará.
    // Nota: El valor de la matrícula y del número de cuotas deben ser mayores a 0!
    cout << "Ingrese el costo de la matricula (USD): ";
    cin >> valorDeMatricula;
    cout << "Ingrese el numero de cuotas: ";
    cin >> numeroDeCuotas;

    // Calcular el monto del interés (Fórmula del Interés Compuesto)
    valorDeCuota = (valorDeMatricula * 1.02) / numeroDeCuotas;
    // Calcular el valor a futuro de la inversión (Fórmula del Interés Compuesto)
    valorTotal = valorDeCuota * numeroDeCuotas;
    cout << endl;
    // Mostrar el resultado en consola.
    cout << "El valor de cada cuota es de " << valorDeCuota << " USD." << endl;
    cout << "El valor total de la matrícula es de " << valorTotal << " USD.";
    return 0;
}
