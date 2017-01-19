#ifndef ROAD
# define ROAD
# include "base.h"

Class Road
{
 public:
  Road(vector<pair<float,float>> &, bool, int);
  vector<pair<float,float>>	points;
  bool				oneWay;
  int				speed;
};
#endif
