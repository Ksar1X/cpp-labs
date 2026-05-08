#pragma once
#include <string>
#include <vector>

class Vertex;

class Edge {
public:
    Vertex* target;
    int cost;

    Edge(Vertex* t, int c);
};

class Vertex {
public:
    std::string name;
    std::vector<Edge> edges;
    int distance;
    Vertex* previous;

    Vertex(std::string n);
};

class Graph {
public: 
    std::vector<Vertex*> vertices;
    int startIndex;

    ~Graph();
};