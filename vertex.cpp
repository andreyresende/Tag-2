#include <iostream>
#include <fstream>
#include "vertex.h"
#include <string>
#include <queue>

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

void Vertex::setName(string name) {
  this->name = name;
}

string Vertex::getName() {
  return this->name;
}

void Vertex::setWeight(int weight) {
  this->weight = weight;
}

int Vertex::getWeight() {
  return this->weight;
}

void Graph::createNewGraph() {
  Vertex vertice1;
  this->setVertex(vertice1, "Calculo_I", 113034, 6);

  Vertex vertice2;
  this->setVertex(vertice2, "Introducao_aos_Sistemas_Computacionais", 113468, 4);
  
  Vertex vertice3;
  this->setVertex(vertice3, "Algoritmos_e_Programacao_de_Computadores", 113476, 6);
  
  Vertex vertice4;
  this->setVertex(vertice4, "Informatica_e_Sociedade", 116726, 2);
  
  Vertex vertice5;
  this->setVertex(vertice5, "Fundamentos_Teoricos_da_Computacao", 113450, 4);
  
  Vertex vertice6;
  this->setVertex(vertice6, "Circuitos_Logicos", 129011, 4);
  vertice3.adjacents.push_back(vertice6);
  vertice6.aumentaGrau();

  Vertex vertice7;
  this->setVertex(vertice7, "Laboratorio_de_Circuitos_Logicos", 129020, 2);
  vertice3.adjacents.push_back(vertice7);
  vertice7.aumentaGrau();
  
  Vertex vertice8;
  this->setVertex(vertice8, "Calculo_II", 113042, 6);
  vertice1.adjacents.push_back(vertice8);
  vertice8.aumentaGrau();
  
  Vertex vertice9;
  this->setVertex(vertice9, "Introducao_a_Algebra_Linear", 113093, 4);
  
  Vertex vertice10;
  this->setVertex(vertice10, "Estrutura_de_Dados", 116319, 4);

  Vertex vertice11;
  this->setVertex(vertice11, "Organizacao_e_Arquitetura_de_Computadores", 116394, 4);
  vertice6.adjacents.push_back(vertice11);
  vertice11.aumentaGrau();
  vertice7.adjacents.push_back(vertice11);
  vertice11.aumentaGrau();
  
  Vertex vertice12;
  this->setVertex(vertice12, "Tecnicas_de_Programacao_1", 117889, 4);
  vertice10.adjacents.push_back(vertice12);
  vertice12.aumentaGrau();
  
  Vertex vertice13;
  this->setVertex(vertice13, "Algebra_1", 113107, 4);
  
  Vertex vertice14;
  this->setVertex(vertice14, "Calculo_Numerico", 113417, 4);
  vertice8.adjacents.push_back(vertice14);
  vertice14.aumentaGrau();
  
  Vertex vertice15;
  this->setVertex(vertice15, "Probabilidade_e_Estatistica", 115045, 4);
  vertice1.adjacents.push_back(vertice15);
  vertice15.aumentaGrau();
  
  Vertex vertice16;
  this->setVertex(vertice16, "Logica_Computacional_1", 117366, 4);
  vertice10.adjacents.push_back(vertice16);
  vertice16.aumentaGrau();
  
  Vertex vertice17;
  this->setVertex(vertice17, "Tecnicas_de_programacao_2", 117897, 4);
  vertice12.adjacents.push_back(vertice17);
  vertice17.aumentaGrau();
  
  Vertex vertice18;
  this->setVertex(vertice18, "Teoria_e_Aplicacao_de_Grafos", 117901, 4);
  vertice10.adjacents.push_back(vertice18);
  vertice18.aumentaGrau();
  
  Vertex vertice19;
  this->setVertex(vertice19, "Redes_de_Computadores", 116572, 4);
  vertice10.adjacents.push_back(vertice19);
  vertice19.aumentaGrau();
  
  Vertex vertice20;
  this->setVertex(vertice20, "Linguagens_de_Programacao", 116343, 4);
  vertice10.adjacents.push_back(vertice20);
  vertice20.aumentaGrau();
  
  Vertex vertice21;
  this->setVertex(vertice21, "Programacao_Concorrente", 117935, 4);
  vertice17.adjacents.push_back(vertice21);
  vertice21.aumentaGrau();
  
  Vertex vertice22;
  this->setVertex(vertice22, "Engenharia_de_Software", 116441, 4);
  vertice12.adjacents.push_back(vertice22);
  vertice22.aumentaGrau();
  
  Vertex vertice23;
  this->setVertex(vertice23, "Bancos_de_Dados", 116378, 4);
  
  Vertex vertice24;
  this->setVertex(vertice24, "Introducao_a_Inteligencia_Artificial", 116653, 4);
  vertice10.adjacents.push_back(vertice24);
  vertice24.aumentaGrau();
  
  Vertex vertice25;
  this->setVertex(vertice25, "Software_Basico", 116432, 4);
  vertice10.adjacents.push_back(vertice25);
  vertice25.aumentaGrau();
  vertice11.adjacents.push_back(vertice25);
  vertice25.aumentaGrau();
  
  Vertex vertice26;
  this->setVertex(vertice26, "Fundamentos_de_Sistemas_Operacionais", 117960, 4);
  vertice21.adjacents.push_back(vertice26);
  vertice26.aumentaGrau();
  
  Vertex vertice27;
  this->setVertex(vertice27, "Automatos_e_Computabilidade", 116882, 6);
  vertice13.adjacents.push_back(vertice27);
  vertice27.aumentaGrau();
  
  Vertex vertice28;
  this->setVertex(vertice28, "Sistemas_de_Informacao", 116416, 4);
  vertice10.adjacents.push_back(vertice28);
  vertice28.aumentaGrau();
  
  Vertex vertice29;
  this->setVertex(vertice29, "Computacao_Experimental", 117943, 4);
  vertice10.adjacents.push_back(vertice29);
  vertice29.aumentaGrau();
  vertice15.adjacents.push_back(vertice29);
  vertice29.aumentaGrau();
  
  Vertex vertice30;
  this->setVertex(vertice30, "Projeto_e_Analise_de_Algoritmos", 117536, 4);
  vertice1.adjacents.push_back(vertice30);
  vertice30.aumentaGrau();
  vertice10.adjacents.push_back(vertice30);
  vertice30.aumentaGrau();
  
  Vertex vertice31;
  this->setVertex(vertice31, "Compiladores", 117951, 4);
  vertice20.adjacents.push_back(vertice31);
  vertice31.aumentaGrau();
  vertice25.adjacents.push_back(vertice31);
  vertice31.aumentaGrau();
  vertice27.adjacents.push_back(vertice31);
  vertice31.aumentaGrau();
  
  
  Vertex vertice32;
  this->setVertex(vertice32, "Seguranca_Computacional", 117927, 4);
  vertice19.adjacents.push_back(vertice32);
  vertice32.aumentaGrau();
  
  
  Vertex vertice33;
  this->setVertex(vertice33,"Metodologia_Cientifica", 117919, 2);
  
  Vertex vertice34;
  this->setVertex(vertice34, "Topicos_Avancados_em_Computadores", 116297, 4);
  
  vertexes.push_back(vertice1);
  vertexes.push_back(vertice2);
  vertexes.push_back(vertice3);
  vertexes.push_back(vertice4);
  vertexes.push_back(vertice5);
  vertexes.push_back(vertice6);
  vertexes.push_back(vertice7);
  vertexes.push_back(vertice8);
  vertexes.push_back(vertice9);
  vertexes.push_back(vertice10);
  vertexes.push_back(vertice11);
  vertexes.push_back(vertice12);
  vertexes.push_back(vertice13);
  vertexes.push_back(vertice14);
  vertexes.push_back(vertice15);
  vertexes.push_back(vertice16);
  vertexes.push_back(vertice17);
  vertexes.push_back(vertice18);
  vertexes.push_back(vertice19);
  vertexes.push_back(vertice20);
  vertexes.push_back(vertice21);
  vertexes.push_back(vertice22);
  vertexes.push_back(vertice23);
  vertexes.push_back(vertice24);
  vertexes.push_back(vertice25);
  vertexes.push_back(vertice26);
  vertexes.push_back(vertice27);
  vertexes.push_back(vertice28);
  vertexes.push_back(vertice29);
  vertexes.push_back(vertice30);
  vertexes.push_back(vertice31);
  vertexes.push_back(vertice32);
  vertexes.push_back(vertice33);
  vertexes.push_back(vertice34);
}

