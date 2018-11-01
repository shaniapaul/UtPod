//
// Created by Shania Paul on 10/24/2018.
//Ayesha Rahman 10/25/18

/* utPod_driver.cpp
Demo Driver for the UtPod.

Roger Priebe
EE 312 10/16/18

This is a basic driver for the UtPod.

You will want to do more complete testing.

*/
#include <cstdlib>
#include <iostream>
#include "Song.h"
#include "UtPod.h"

using namespace std;

int main(int argc, char *argv[])
{
    UtPod t;
    UtPod p1(256);

    cout << "Testing getTotalMemory"<<endl;
    cout << "memory of t = " << t.getTotalMemory() <<endl;
    cout << "memory of p1 = " << p1.getTotalMemory() <<endl;

    Song s2("Jackson 5", "ABC", 5);
    int result = t.removeSong(s2);
    cout << "result = " << result << endl;

    Song s1("Michael Jackson", "Billie Jean", 4);
    result = t.addSong(s1);
    cout << "result = " << result << endl;

    Song s6("Michael Jackson", "Thriller", 4);
    result = t.addSong(s6);
    cout << "result = " << result << endl;

    t.showSongList();

    //Song s2("Beatles", "Hey Jude2", 5);
    result = t.addSong(s2);
    cout << "result = " << result << endl;

    t.showSongList();

    if(s1>s2){
        cout << s1.getTitle() << " is greater than " << s2.getTitle() << endl;
    }
    if(s1<s2){
        cout << s1.getTitle() << " is less than " << s2.getTitle() << endl;
    }
    if(s1==s2){
        cout << s1.getTitle() << " is equal to " << s2.getTitle() << endl;
    }

    Song s3("Elvis Presley", "Suspicious Minds", 6);
    result = t.addSong(s3);
    cout << "result = " << result << endl;

    Song s8("Elvis Presley", "Suspicious Minds", 6);
    result = t.addSong(s8);
    cout << "result = " << result << endl;

    Song s4("Stevie Wonder", "Higher Ground", 7);
    result = t.addSong(s4);
    cout << "result = " << result << endl;

    Song s5("Madonna", "Material Girl", 241);
    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    Song s7("Madonna", "Material Girl", 50);
    result = t.addSong(s7);
    cout << "add result = " << result << endl;

    t.showSongList();

    cout << "shuffle songs:" << endl;
    t.shuffle();
    t.showSongList();

    cout << "sort songs:" << endl;
    t.sortSongList();
    t.showSongList();


    result = t.removeSong(s2);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s3);
    cout << "delete result = " << result << endl;

    t.showSongList();

    result = t.removeSong(s1);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s5);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s4);
    cout << "delete result = " << result << endl;


    t.showSongList();

    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    t.showSongList();
    cout << "Remaining memory = " << t.getRemainingMemory() << endl;

    Song song1("Twinkle","Twinkle Twinkle", 50);

    Song song2("Twinkle","Twinkle Twinkle", 20);

    Song song3("Angela","Twinkle Twinkle", 20);


    //p1.addSong(song2);
    p1.addSong(song3);
    p1.addSong(song2);
    p1.addSong(song1);
    p1.addSong(song2);

    p1.showSongList();

    p1.shuffle();
    cout << "shuffle result:" << endl;
    p1.showSongList();

    cout<<"Tests sorting if songs have same artist, same title, or same size"<<endl;
    p1.sortSongList();
    cout << "sort result:" << endl;
    p1.showSongList();

    cout<<"Testing operators"<<endl;
    if(song1>song2){
        cout << song1.getTitle() << " is greater than " << song2.getTitle() << endl;
    }
    if(song1<song2){
        cout << song1.getTitle() << " is less than " << song2.getTitle() << endl;
    }
    if(song1==song2){
        cout << song1.getTitle() << " is equal to " << song2.getTitle() << endl;
    }

    if(song2>song3){
        cout << song2.getTitle() << " is greater than " << song3.getTitle() << endl;
    }
    if(song2<song3){
        cout << song2.getTitle() << " is less than " << song3.getTitle() << endl;
    }
    if(song2==song3){
        cout << song2.getTitle() << " is equal to " << song3.getTitle() << endl;
    }

    if (true) {
        UtPod destruct(64);
        destruct.showSongList();
    }


    Song song4("Ashley","Happy Birthday", 15);

    Song song5("Olivia","Jingle Bells", 20);

    Song song6("David","Star Spangled Banner", 12);

    Song song7("Ben","Don't Stop Believing", 50);

    Song song8("Hikaru","Imperial March", 35);

    p1.addSong(song4);
    p1.addSong(song5);
    p1.addSong(song6);
    p1.addSong(song7);
    p1.addSong(song8);

    p1.showSongList();

    p1.shuffle();
    cout << "shuffle result:" << endl;
    p1.showSongList();

    p1.sortSongList();
    cout << "sort result:" << endl;
    p1.showSongList();



}

