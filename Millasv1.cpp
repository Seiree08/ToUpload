/**
* @version 0.1
* @date 08/06/2023
* @autor Sami
* @title Conversor de millas a metros
* @brief Convierte millas náuticas a metros
**/
#include <iostream>

using namespace std;
/**
 * @brief Convierte millas náuticas a metros
 * @param S/Param
 * @return void
 * @code
 * cin>>Millas;
 * Metros = Millas * 1852;
 * Metros = Metros / 1;
 * @endcode
 **/
int main()
{
    float Millas, Metros, Conversion;
    
    cout<<"Hola, ingresa una cantidad de millas náuticas: ";
    cin>>Millas;
    Metros = Millas * 1852;
    Metros = Metros / 1;
    cout<<"Los metros totales son: "<<Metros<<endl;

    return 0;
}
