//
// Created by Shania Paul on 10/24/2018.
//

#include "Song.h"

Song::Song(string const &a, string const &t, int s) {
    artist = a;
    title = t;
    size = s;
}

bool Song::operator==(Song const &other) {
    return artist == other.artist && title == other.title && size == other.size;
}

bool Song::operator >(Song const &rhs) {
    //song1>song2 greater than
    bool checkGreater = false;
    if (artist > rhs.artist)  {
        checkGreater = true;
    }
    else if (artist == rhs.artist && title > rhs.title) {
        checkGreater = true;
    }
    else if (artist == rhs.artist && title == rhs.title && size > rhs.size) {
        checkGreater = true;
    }
    return checkGreater;
}
bool Song::operator <(Song const &rhs) {
    //song1<song2 less than
    bool checkLess = false;
    if (artist < rhs.artist)  {
        checkLess = true;
    }
    else if (artist == rhs.artist && title < rhs.title) {
        checkLess = true;
    }
    else if (artist == rhs.artist && title == rhs.title && size < rhs.size) {
        checkLess = true;
    }
    return checkLess;
}
