#include <fstream>
#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi

int main(int argc, char* argv[])
{
    std::ifstream file(argv[1]);
    std::string str; 
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


			std::cout << "lat == " << lat << " lng == " << lng << "\n";
			i++;
		}


		std::cout << str << "\n\n";
        // Process str

    }
    return 0;
}
