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

bool Song::operator<(Song const &other){

}

bool Song::operator>(Song const &other){

}
