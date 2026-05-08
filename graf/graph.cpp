#include "graph.h"
#include <limits>

Edge::Edge(Vertex* t, int c) : target(t), cost(c) {}

Vertex::Vertex(std::string n) {
    name = n;
    distance = std::numeric_limits<int>::max();
    previous = nullptr;
}

Graph::~Graph() {
    for (auto v : vertices){
        delete v;
    }
}