void Graph::topologic(){
  ofstream file;
  file.open("topologic_order.dot");
  file << "digraph G {\n label = \"Ordenação Topológica do Curso Ciência da Computação - 2019.2\"\n node [shape=circle]\n";

  file << "subgraph { rank = same; ";

  for (auto & i : this->vertexes) {
    file << i.getElement() << ";";
  }
  file << "\n}";

  queue<Vertex> fila;
  int contador = 0;
  int visitados = 0;
  for(auto & i : this->vertexes){
    if(i.getGrau() == 0){
      fila.push(i);
      file << i.getElement() << ";\n";

    }
    //cout << i.getElement() << ": " << i.getName() << " " << i.getGrau() << " Pre-requisitos" << endl;
  }
  while(fila.size() > 0){//Pra cada elemento da fila
  Vertex vertice = fila.front();//Salvo o vertice
    fila.pop();//Removo da fila
    visitados++;//Incremento visitados
    //cout << "Vertice: " << vertice.getName();
    //cout << " |Vizinhos de vertice: " << vertice.adjacents.size() << endl;

    for(auto & i : vertice.adjacents){//Ai, pra cada vizinho de vertice
    //cout << contador << endl;
      for(auto & j : this->vertexes){//Procuro na lista de vertices do grafo, quais equivalem aos adjacentes
        if(j.getElement() == i.getElement()){//Quando acho
          //cout << "Iterador i = " << i.getName()  << " Grau do vertice: " << i.getGrau()<< endl;
          j.diminuiGrau();//Decremento em 1 o grau

          file << vertice.getElement() << " -> " << j.getElement() << " [label=\"" << vertice.getWeight() << "\"]" << ";\n";
          //cout << vertice.getName() << " -> " << j.getName() << endl;
          if(j.getGrau() == 0){
            fila.push(j);
            //cout << "Push: "<< j.getName() << endl;
          }
        }
      }
    }
    contador++;
  }
  cout << "Visitados = " << visitados << endl;
  if(visitados != 34){
    cout << "Numero de vertices visitados diferente do numero de vertices do grafo, ordenacao topologica nao e possivel" << endl;
  }
  file << "\n}";
}

