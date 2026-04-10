#include "parser.h"
#include <fstream>
#include <iostream>

using namespace std;

Graph* loadGraph(const string& filename) {
    ifstream file(filename);

    if(!file) {
        cerr << "Error opening file\n";
        return nullptr;
    }

    int n, start;
    if (!(file >> n >> start)) return nullptr;
    file.ignore();

    Graph* graph = new Graph();
    graph->startIndex = start;

    for(int i = 0; i < n; i++) {
        string name;
        getline(file, name);
        graph->vertices.push_back(new Vertex(name));
    }

    int from, to, cost;
    while(file >> from >> to >> cost) {
        // Защита от выхода за пределы массива
        if (from >= 0 && from < n && to >= 0 && to < n) {
            graph->vertices[from]->edges.push_back(Edge(graph->vertices[to], cost));
        } else {
            cerr << "Warning: Skipping invalid edge (" << from << " -> " << to << ")\n";
        }
    }

    return graph;
}