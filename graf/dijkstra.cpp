#include "dijkstra.h"
#include <queue>
#include <algorithm>
#include <iostream>
#include <limits>

using namespace std;

void dijkstra(Graph* graph) {
    using P = pair<int, Vertex*>;
    priority_queue<P, vector<P>, greater<P>> pq;

    Vertex* start = graph->vertices[graph->startIndex];
    start->distance = 0;
    pq.push({0, start});

    while(!pq.empty()) {
        auto [dist, current] = pq.top();
        pq.pop();

        if (dist > current->distance) continue;

        for(auto& edge: current->edges) {
            int newDist = current->distance + edge.cost;

            if(newDist < edge.target->distance) {
                edge.target->distance = newDist;
                edge.target->previous = current;
                pq.push({newDist, edge.target});
            }
        }
    }
}

vector<string> getPath(Vertex* v) {
    vector<string> path;

    while (v != nullptr) {
        path.push_back(v->name);
        v = v->previous;
    }

    reverse(path.begin(), path.end());
    return path;
}

void printResults(Graph* graph) {
    Vertex* start = graph->vertices[graph->startIndex];

    for (auto v : graph->vertices) {
        cout << start->name << "->" << v->name << ": ";

        auto path = getPath(v);

        for(size_t i = 0; i < path.size(); i++) {
            cout << path[i];
            if (i != path.size() - 1) cout << " - ";
        }

        if (v->distance == numeric_limits<int>::max()) {
            cout << ", distance: unreachable\n";
        } else {
            cout << ", distance: " << v->distance << " km\n";
        }
    }
}