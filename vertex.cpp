#include <iostream>
#include <fstream>
#include "vertex.h"
#include <string>

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

void Vertex::setWeight(int weight) {
  this->weight = weight;
}

void Graph::createNewGraph() {
  Vertex vertice1;
  vertice1.setName("Calculo I");
  vertice1.setElement(113034);
  vertice1.setWeight(6);
  
  
  Vertex vertice2;
  vertice2.setName("Introducao aos Sistemas Computacionais");
  vertice2.setElement(113468);
  vertice2.setWeight(4);
  
  
  Vertex vertice3;
  vertice3.setName("Algoritmos e Programacao de Computadores");
  vertice3.setElement(113476);
  vertice3.setWeight(6);
  
  
  Vertex vertice4;
  vertice4.setName("Informatica e Sociedade");
  vertice4.setElement(116726);
  vertice4.setWeight(2);
  
  
  Vertex vertice5;
  vertice5.setName("Fundamentos Teoricos da Computacao");
  vertice5.setElement(113450);
  vertice5.setWeight(4);
  
  
  Vertex vertice6;
  vertice6.setName("Circuitos Logicos");
  vertice6.setElement(129011);
  vertice6.setWeight(4);
  vertice3.adjacents.push_back(vertice6);

  
  Vertex vertice7;
  vertice7.setName("Laboratorio de Circuitos Logicos");
  vertice7.setElement(129020);
  vertice7.setWeight(2);
  vertice3.adjacents.push_back(vertice7);
  
  
  Vertex vertice8;
  vertice8.setName("Calculo II");
  vertice8.setElement(113042);
  vertice8.setWeight(6);
  vertice1.adjacents.push_back(vertice8);
  
  
  Vertex vertice9;
  vertice9.setName("Introducao a Algebra Linear");
  vertice9.setElement(113093);
  vertice9.setWeight(4);
  
  
  Vertex vertice10;
  vertice10.setName("Estrutura de Dados");
  vertice10.setElement(116319);
  vertice10.setWeight(4);
  
  
  Vertex vertice11;
  vertice11.setName("Organizacao e Arquitetura de Computadores");
  vertice11.setElement(116394);
  vertice11.setWeight(4);
  vertice6.adjacents.push_back(vertice11);
  vertice7.adjacents.push_back(vertice11);
  
  
  Vertex vertice12;
  vertice12.setName("Tecnicas de Programacao 1");
  vertice12.setElement(117889);
  vertice12.setWeight(4);
  vertice10.adjacents.push_back(vertice12);
  
  
  Vertex vertice13;
  vertice13.setName("Algebra 1");
  vertice13.setElement(113107);
  vertice13.setWeight(4);
  
  
  Vertex vertice14;
  vertice14.setName("Calculo Numerico");
  vertice14.setElement(113417);
  vertice14.setWeight(4);
  vertice8.adjacents.push_back(vertice14);
  
  Vertex vertice15;
  vertice15.setName("Probabilidade e Estatistica");
  vertice15.setElement(115045);
  vertice15.setWeight(4);
  vertice1.adjacents.push_back(vertice15);
  
  
  Vertex vertice16;
  vertice16.setName("Logica Computacional 1");
  vertice16.setElement(117366);
  vertice16.setWeight(4);
  vertice10.adjacents.push_back(vertice16);
  
  
  Vertex vertice17;
  vertice17.setName("Tecnicas de Programacao 2");
  vertice17.setElement(117897);
  vertice17.setWeight(4);
  vertice12.adjacents.push_back(vertice17);
  
  
  Vertex vertice18;
  vertice18.setName("Teoria e Aplicacao de Grafos");
  vertice18.setElement(117901);
  vertice18.setWeight(4);
  vertice10.adjacents.push_back(vertice18);
  
  
  Vertex vertice19;
  vertice19.setName("Redes de Computadores");
  vertice19.setElement(116572);
  vertice19.setWeight(4);
  vertice10.adjacents.push_back(vertice19);
  
  
  Vertex vertice20;
  vertice20.setName("Linguagens de Programacao");
  vertice20.setElement(116343);
  vertice20.setWeight(4);
  vertice10.adjacents.push_back(vertice20);
  
  
  Vertex vertice21;
  vertice21.setName("Programacao Concorrente");
  vertice21.setElement(117935);
  vertice21.setWeight(4);
  vertice17.adjacents.push_back(vertice21);
  
  
  
  Vertex vertice22;
  vertice22.setName("Engenharia de Software");
  vertice22.setElement(116441);
  vertice22.setWeight(4);
  vertice12.adjacents.push_back(vertice22);
  
  
  Vertex vertice23;
  vertice23.setName("Bancos de Dados");
  vertice23.setElement(116378);
  vertice23.setWeight(4);
  
  
  Vertex vertice24;
  vertice24.setName("Introducao a Inteligencia Artificial");
  vertice24.setElement(116653);
  vertice24.setWeight(4);
  vertice10.adjacents.push_back(vertice24);
  
  
  Vertex vertice25;
  vertice25.setName("Software Basico");
  vertice25.setElement(116432);
  vertice25.setWeight(4);
  vertice10.adjacents.push_back(vertice25);
  vertice11.adjacents.push_back(vertice25);
  
  
  Vertex vertice26;
  vertice26.setName("Fundamentos de Sistemas Operacionais");
  vertice26.setElement(117960);
  vertice26.setWeight(4);
  vertice21.adjacents.push_back(vertice26);
  
  
  Vertex vertice27;
  vertice27.setName("Automatos e Computabilidade");
  vertice27.setElement(116882);
  vertice27.setWeight(6);
  vertice13.adjacents.push_back(vertice27);
  
  
  Vertex vertice28;
  vertice28.setName("Sistemas de Informacao");
  vertice28.setElement(116416);
  vertice28.setWeight(4);
  vertice10.adjacents.push_back(vertice28);
  
  
  Vertex vertice29;
  vertice29.setName("Computacao Experimental");
  vertice29.setElement(117943);
  vertice29.setWeight(4);
  vertice10.adjacents.push_back(vertice29);
  vertice15.adjacents.push_back(vertice29);
  
  
  Vertex vertice30;
  vertice30.setName("Projeto e Analise de Algoritmos");
  vertice30.setElement(117536);
  vertice30.setWeight(4);
  vertice1.adjacents.push_back(vertice30);
  vertice10.adjacents.push_back(vertice30);
  
  
  Vertex vertice31;
  vertice31.setName("Compiladores");
  vertice31.setElement(117951);
  vertice31.setWeight(4);
  vertice20.adjacents.push_back(vertice31);
  vertice25.adjacents.push_back(vertice31);
  vertice27.adjacents.push_back(vertice31);
  
  
  Vertex vertice32;
  vertice32.setName("Seguranca Computacional");
  vertice32.setElement(117927);
  vertice32.setWeight(4);
  vertice19.adjacents.push_back(vertice32);
  
  
  Vertex vertice33;
  vertice33.setName("Metodologia Cientifica");
  vertice33.setElement(117919);
  vertice33.setWeight(2);
  
  
  Vertex vertice34;
  vertice34.setName("Topicos Avancados em Computadores");
  vertice34.setElement(116297);
  vertice34.setWeight(4);
  
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

  for (auto & i : this->vertexes) {
      cout << "Elemento: " << i.getElement() << endl;
    for(auto & j : i.adjacents) {
      cout << j.getElement() << ' ';
    }
    cout << endl;
  }

  /* 
  FILE *materias;
  FILE *inicial;
  FILE *names;
  string nome;
  int id, idAdj, idInicial;
  bool naoencontrado = false;

  char arquivo[] = "inicial.txt";
  inicial = fopen(arquivo, "r");
  char file[] = "materias.txt";
  materias = fopen(file, "r");

  names = fopen("Names.txt", "r");

  if (materias == NULL) {
      cout << "Erro ao abrir Arquivo" << endl;
  }
  for (int i = 0; i < 33; i++){//Cria o grafo com todas as disciplinas, setando seus ID's
    Vertex vertice;
    fscanf(inicial, "%d", &idInicial);
    vertice.setElement(idInicial);//Seta o ID
    for(auto & i : this->names) {
      nome
    } 
    vertice.setName(nome);//Seta o nome
    cout << "Teste, Element = " << idInicial << ", Nome = " << nome << endl;
    this->vertexes.push_back(vertice);
  }
  fclose(names);
  while (fscanf(materias, "%d %d", &id, &idAdj) != EOF) {
    Vertex vertex;
    vertex.setElement(idAdj);//Analisando a partir do adjacente
    naoencontrado = false;

    if (this->vertexes.size() == 0) {
      if (idAdj == 0){
        Vertex vertex2;
        vertex2.setElement(id);
        this->vertexes.push_back(vertex2);
      }
      else {
        vertex.setAdjacents(id);
        this->vertexes.push_back(vertex);
      }
    }
    else {
      if (idAdj == 0){
        Vertex vertex2;
        vertex2.setElement(id);
        this->vertexes.push_back(vertex2);
      }
      else {
        for (auto & i : this->vertexes){
          if (idAdj == i.getElement()) {
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
  }
  for (auto & i : this->vertexes) {
      cout << "Elemento: " << i.getElement() << endl;
    for(auto & j : i.adjacents) {
      cout << j.getElement() << ' ';
    }
    cout << endl;
  }
  fclose(inicial);
  fclose(materias);
 */
}

void Graph::loadNamesIntoGraph() {
  for (auto & i : this->vertexes) {
    for (auto & j : this->names) {

    }
  }
}