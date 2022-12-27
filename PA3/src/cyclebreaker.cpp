#include "cyclebreaker.h"

void Graph::make_set(int vertex){
    rank[vertex] = 0;
    parent[vertex] = vertex;
}

bool compare(Edge &a,Edge &b){
    return a.weight > b.weight;
}

void Graph::Union_set(int a,int b){
    int x = find_set(a);
    int y = find_set(b);
    if (x == y){
        return;
    }
    else if(rank[x] < rank[y]){
        parent[x] = y;
    }
    else{
        parent[y] = x;
        if(rank[x] == rank[y])
            rank[x]++;
    }
}

int Graph::find_set(int x){
    if(x == parent[x])
        return x;
    return parent[x] = find_set(parent[x]);
}

void Graph::input_files(const char* input_files){
    ifstream fin;
    fin.open(input_files);
    fin >> type;
    fin >> vertex_num;
    fin >> edge_num;
    graph.resize(vertex_num);
    rank.resize(vertex_num);
    parent.resize(vertex_num);

    if(type == 'd')
        colors.resize(vertex_num);

    int i, j, weight;
    while(fin>>i>>j>>weight){
        Edge e(i, j, weight,false);
        edges.push_back(e);
    }
    sort(edges.begin(), edges.end(), compare);

    fin.close();
}

void Graph::output_files(const char* output_files){
    ofstream fout;
    fout.open(output_files);

    int sum = 0;
    if(deleted_edges.size()==0)
        fout << sum;
    else{
        for (int i = 0; i < deleted_edges.size();i++)
            sum += deleted_edges[i].weight;

        fout << sum << "\n";
        //cout << sum << endl;

        for (auto& edge : deleted_edges){
            fout << edge.from << " " << edge.to << " " << edge.weight << "\n";
        }
    }
    fout.close();
}

void Graph::Kruskal_algo(){
    for (int i = 0; i < vertex_num;i++)
        make_set(i);
    
    for(auto& edge:edges){
        if(find_set(edge.from)!=find_set(edge.to))
            Union_set(edge.from, edge.to);
        else{
            edge.del = true;
            deleted_edges.push_back(edge);
        }
    }
}

void Graph::DFS(){
    Kruskal_algo();

    for(auto& edge:edges){
        if(!edge.del)
            graph[edge.from].push_back(edge.to);            
    }

    for(auto& edge:edges){
        if(edge.del && edge.weight>0){
            graph[edge.from].push_back(edge.to);

            if(!check_cycle(edge))  //no cycle
                edge.del = false;
            else 
                graph[edge.from].pop_back();
        }
    }

    deleted_edges.clear();
    for(auto& edge: edges){
        if(edge.del)
            deleted_edges.push_back(edge);
    }
}

bool Graph::check_cycle(Edge e){
    for (int i = 0; i < vertex_num;i++){
        colors[i] = false;
    }
    iscycle = false;
    visit(e.to);
    return iscycle;
}

void Graph::visit(int v){
    colors[v] = true;
    for (auto vertex : graph[v]){
        if(colors[vertex]){
        // has cycle
            iscycle = true;
            return; 
        }
        else
            visit(vertex);
    }
}