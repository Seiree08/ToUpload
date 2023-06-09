/**
* @version 0.1
* @date 08/06/2023
* @autor Sami
* @title Conversor de segudnos a horas
* @brief Convierte segundos a horas, minitos y segundos
**/
#include <iostream>
#include <math.h>

using namespace std;
/**
 * @brief Convierte segunos a minutos jajan't
 * @param S/Param
 * @return void
 * @code
 * MinutosTotales = SegSolicitud / 60;
 * SegundosTotales = SegSolicitud%60;
 * @endcode
 **/

int main()
{
    int SegSolicitud;
    float SegundosTotales, MinutosTotales=0, Minutos=0, HorasTotales=0, Horas=0;
    
    cout<<"Hello tú, ingresa una cantidad de segundos a convertir: ";
    cin>>SegSolicitud;
    
    MinutosTotales = SegSolicitud / 60;
    SegundosTotales = SegSolicitud%60;
    cout<<"Convertido son: "<<HorasTotales<<" : "<<MinutosTotales<<" : "<<SegundosTotales<<endl;
    return 0;
}