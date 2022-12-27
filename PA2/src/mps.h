#ifndef _MAXIMUM_PLANAR_SUBSET
#define _MAXIMUM_PLANAR_SUBSET

#include<vector>
#include<fstream>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;

class MPS{
    friend class Node;

public:
    int size;
    int *connection;            
    // store original graph
    int **answer;
    // answer[i][j]%10 = 0 means unvisited
    // answer[i][j]%10 = 1 means visited
    // answer[i][j]%100 means which case is (i,j)
    // answer[i][j]/100 means optimal number of chords
    vector<vector<int>> chords; 
    // store valid chords

    MPS();
    ~MPS();
    void MPS_read_file(const char *);
    void MPS_write_file(const char *);
    int MPS_top_down(int i, int j);    // solve the dp table
    void MPS_find_chord(int i, int j); // get valid chords
};

#endif