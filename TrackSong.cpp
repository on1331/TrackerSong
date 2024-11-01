#include "TrackSong.h"

float TrackSong::getReproduccionPorcent(Song s)
{
	int tdT = s.tiempoTotalEnSec();
	int trackTimeS = playMin * 60 + playSec;
	return trackTimeS * 100.0 / tdT;
}

TrackSong::TrackSong()
{
	playMin = 0;
	playSec = 0;
	raeting = 0;
}

TrackSong::TrackSong( int pm, int ps, int r)
{
	playMin = pm;
	playSec = ps;
	raeting = r;
}
