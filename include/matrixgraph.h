#ifndef MATRIXGRAPH_H
#define MATRIXGRAPH_H
#include <string>
#include "igraph.h"
#include "listgraph.h"

class MatrixGraph : public IGraph{
    private:
        std::string type = "Matrix";
        std::vector<std::vector<int>> grph;

    public:
        MatrixGraph();
        MatrixGraph(IGraph *_oth);
        virtual ~MatrixGraph();

        std::string getType();
        void AddEdge(int from, int to);
        int VerticesCount() const;
        void GetNextVertices(int vertex, std::vector<int> &vertices) const;
        void GetPrevVertices(int vertex, std::vector<int> &vertices) const;
};

#endif
