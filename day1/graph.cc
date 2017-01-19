#include <utility>
#include "graph.h"

	int Graph::AddArc(int from, int to) {

	}

  	void Graph::AddNode(int node);

 	int Graph::NumNodes() {
		return (this.nodes.size());
 	}

  	int Graph::NumArcs() {
		return (this.arcs.size());
  	}

  // Gets the tail ("from") and head ("to") of an arc.
  int Graph::Tail(int arc) {
  	
  }
  int Graph::Head(int arc) const;

  // Returns a list of all the arc indices whose Tail is "from".
  const vector<int>& Graph::OutgoingArcs(int from) const;

  // Returns a list of all the arc indices whose Head is "to".
  const vector<int>& Graph::IncomingArcs(int to) const;
