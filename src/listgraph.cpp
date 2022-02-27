#include <iostream>
#include "listgraph.h"

ListGraph::ListGraph(){}

ListGraph::ListGraph(IGraph *_oth){
        if(_oth->getType() == "Matrix"){
            std::cout << "Matrix in List" << "\n";
        }else if(_oth->getType() == "List"){
                std::cout << "List in List" << "\n";                                                        }
}

ListGraph::~ListGraph(){}

std::string ListGraph::getType() {return type;}

void ListGraph::AddEdge(int from, int to) {}

int ListGraph::VerticesCount() const {return 0;}

void ListGraph::GetNextVertices(int vertex, std::vector<int> &vertices) const {}

void ListGraph::GetPrevVertices(int vertex, std::vector<int> &vertices) const {}
