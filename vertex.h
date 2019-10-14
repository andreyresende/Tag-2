#ifndef __VERTEX_H__
#define __VERTEX_H__
#include <list>
#include <string>
#include <queue>
using namespace std;

class Vertex {
  private:
    int element;
    string name;
    int weight;
    int grauEntrada;

  public:
    Vertex(){
      grauEntrada = 0;
    }
    list <Vertex> adjacents;
    void loadGraph();
    void setElement(int);
    int getElement();
    void setAdjacents(int);
    void setName(string);
    string getName();
    void setWeight(int);
    int getWeight();
    list <Vertex> getAdjacents();
    void aumentaGrau();
    void diminuiGrau();
    int getGrau();
};

class Graph {
  public:
    list <string> names;
    list <Vertex> vertexes;
    list <int> cod;
    void createNewGraph();
    void printGraph();
    void topologic();
    void setVertex(Vertex &vertice, string, int, int);
    void longestPath();
};

#endif
