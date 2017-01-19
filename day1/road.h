#ifndef ROAD
# define ROAD
# include "base.h"

Class Road
{
 public:
  Road(vector<pair<int,int>> &, bool, int);
  vector<pair<int, int>>	points;
  bool				oneWay;
  int				speed;
};
#endif
