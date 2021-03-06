//
// Created by Shania Paul and Ayesha Rahman on 10/24/2018.
//

#ifndef LAB_5_SONG_H
#define LAB_5_SONG_H

#include <string>

using namespace std;

class Song{
private:
    string artist;
    string title;
    int size;
public:
    Song(string const &a, string const &t, int s);
    Song();
    void setArtist(string const &a){
        artist = a;
    }
    const string& getArtist() const{
        return artist;
    }
    void setTitle(string const &t){
        title = t;
    }
    const string& getTitle() const{
        return title;
    }
    void setSize(int s){
        size = s;
    }
    int getSize()const{
        return size;
    }

    bool operator==(Song const &other);

    bool operator<(Song const &other);

    bool operator>(Song const &other);

};

#endif //LAB_5_SONG_H
