// Cancion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Song.h"
#include "TrackSong.h"
#include "Tracker.h"
using namespace std;
int main()
{
    Song c1("La Moredana", 3, 30);
    Song c2("La Fiesta", 4, 35);
    Song c3("La Traicion", 3, 55);
    //trakceo de la cancion la Morenada
    Tracker cancion1(c1);
    TrackSong t1(1, 30, 3);
    TrackSong t2(3, 30, 5);
    TrackSong t3(3, 0, 4);
    TrackSong t4(3, 30, 4);
    cancion1.AddHistorical(t1);
    cancion1.AddHistorical(t2);
    cancion1.AddHistorical(t3);
    cancion1.AddHistorical(t4);
    cout << "Estrellas de las canciones trackeadas" << endl;
    cancion1.printStars();
    cout << "Historias de las canciones que tienen 4 de Renting" << endl;
    cancion1.printHistoricalwithReate(4);
    cout << "Porcentaje de reproduccion en barras" << endl;
    cancion1.printBarPercent();
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
