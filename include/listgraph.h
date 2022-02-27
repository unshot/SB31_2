#ifndef LISTGRAPH_H
#define LISTGRAPH_H
#include <string>
#include <map>
#include "igraph.h"
#include "matrixgraph.h"

class ListGraph : public IGraph{
    private:
        int vertices = 0;
        std::string type = "List";
        std::map<int, std::vector<int>> grph;

    public:
        ListGraph();
        ListGraph(IGraph *_oth);
        virtual ~ListGraph();

        std::string getType();

        void AddEdge(int from, int to); 
        int VerticesCount() const;
        void GetNextVertices(int vertex, std::vector<int> &vertices) const; 
        void GetPrevVertices(int vertex, std::vector<int> &vertices) const;
};

#endif
