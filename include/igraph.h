#ifndef IGRAPH_H
#define IGRAPH_H
#include <vector>

class IGraph{
    public:
        virtual ~IGraph(){}
        IGraph() {};

        IGraph(IGraph *_oth){};
        virtual std::string getType() = 0;
        virtual void AddEdge (int from, int to) = 0;
        virtual int VerticesCount() const = 0;

        virtual void GetNextVertices(int vertex, std::vector<int> &vertices) const = 0;
        virtual void GetPrevVertices(int vertex, std::vector<int> &vertices) const = 0; 
};


#endif
