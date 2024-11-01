#pragma once
#include "Song.h"
class TrackSong
{
public:
	int playMin;
	int playSec;
	int raeting;
	float getReproduccionPorcent(Song s);
	TrackSong();
	TrackSong(int pm, int ps, int r);
};

