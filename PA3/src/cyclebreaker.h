#ifndef __CYCLEBREAKER
#define __CYCLEBREAKER

#include<algorithm>
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

class Edge{
    public:
        int from;
        int to;
        int weight;
        bool del;
        Edge(int a,int b,int c,bool del): from(a),to(b),weight(c),del(del){}
};

class Graph{
    public:
        vector<vector<int>> graph;
        vector<Edge> edges;
        vector<Edge> deleted_edges;
        char type;
        int vertex_num;
        int edge_num;
        bool iscycle;
        vector<int> rank;
        vector<int> parent;
        vector<bool> colors;

        void Kruskal_algo();
        void DFS();
        bool check_cycle(Edge);
        void visit(int);
        void input_files(const char*);
        void output_files(const char*);
        int  find_set(int);
        void Union_set(int,int);
        void make_set(int);
};

#endif