void Vertex::diminuiGrau(){
  this->grauEntrada--;
}

void Graph::setVertex(Vertex &vertice, string nome, int codigo, int creditos){
  vertice.setName(nome);
  vertice.setElement(codigo);
  vertice.setWeight(creditos);
}

int Vertex::getGrau(){
  return this->grauEntrada;
}

void Vertex::aumentaGrau(){
  this->grauEntrada++;
}

void Graph::printGraph() {
  ofstream file;
  file.open("graph.dot");
  file << "digraph G {\n label = \"Dígrafo Curso Ciência da Computação - 2019.2\" \nnode [shape=circle]\n";
  
  for (auto & i : this->vertexes){
    if(i.adjacents.size() == 0){
      file << i.getElement() << ";\n";
    }
    else {
      for(auto & j : i.adjacents) {
        file << i.getElement() << " -> " << j.getElement() << " [label=\"" << j.getWeight() << "\"]" << ";\n";
      }
    }    
  }

  file << "\n}";
}

void Graph::longestPath() {
  queue<Vertex> fila;
  cout << endl << endl << endl << endl;
  for (auto & i : this->vertexes) {
    if (i.getGrau() == 0) {
      if (i.adjacents.size() != 0) {
        cout << i.getElement() << " tem " << i.adjacents.size() <<" vizinhos" << endl; 
        fila.push(i);
      }
    }
  }
  cout << endl << endl << endl << endl;
  while (fila.size() > 0) {
    Vertex vertice = fila.front();
    fila.pop();

    for (auto & i : vertice.adjacents) {
      for(auto & j : this->vertexes){
        if(j.getElement() == i.getElement()){
          if(j.adjacents.size() != 0) {
            cout << j.getElement() << " tem " << j.adjacents.size() << " vizinhos" << endl;
            cout << "Com peso: " << j.adjacents.front().getWeight() << endl; 
            fila.push(j);
          }

        }
      }
    }
  }
  cout << "Teste: " << fila.size() << endl;
}