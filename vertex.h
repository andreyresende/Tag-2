#ifndef __VERTEX_H__
#define __VERTEX_H__
#include <list>

using namespace std;

class Vertex {
  private:
    int element;
  public:
    list <Vertex> adjacents;
    void loadGraph();
    void setElement(int);
    int getElement();
    void setAdjacents(int);
    list <Vertex> getAdjacents();
};

class Graph {
  public:
    list <Vertex> vertexes;
    void createNewGraph();
};

#endif
