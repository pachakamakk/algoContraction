#include "graph.h"

#include "base.h"

int Graph::AddArc(int from, int to) {
  CHECK_GE(from, 0);
  CHECK_GE(to, 0);
  AddNode(std::max(from, to));
  const int arc_index = NumArcs();
  outgoing_arcs_[from].push_back(arc_index);
  incoming_arcs_[to].push_back(arc_index);
  tail_.push_back(from);
  head_.push_back(to);
  return arc_index;
}

void Graph::AddNode(int node) {
  if (NumNodes() <= node) {
    outgoing_arcs_.resize(node + 1);
    incoming_arcs_.resize(node + 1);
  }
}

bool Graph::buildGraph(vector<Road*> roads)
{
  vector<int>::size_type roadTotal = roads.size();
  int			id = 0;
  
  for (unsigned i = 0; i != roadTotal; i++)
    {
      if (addNodeObj(roads[i]->points[0], id))
	++id;
      if (addNodeObj(roads[i]->points[roads.size()], id))
	++id;
      ++i;
    }
}

bool Graph::addNodeObj(pair<float, float> point, id)
{
  vector<int>::size_type nodeTotal = nodes.size();
  int			id = 0;

  for (unsigned i = 0; i != nodeTotal; i++)
    {
      if (nodes[i]->point == point)
	return false;
    }
  nodes.push_back(new Node(point, id));
  return true;
}
