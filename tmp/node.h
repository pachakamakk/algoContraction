#ifndef NODE
# define NODE
# include "base.h"

class Node
{
 public:
  Node(pair<float,float> &, int);
  pair<float, float>	point;
  int			id;
};

#endif
