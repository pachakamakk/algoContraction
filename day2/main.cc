#include <fstream>
#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi
#include <utility>     // std::string, std::stoi
#include "base.h"
#include "dijkstra.h"
#include "graph.h"
#include "parse_csv.h"

int main(int argc, char* argv[])
{
	vector<Road> roads;
	RoadNetwork network;
	int		i;
	double	total_arcs_duration;

    if (argc != 2)
    {
    	std::cerr << "Arguments number should be 1." << std::endl;
    	return -1;
    }
    roads = ParseRoadCsv(argv[1]);
    network = ConvertRoadDataToGraph(roads);
    total_arcs_duration = 0;
    for (i = 0; i != network.graph.NumArcs(); i++)
    	total_arcs_duration = total_arcs_duration + network.arc_durations[i];
    std::cout << network.graph.NumNodes() << " nodes" << std::endl;
    std::cout << network.graph.NumArcs() << " arcs" << std::endl;
    printf("%.6lf seconds\n", total_arcs_duration);
    return 0;
}
