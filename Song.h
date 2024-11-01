#pragma once
#include <iostream>
using namespace std;
class Song
{
private:
	int tmin;
	int tsec;
public:
	string name;
	Song();
	Song(string n, int min, int sec);
	int tiempoTotalEnSec();
	bool HasTheSameTime(Song c);
	int getMin();
	int getSec();
	void setMin(int min);
	void setSec(int sec);
};

