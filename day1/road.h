#ifndef ROAD
# define ROAD
# include "base.h"

class Road
{
 public:
  Road(vector<pair<float,float>>, bool, int);
  vector<pair<float,float>>	points;
  bool				oneWay;
  int				speed;
};
#endif
