

// In this graph, nodes are integers in 0..num_nodes-1, and arcs are also
// integers in 0..num_arcs-1 (in the order in which they're added)
// Thus, when you AddArc(4, 128), you implicitly declare the existence of
// at least 129 nodes (0..128).

#include <utility>
#include <map>

class Node {
 private:
  vector<std::pair<int, int>> neighbours;
 public:
  int	AddArc(int to);
};

class Graph {
 private:
  std::map<int,Node>  nodes;
  
 public:
  int AddArc(int from, int to);  // Returns the arc index.

  // Optional: nodes are automatically added upon AddArc().
  void AddNode(int node);

  int NumNodes() const;
  int NumArcs() const;

  // Gets the tail ("from") and head ("to") of an arc.
  int Tail(int arc) const;
  int Head(int arc) const;

  // Returns a list of all the arc indices whose Tail is "from".
  const vector<int>& OutgoingArcs(int from) const;

  // Returns a list of all the arc indices whose Head is "to".
  const vector<int>& IncomingArcs(int to) const;
};
