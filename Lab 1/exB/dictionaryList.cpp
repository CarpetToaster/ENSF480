/*
* File Name: dictionaryList.cpp
* Assignment: Lab 1 Exercise B
* Completed by: Ayre Ibrahim
* Submission Date: Sept 15, 2025
*/


#include <assert.h>
#include <iostream>
#include <stdlib.h>
#include "dictionaryList.h"
using namespace std;

Node::Node(const int& keyA, const Datum& datumA, Node *nextA)
: keyM(keyA), datumM(datumA), nextM(nextA)
{
}

DictionaryList::DictionaryList()
: sizeM(0), headM(0), cursorM(0)
{
}

int DictionaryList::size() const
{
    return sizeM;
}

int DictionaryList::cursor_ok() const
{
    return cursorM != 0;
}

const int& DictionaryList::cursor_key() const
{
    assert(cursor_ok());
    return cursorM->keyM;
}

const Datum& DictionaryList::cursor_datum() const
{
    assert(cursor_ok());
    return cursorM->datumM;
}

void DictionaryList::insert(const int& keyA, const string& datumA)
{
    // Add new node at head?
    if (headM == 0 || keyA < headM->keyM) {
        headM = new Node(keyA, datumA, headM);
        sizeM++;
    }
    
    // Overwrite datum at head?
    else if (keyA == headM->keyM)
        headM->datumM = datumA;
    
    // Have to search ...
    else {
        
        //POINT ONE
        
        // if key is found in list, just overwrite data;
        for (Node *p = headM; p !=0; p = p->nextM)
        {
            if(keyA == p->keyM)
            {
                p->datumM = datumA;
                return;
            }
        }
        
        //OK, find place to insert new node ...
        Node *p = headM ->nextM;
        Node *prev = headM;
        
        while(p !=0 && keyA >p->keyM)
        {
            prev = p;
            p = p->nextM;
        }
        
        prev->nextM = new Node(keyA, datumA, p);
        sizeM++;
    }
    cursorM = NULL;
    
}

void DictionaryList::remove(const int& keyA)
{
    if (headM == 0 || keyA < headM -> keyM)
        return;
    
    Node *doomed_node = 0;
    
    if (keyA == headM-> keyM) {
        doomed_node = headM;
        headM = headM->nextM;
        
        // POINT TWO
    }
    else {
        Node *before = headM;
        Node *maybe_doomed = headM->nextM;
        while(maybe_doomed != 0 && keyA > maybe_doomed-> keyM) {
            before = maybe_doomed;
            maybe_doomed = maybe_doomed->nextM;
        }
        
        if (maybe_doomed != 0 && maybe_doomed->keyM == keyA) {
            doomed_node = maybe_doomed;
            before->nextM = maybe_doomed->nextM;
        }
        
        
    }
    if(doomed_node == cursorM)
        cursorM = 0;
    
    delete doomed_node;           // Does nothing if doomed_node == 0.
    sizeM--;
}

void DictionaryList::go_to_first()
{
    cursorM = headM;
}

void DictionaryList::step_fwd()
{
    assert(cursor_ok());
    cursorM = cursorM->nextM;
}



// The following functions are supposed to be completed by the stuents, as part
// of the exercise B. the given code for this fucntion are just place-holders
// in order to allow successful linking when you're esting insert and remove.
// Replace them with the definitions that work.

DictionaryList::DictionaryList(const DictionaryList& source):sizeM(source.sizeM)
{
    // Students should replace these messages with proper code.
#if 0
    cout << "\nWARNING: Copy constructor fails, because it is not properly implemented.";
    cout << " Students should fix it nd remove this warning." << endl;
#endif
    //do nothing if empty
    if(sizeM == 0){
        headM = nullptr;
        cursorM = nullptr;
        return;
    }

    //Copy header
    headM = new Node(source.headM -> keyM, source.headM -> datumM, nullptr);
    cursorM = headM;

    //copy everything else
    const Node* tracker = source.headM;
    while(tracker -> nextM != nullptr){
        tracker = tracker -> nextM;
        cursorM -> nextM = new Node(tracker -> keyM, tracker -> datumM, nullptr);
        cursorM = cursorM -> nextM;
    }

    //Adjust cursor to match source
    cursorM = headM;
    while (cursorM -> keyM < source.cursorM -> keyM){
        cursorM = cursorM -> nextM;
    }
    
}

DictionaryList& DictionaryList::operator =(const DictionaryList& rhs)
{
    // Students should replace these messages with proper code.
#if 0
    cout << "\nWARNING: DictionaryList::operator= failed, because it is not properly implemented.";
    cout << " Students should fix it nd remove this warning." << endl;
#endif

    //prevents self copying
    if(this != &rhs){
        
        make_empty();

        sizeM = rhs.sizeM;
        
        //do nothing if empty
        if(sizeM == 0){
            headM = nullptr;
            cursorM = nullptr;
            return *this;
        }

        //Copy header
        headM = new Node(rhs.headM -> keyM, rhs.headM -> datumM, nullptr);
        cursorM = headM;

        //copy everything else
        const Node* tracker = rhs.headM;
        while(tracker -> nextM != nullptr){
            tracker = tracker -> nextM;
            cursorM -> nextM = new Node(tracker -> keyM, tracker -> datumM, nullptr);
            cursorM = cursorM -> nextM;
        }
        cursorM = headM;
    }
    return *this;
}

DictionaryList::~DictionaryList()
{
    // Students should replace these messages with proper code.
#if 0
    exit(1);
    cout << "\nWARNING: the destructor of class DictionaryList fails, because it is not properly implemented.";
    cout << " Students should fix it nd remove this warning." << endl;
#endif
    make_empty();
}

void DictionaryList::find(const int& keyA)
{
#if 0
    // Students should replace these messages with proper code.
    cout << "\nDon't know how to find " << keyA << " (or any other key).\n";
    cout << "... so exit is being called.\n";
    exit(1);
#endif
    cursorM = headM;
    while(cursorM != nullptr){
        if(cursorM -> keyM == keyA){
            return;
        }
        cursorM = cursorM -> nextM;
    }

}

void DictionaryList::make_empty()
{
    // Students should replace these messages with proper code.
#if 0
    cout << "\nWARNING: call to the function make_empty failed, because it is not properly implemented.";
    cout << " Students should fix it and remove this warning." << endl;
#endif

    Node* reaper;
    while(headM != nullptr){
        reaper = headM;
        headM = headM -> nextM;
        reaper -> nextM = nullptr;
        delete reaper;
    }
    headM = nullptr;
    sizeM = 0;
}
