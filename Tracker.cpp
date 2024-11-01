#include "Tracker.h"

Tracker::Tracker(Song trackSong) {
    trackedSong = trackSong;
}
void Tracker::AddHistorical(TrackSong ts)
{
    historicalTrack.push_back(ts);
}

float Tracker::getPromedioReating()
{
    int sumaReating = 0;
    for (int i = 0; i < historicalTrack.size(); i++) {
        sumaReating += historicalTrack[i].raeting;
        
    }
    return sumaReating / historicalTrack.size();
}

int Tracker::getNumberSongPlayed(float porcent)
{
    int counter = 0;
    for (int i = 0; i < historicalTrack.size(); i++) {
        float p = historicalTrack[i].getReproduccionPorcent(trackedSong);
        if (p >= porcent)
        {
            counter++;
        }
    }
    return counter;
}

void Tracker::setSong(Song s)
{
    trackedSong = s;
}

void Tracker::ClearHistorical() {
    historicalTrack = vector<TrackSong>();
}

void Tracker::printStars() {
    for (int i = 0; i < historicalTrack.size(); i++) {
        for (int j = 0; j < historicalTrack[i].raeting; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void Tracker::printHistoricalwithReate(int reat) {
    for (int i = 0; i < historicalTrack.size(); i++) {
        if (historicalTrack[i].raeting == reat) {
            cout << "Historia n " << i+1 << endl;
        }
    }
}

void Tracker::printBarPercent() {
    for (int i = 0; i < historicalTrack.size(); i++) {
        int totalBarras = int(historicalTrack[i].getReproduccionPorcent(trackedSong)) / 10;
        for (int j = 0; j < totalBarras; j++) {
            cout << "|";
        }
        cout << endl;
    }
}
