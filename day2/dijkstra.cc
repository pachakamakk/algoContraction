#include "dijkstra.h"

  Dijkstra(const Graph* graph, const vector<double>* arc_lengths)
  {
  	
  }

  const Graph& GetGraph() const 
  {

  }

  void RunUntilAllTargetsAreReached(int source, const vector<int>& targets) 
  {

  }

  // Returns the set of all nodes reached by the last run.
  const vector<int>& ReachedNodes() const
  {

  }

  // Element #i is the distance of node #i from the source, in the last run,
  // which is infinity if node #i wasn't reached.
  const vector<double>& Distances() const
  {

  }

  // Element #i is the arc that arrives at node #i in the shortest
  // path from the source, or -1 if that node wasn't reached. Also -1 if the
  // node is the source.
  const vector<int>& ParentArcs() const 
  {

  }

  // Returns the full shortest path (a sequence of arcs) from the source of
  // the last run to "node", assuming that "node" was reached.
  vector<int> ArcPathFromSourceTo(int node) const
  {

  }
