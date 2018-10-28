//
// Created by Shania Paul on 10/24/2018.
//

#include "UtPod.h"
#include "Song.h"

UtPod::UtPod() {
    songs = NULL;  //the head pointer is initially null
    memSize = MAX_MEMORY;
}

UtPod::UtPod(int size) {
    songs = NULL;
    memSize = size;
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
    bool result = NOT_FOUND;
    while (current != NULL) {
        if (current->s.getTitle() == s.getTitle() & current->s.getArtist() == s.getArtist() & current->s.getSize() == s.getSize()) {

        }
        current = current->next;
    }
}
return SUCCESS;

}

void UtPod::showSongList() {
    cout<<"Song List"<<endl;
    SongNode *current = songs;
    int count = 1; //for output formal
    while (current != NULL) {
        cout<<count<<". "<<current->s.getTitle()<< ", "<<current->s.getArtist()<<", "<<current->s.getSize()
            <<" MB"<<endl;
        current = current->next;
        count++;
    }
}

int UtPod::getRemainingMemory() { //should add memory for all songs and subtract from memSize
    SongNode *current = songs;
    int remainingMem = memSize;
    while (current != NULL) {
        remainingMem = remainingMem - current->s.getSize(); //subtracts size of each song
        current = current->next;
    }
    return remainingMem;
}
