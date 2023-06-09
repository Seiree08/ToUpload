/**
* @version 0.2
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
 * cout<<Millas *1852<<endl;
 * @endcode
 **/

int main()
{
    float Millas;
    cout<<"Hola, ingresa una cantidad de millas náuticas: ";
    cin>>Millas;
    cout<<"Los metros totales son: "<<Millas*1852<<endl;
    return 0;
}