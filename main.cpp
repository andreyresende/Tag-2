#include "vertex.h"
#include <iostream>
using namespace std;

int DFS(Graph grafo, int h, Vertex vertex) {
  /* for (auto & i : grafo.vertexes) {
    if(i.adjacents.size() == 0) {
      return 0;
    }
    else {
      for (auto & j : i.adjacents) {

      }
    }

  } */
}


int main () {

  Graph graph;
  graph.createNewGraph();
  graph.printGraph();
  graph.topologic();
  int h = 0;
  Graph copyGraph = graph;
  Vertex v;
  DFS(copyGraph, h, v);

  return 0;
}
