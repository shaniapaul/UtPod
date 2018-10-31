//
// Created by Shania Paul on 10/24/2018.
//

#include <cstdlib>
#include <iostream>
#include "Song.h"
#include "UtPod.h"
#include <cstdlib>
#include <ctime>

using namespace std;

UtPod::UtPod() {
    songs = NULL;  //the head pointer is initially null
    memSize = MAX_MEMORY;
}

UtPod::UtPod(int size) {
    songs = NULL;
    if (size > 0 && size <= MAX_MEMORY) {
        memSize = size;
    }
    else {
        memSize = MAX_MEMORY;
    }
}
int UtPod::addSong(Song const &s) { //return success or no memory
    //SongNode *temp = new SongNode *;
    SongNode *temp = new SongNode; //not sure if correct
    //SongNode *temp;
    //int *temp2 = new int;
    bool result;
    if (getRemainingMemory() >= s.getSize()) {  //if memory available
        temp->s = s; //assign song to song node
        temp->next = songs;
        songs = temp;
        result = SUCCESS;
    }
    else {
        result = NO_MEMORY;
    }
    return result;
}

int UtPod::removeSong(Song const &s) { //returns success or not found
    SongNode *current = songs;
    SongNode *trail = NULL;
    int result = NOT_FOUND;
    if (current != NULL && current->s.getTitle() == s.getTitle() && current->s.getArtist() == s.getArtist() && current->s.getSize() == s.getSize()) {
        songs = current->next;
        delete current;
        result = SUCCESS;
    }

    else {
        while (current != NULL && result != SUCCESS) {
            trail = current;
            current = current->next;

            if (current->s.getTitle() == s.getTitle() & current->s.getArtist() == s.getArtist() & current->s.getSize() == s.getSize()) {
                trail->next = current->next;
                delete current;
                result = SUCCESS;
            }
            //trail = current;
            //current = current->next;
        }
    }
    return result;

}

void UtPod::showSongList() {
    cout<<"Song List"<<endl;
    SongNode *current = songs;
    int count = 1; //for output formal
    while (current != NULL) {
        cout<<count<<". "<<current->s.getArtist()<< ", "<<current->s.getTitle()<<", "<<current->s.getSize()
            <<" MB"<<endl;
        current = current->next;
        count++;
    }
}

int UtPod::getRemainingMemory() { //should add memory for all songs and subtract from memSize
    SongNode *current = songs;
    int remainingMem = getTotalMemory();
    while (current != NULL) {
        remainingMem = remainingMem - current->s.getSize(); //subtracts size of each song
        current = current->next;
    }
    return remainingMem;
}

int UtPod::countSongs() {
    int count = 0;
    SongNode *current = songs;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}
void UtPod::shuffle() {
    srand(time(NULL)); //random seed for generator
    int num = countSongs(); //used as modulus
    //cout<<"this is the count: "<<num<<endl;

    for (int j = 0; j < num; j++) {
        int node1 = rand() % num;
        int node2 = rand() % num; //two random nodes

        SongNode *ptr1 = songs;
        SongNode *ptr2 = songs;

        for (int i = 1; i < node1; i++) { //starting at 1 because songs is first node
            ptr1 = ptr1->next; //should end up at node1
        }

        for (int i = 1; i < node2; i++) { //starting at 1 because songs is first node
            ptr2 = ptr2->next; //should end up at node1
        }

        Song temp = ptr1->s; //save 1 song
        ptr1->s = ptr2->s; //swap
        ptr2->s = temp;
    }
}

void UtPod::sortSongList(){
    SongNode *start = songs;
    SongNode *current;
    SongNode *best;

    while(start != NULL){
        //cout << "made it to outer loop" << endl;
        current = start;
        best = start;
        while(current != NULL){
            //cout << "made it to inner loop" << endl;
            if(current->s < best->s){
                best = current;
            }
            current = current->next;
        }
        Song temp = start->s; //save 1 song
        start->s = best->s; //swap
        best->s = temp;

        start = start->next;
    }

}

UtPod::~UtPod() {
    cout<<"This is the destructor"<<endl;
    SongNode *current = songs;
    SongNode *temp;
    while (current != NULL) {
        temp = current;
        current = current->next;
        delete temp;
    }

}