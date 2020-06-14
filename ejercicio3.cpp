#include "iostream" 
using namespace std;
int prueba1(int); //funcion para evaluar si bisiesto por la prueba 1
int prueba2(int); //funcion para evaluar si bisiesto por la prueba 2

int main(void) 
{
    int year,prue1,prue2;
    cout << endl << "Bienvenido.";
    cout << endl << "\nPor favor, ingresa el numero de un ano para saber si es bisiesto o no: \n";
    cin >> year;

    if (year >= 0 )
    {
        if (year == 400)//se analiza si el numero ingresado es 400 ya que es obvio que es bisiesto
        {
            cout << "\nEl ano es bisiesto.\n\n";
            
        }
        else
        {
            if (year<400) //se analiza si el año ingresado es menor ya que no se puede realizar la prueba 1
            {
                prueba2(year); //se llama a la funcion 'prueba2'
            }
            else //si ingresa un numero mayor a 400 se puede realizar la prueba 1
            {
            prueba1(year); //se llama a la funcion 'prueba1'
            }
        }
    }
    else
    {
        cout << endl << "\nInvalido, debe ingresar un numero positivo\n\n";
    }
}
int prueba1(int year)
{
    if (year % 400 == 0)
    {
        cout << "\nEl ano es bisiesto.\n\n";
    }
    else
    {
        prueba2(year); //se llama a la funcion 'prueba2' ya que no paso la prueba 1
    }
}
int prueba2(int year)
{
    if (year % 4 == 0 & year % 100 != 0)
    {
        cout << "\nEl ano es bisiesto.\n\n";
    }
    else
    {
        cout << "\nEl ano NO es bisiesto\n\n";
    }
}