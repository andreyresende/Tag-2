#include <iostream>
#include <fstream>
#include "vertex.h"

using namespace std;

void Vertex::loadGraph() {

  /* string line;
  ifstream myfile ("materias.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file"; */
}

void Vertex::setElement(int number) {
  this->element = number;
}

int Vertex::getElement() {
  return this->element;
}

void Vertex::setAdjacents(int number) {
  Vertex vertex;
  vertex.setElement(number);
  this->adjacents.push_back(vertex);
}

void Graph::createNewGraph() {
  FILE *materias;
  int id, vertexId;
  bool naoencontrado = false;

  char file[] = "materias.txt";
  materias = fopen(file, "r");

  if (materias == NULL) {
      cout << "Erro ao abrir Arquivo" << endl;
  }
  while (fscanf(materias, "%d %d", &id, &vertexId) != EOF) {
    Vertex vertex;
    vertex.setElement(vertexId);
    naoencontrado = false;

    if (this->vertexes.size() == 0) {
      //cout << "Vem de: " << vertexId << " Vai para: " << id << endl;
      if (id == 0)
        this->vertexes.push_back(vertex);
      else {
        vertex.setAdjacents(id);
        this->vertexes.push_back(vertex);
      }
    }
    else {
      for (auto & i : this->vertexes){
        if (vertexId == i.getElement()) {
          i.setAdjacents(id);
          naoencontrado = true;
        }
      }
      if (!naoencontrado) {
        vertex.setAdjacents(id);
        this->vertexes.push_back(vertex);
      }
    }
  }
  for (auto & i : this->vertexes){
    if(i.getElement() == 0)
      cout << "Materias sem Pre-requisito: " << endl;
    else
      cout << "Elemento: " << i.getElement() << endl;
    for(auto & j : i.adjacents) {
      cout << j.getElement() << ' ';
    }
    cout << endl;
  }
}
