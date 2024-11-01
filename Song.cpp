#include "Song.h"
Song::Song() {
	name = "Cancion X";
	tmin = 0;
	tsec = 0;
}
Song::Song(string n, int min, int sec) {
	name = n;
	tmin = min;
	tsec = sec;
}
int Song::tiempoTotalEnSec() {
	return tmin * 60 + tsec;
}
bool Song::HasTheSameTime(Song c) {
	
	return (tiempoTotalEnSec() == c.tiempoTotalEnSec());
}
int Song:: getMin() {
	return tmin;
}
int Song:: getSec() {
	return tsec;
}
void Song::setMin(int min) {
	tmin = min;
}
void Song::setSec(int sec) {
	tsec = sec;
}
