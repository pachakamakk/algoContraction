#include <fstream>
#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi
#include <utility>     // std::string, std::stoi
#include "road.h"
#include "graph.h"

int main(int argc, char* argv[])
{
	
	vector<Road*> roads;

    std::ifstream file(argv[1]);
    std::string str;
    Graph graph;

    while (std::getline(file, str))
    {
    	std::string delimiter = ",";
    	std::string tmp;

		// name
		std::string name = str.substr(0, str.find(delimiter));
		str.erase(str.begin(), str.begin() + name.size() + 1);

		// skip priority
		tmp = str.substr(0, str.find(delimiter));
		str.erase(str.begin(), str.begin() + tmp.size() + 1);

		// speed 
		std::string speedString = str.substr(0, str.find(delimiter));
		int speed = std::stoi(speedString, nullptr, 10);
		str.erase(str.begin(), str.begin() + speedString.size() + 1);

		// skip num_lanes
		tmp = str.substr(0, str.find(delimiter));
		str.erase(str.begin(), str.begin() + tmp.size() + 1);

		// one_way
		std::string onewayString = str.substr(0, str.find(delimiter));
		bool oneway = (onewayString == "0");
		str.erase(str.begin(), str.begin() + onewayString.size() + 1);

		// numPoints
		std::string numPointsString = str.substr(0, str.find(delimiter));
		int numPoints = std::stoi(numPointsString, nullptr, 10);
		str.erase(str.begin(), str.begin() + numPointsString.size() + 1);

		int i = 0;
		std::cout << name << " " << speed << " " << oneway << " " << numPoints << "\n";

	  	vector<pair<float,float>>	points;
		int				idNode = 0;
		map<pair<float,float>,int>::iterator it;
		while (i < numPoints)
		{
			// lat
			std::string latString = str.substr(0, str.find(delimiter));
			float lat = std::stof(latString);
			str.erase(str.begin(), str.begin() + latString.size() + 1);
			std::cout << "lat == " << lat << "\n";
			// lng

			std::cout << "search == " << str.find(",") << "\n";

			std::string lngString;
			if (str.find(",") == std::string::npos)
				lngString = str;
			else
			{
				lngString = str.substr(0, str.find(delimiter));				
				str.erase(str.begin(), str.begin() + lngString.size() + 1);				
			}
			float lng = std::stof(lngString);

			pair<float, float> point;
			point.first = lat;
			point.second = lng;
			points.push_back(point);
			std::cout << "lol1\n";
			it = graph.bufferCoord.find(point);
			if ((i == 0 || i == numPoints - 1) && (it == graph.bufferCoord.end() || it->second == -1))
			  {
			    std::cout << "lol1é\n";
			    it->second = idNode;
			    std::cout << "Data: " << point.first << " and " << point.second << " and " << idNode << "\n";
			    graph.nodes.push_back(new Node(point, idNode));
			    std::cout << "lol1é OK\n";

			    ++idNode;
			  }
			else
			  {
			    std::cout << "lol2\n";
			    if (it ==  graph.bufferCoord.end())
			      graph.bufferCoord.insert(pair<pair<float,float>, int>(point, -1));
			    else if (it->second == -1)
			      {
				std::cout << "lol3\n";
				it->second = idNode;
				graph.nodes.push_back(new Node(point, idNode));
				++idNode;
			      }
			    std::cout << "lol4\n";
			  }
			std::cout << "lat == " << lat << " lng == " << lng << "\n";
			i++;
		}

	roads.push_back(new Road(points, oneway, speed));
	// roads.add()


		std::cout << str << "\n\n";
        // Process str

    }
    return 0;
}
