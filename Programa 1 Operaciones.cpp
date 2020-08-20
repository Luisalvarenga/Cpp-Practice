#include <iostream>

using namespace std;

//Función para las operaciones matemáticas básicas
int main()
{
    double Num1 = 0;
    double Num2 = 0;
    int Num1R = 0;
    int Num2R = 0;
    int resultado_mod = 0;

    //Operacion de suma
    cout << "--------------------------------------------------" << endl;
    cout << "                    SUMA                          " << endl;
    cout << "-------------------------------------------------- \n" << endl;

    cout << "Digite el primer numero:  "<<endl;
    cin >> Num1;

     cout << "\nDigite el segundo numero:  "<<endl;
    cin >> Num2;

    cout << "\nResultado de la operacion suma: " << Num1 + Num2 << "\n"<<endl;

    //Operacion de resta
    cout << "--------------------------------------------------" << endl;
    cout << "                    RESTA                          " << endl;
    cout << "-------------------------------------------------- \n" << endl;

    Num1 = 0;
    Num2 = 0;

    cout << "Digite el primer numero:  "<<endl;
    cin >> Num1;

     cout << "\nDigite el segundo numero:  "<<endl;
    cin >> Num2;

    cout << "\nResultado de la operacion resta: " << Num1 - Num2 <<endl;

     //Operacion de multiplicacion
    cout << "--------------------------------------------------" << endl;
    cout << "                    MULTIPLICACION                " << endl;
    cout << "-------------------------------------------------- \n" << "\n" << endl;

    Num1 = 0;
    Num2 = 0;

    cout << "Digite el primer numero:  "<<endl;
    cin >> Num1;

     cout << "\nDigite el segundo numero:  "<<endl;
    cin >> Num2;

    cout << "\nResultado de la operacion multiplicacion: " << Num1 * Num2 << "\n" <<endl;

     //Operacion de division
    cout << "--------------------------------------------------" << endl;
    cout << "                    DIVISION                      " << endl;
    cout << "-------------------------------------------------- \n" << endl;

    Num1 = 0;
    Num2 = 0;

    cout << "Digite el primer numero:  "<<endl;
    cin >> Num1;

     cout << "\nDigite el segundo numero:  "<<endl;
    cin >> Num2;

    cout << "\nResultado de la operacion division: " << Num1 / Num2 << "\n" <<endl;

     //Operacion de residuo
    cout << "--------------------------------------------------" << endl;
    cout << "                    RESIDUO                      " << endl;
    cout << "-------------------------------------------------- \n" << endl;

    Num1R = 0;
    Num2R = 0;

    cout << "Digite el primer numero:  "<<endl;
    cin >> Num1R;

     cout << "\nDigite el segundo numero:  "<<endl;
    cin >> Num2R;

    resultado_mod = Num1R % Num2R;
    cout << "\nResultado de la operacion residuo: " << resultado_mod << "\n" << endl;

    return 0;
}
