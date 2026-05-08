#pragma once
#include "graph.h"
#include <vector>
#include <string>

void dijkstra(Graph* graph);
std::vector<std::string> getPath(Vertex* v);
void printResults(Graph* graph);