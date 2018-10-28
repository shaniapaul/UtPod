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

    Song s2("Beatles", "Hey Jude2", 5);
    int result = t.removeSong(s2);
    cout << "result = " << result << endl;

    Song s1("Beatles", "Hey Jude1", 4);
    result = t.addSong(s1);
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

    Song s3("Beatles", "Hey Jude3", 6);
    result = t.addSong(s3);
    cout << "result = " << result << endl;

    Song s4("Beatles", "Hey Jude4", 7);
    result = t.addSong(s4);
    cout << "result = " << result << endl;

    Song s5("Beatles", "Hey Jude5", 241);
    result = t.addSong(s5);
    cout << "add result = " << result << endl;

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
    cout << "memory = " << t.getRemainingMemory() << endl;


}

