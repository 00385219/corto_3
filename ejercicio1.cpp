#include "iostream"
#include <iomanip> // para la funcion setprecision y fixed, que es para solo imprimir 2 decimales
using namespace std;

// por mas que pense como crear funciones, no encontre la manera de usarlas en este ejercicio
int main(void)
{
    unsigned char car;
    cout << endl << "Ingrese cualquier tecla para calcular o Crtl-Z para finalizar: \n";
    while(cin >> car)
    {
        double Nh, NhX, h, hX, salTot, seg, afp, renta,salFin; 
        //Nh= # horas noramles - NhX=N horas extras - h = pago por Nh - hX pago por NhX - salTot = salario total
        //seg = descuento de seguro - afp = descuento de AFP - salFin = salario con descuentos aplicados
        cout << endl << "Ingrese las horas normales trabajadas: \n";
        cin >> Nh;
        cout << endl << "Ingrese las horas extras trabajadas: \n";
        cin >> NhX;

        if (Nh>=0 & NhX>=0)
        {
            h  = 1.75*Nh; 
            hX = 2.50*NhX;
            salTot = h+hX;
            seg = salTot*0.04;
            afp = salTot*0.0625;
            
            if (salTot>=500)
            {
                renta = salTot*0.10;
            }
            else
            {
                renta = 0;
            }

            salFin = salTot - (seg+afp+renta);
            cout << endl << setprecision(2) << fixed << "Pago por horas normales es de: $" << h;
            cout << endl << setprecision(2) << fixed << "Pago por horas extras es de: $" << hX;
            cout << endl << setprecision(2) << fixed << "El salario total (sin descuentos) es de: $" << salTot;
            cout << endl << setprecision(2) << fixed << "El descuento de Seguro Social es de: $" << seg;
            cout << endl << setprecision(2) << fixed << "El descuento de AFP es de: $" << afp;
            cout << endl << setprecision(2) << fixed << "El descuento del Impuesto sobre la Renta es de: $" << renta;
            cout << endl << setprecision(2) << fixed << "El salario final (con descuentos descuentos) es de: $" << salFin << endl;
        }
        else
        {
            cout << endl << "Por favor ingresar valores correctos";
        }
        





        cout << endl << "Ingrese cualquier tecla para calcular o Crtl-Z para finalizar: \n";
    }
}


