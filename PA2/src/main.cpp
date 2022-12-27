#include<iostream>
#include "mps.h"
using namespace std;

void help_message(){
    cout << "usage: ./mps <input-file-name> <output-file-name>" << endl;
}

int main(int argc,char* argv[]){
    if(argc!=3){
        help_message();
        return 0;
    }

    MPS mps;
    mps.MPS_read_file(argv[1]);
    mps.MPS_top_down(0,mps.size-1);
    mps.MPS_find_chord(0,mps.size-1);
    mps.MPS_write_file(argv[2]);

    return 0;
}