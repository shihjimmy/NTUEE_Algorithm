#include "cyclebreaker.h"
using namespace std;

void help_message(){
    cout << "usage: ./bin/cb inputs/<input file name> outputs/<output file name>" << endl;
}

int main(int argc,char* argv[]){
    if(argc!=3){
        help_message();
    }

    Graph g;
    g.input_files(argv[1]);

    if(g.type == 'u'){
        g.Kruskal_algo();
    }
    else if (g.type == 'd'){
        g.DFS();
    }

    g.output_files(argv[2]);

    return 0;
}