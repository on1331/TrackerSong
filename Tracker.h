#pragma once
#include "Song.h"
#include "TrackSong.h"
#include <vector>
using namespace std;
class Tracker
{
protected:
	
	Song trackedSong;
	vector<TrackSong> historicalTrack;
public:
	Tracker(Song tracKSong);
	void AddHistorical(TrackSong ts);
	float getPromedioReating();//me obtiene el promedio de calificiacion
	int getNumberSongPlayed(float porcent);//me devuelve la cantidad de historiaas que se han reproducido en un porcentaje esperado
	void setSong(Song s);

	void ClearHistorical();//limpiar la historia
	void printStars();//muestra en estrellas las hitorias trackeadas
	void printHistoricalwithReate(int reat);//muestra las historias que tengan ese reating
	void printBarPercent();// imprimir en barras el total de la cancion
	/*
	*	| | | |
		| | | | | | | | | |
		| | | | | | | |
		| | | | | | | | | |
	*/
};


