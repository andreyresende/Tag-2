#include "vertex.h"
#include <iostream>
using namespace std;

int main () {

  Graph graph;
  graph.createNewGraph();
  graph.printGraph();
  int h = 0;
  Graph copyGraph = graph;
  graph.topologic();
  Vertex v;
  copyGraph.longestPath();
  return 0;
}
