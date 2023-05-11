#pragma once
#include <iostream>
using namespace std;
typedef char ElementType;
class DNAA
{
private:
    class DNA {
    public:
        //------ DNA DATA MEMBERS
        ElementType data;
        DNA* A;
        DNA* C;
        DNA* G;
        DNA* T;
        bool endOfSeg;
        //------ DNA OPERATIONS
        //-- Default constrctor: initializes data, A,C,G,T,endOfSeg members to DNA()
        DNA() 
        :data(0), A(0), C(0), G(0), T(0), endOfSeg(false) {}
        //value constractor
        DNA(ElementType datavalue) 
        :data(datavalue), A(0), C(0), G(0), T(0), endOfSeg(false) {}

    };
    //end of DNA class


    //DNA MEMBERS
    DNA* root;//tree root
    int countnodes;//for counting nodes (DNA base)
    int countstrings;//for counting Strings (DNA fragments)
public:
    //Default constructor: initializes root,countnodes,countstrings
    DNAA() :root(new DNA()), countnodes(0), countstrings(0) {}
    //parametarized constructor: initializes root,countnodes,countstrings and inserts data
    DNAA(string data);
    void insert(string data);
    DNA* search(string data);
    DNA* remove(DNA* root, string key, int depth = 0);
    void convert(DNA* root, ElementType str[], int level = 0);
    DNA* getroot(); //root getter
    bool isEmpty(DNA* root); //checks root children if empty
    int numofnodes();
    int numofstrings();
    void deleteTree(DNA* node); //destructor
    void prefix(string data);
    bool check(string data);
};


