#include <utility>
#include "graph.h"

int Graph::AddArc(int from, int to) {
  return (0);
}

void Graph::AddNode(int node) {
  int numNodes = this->nodes.size();
  
  if (node > numNodes)
    {
      while(numNodes < node) {
	this->nodes[numNodes] = new Node();
	numNodes++;
      }
    }
}

int Graph::NumNodes() const {
  return (this->nodes.size());
}

int Graph::NumArcs() const {
  return (this->arcs.size());
}

// Gets the tail ("from") and head ("to") of an arc->
int Graph::Tail(int arc) const {
  return (arcs.at(arc).tail);
}

int Graph::Head(int arc) const {
  return (arcs.at(arc).head);
}

// Returns a list of all the arc indices whose Tail is "from"->
const vector<int>& Graph::OutgoingArcs(int from) const{
  return (nodes.at(from)->outgoingArcs);
}

// Returns a list of all the arc indices whose Head is "to"->
const vector<int>& Graph::IncomingArcs(int to) const {
  return (nodes.at(to)->incomingArcs);
}
