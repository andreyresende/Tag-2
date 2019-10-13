#ifndef __VERTEX_H__
#define __VERTEX_H__
#include <list>
#include <string>

using namespace std;

class Vertex {
  private:
    int element;
    string name;
    int weight;

  public:
    list <Vertex> adjacents;
    void loadGraph();
    void setElement(int);
    int getElement();
    void setAdjacents(int);
    void setName(string);
    void setWeight(int);
    list <Vertex> getAdjacents();
};

class Graph {
  public:
    list <string> names;
    list <Vertex> vertexes;
    list <int> cod;
    void createNewGraph();
    void loadNames();
    void loadNamesIntoGraph();
};

#endif
