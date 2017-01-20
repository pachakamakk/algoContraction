#include "dijkstra.h"

Dijkstra::Dijkstra(const Graph* graph, const vector<double>* arc_lengths)
  {
  	
  }

const Graph& Dijkstra::GetGraph() const 
{

}

void Dijkstra::RunUntilAllTargetsAreReached(int source, const vector<int>& targets) 
{

}

// Returns the set of all nodes reached by the last run.
const vector<int>& Dijkstra::ReachedNodes() const
{

}

// Element #i is the distance of node #i from the source, in the last run,
// which is infinity if node #i wasn't reached.
const vector<double>& Dijkstra::Distances() const
{

}

// Element #i is the arc that arrives at node #i in the shortest
// path from the source, or -1 if that node wasn't reached. Also -1 if the
// node is the source.
const vector<int>& Dijkstra::ParentArcs() const 
{

}

// Returns the full shortest path (a sequence of arcs) from the source of
// the last run to "node", assuming that "node" was reached.
vector<int> Dijkstra::ArcPathFromSourceTo(int node) const
{

}
