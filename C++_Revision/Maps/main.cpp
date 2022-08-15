#include <iostream>
#include <vector>

#include <map>
#include <unordered_map>


struct CityRecord
{
    std::string Name;
    uint64_t Population;
    double Latitude, Longitude;
};


int main()
{
    std::vector<CityRecord> cities;
    cities.emplace_back("Melbourne", 50000000, 2.4, 9.4);
    cities.emplace_back("Lol-town", 50000000, 2.4, 9.4);
    cities.emplace_back("Berlin", 50000000, 2.4, 9.4);
    cities.emplace_back("Paris", 50000000, 2.4, 9.4);
    cities.emplace_back("London", 50000000, 2.4, 9.4);


    for(const auto& city: cities)
    {
        if(city.Name == "Berlin")
        {
            city.Population; 
            break;
        }
    }

    std::map<std::string, CityRecord> cityMap;
    cityMap["Melbourne"] = CityRecord{"Melbourne", 50000000, 2.4, 9.4};
    cityMap["Lol-town"] = CityRecord{"Lol-town", 50000000, 2.4, 9.4};
    cityMap["Berlin"] = CityRecord{"Berlin", 50000000, 2.4, 9.4};
    cityMap["Paris"] = CityRecord{"Paris", 50000000, 2.4, 9.4};
    cityMap["London"] = CityRecord{"London", 50000000, 2.4, 9.4};

    // CityRecord& berlinData = cityMap["Berlin"];
    // std::cout<<berlinData.Population;

    // std::unordered_map<std::string, CityRecord> cityMap;
    // cityMap["Melbourne"] = CityRecord{"Melbourne", 50000000, 2.4, 9.4};
    // cityMap["Lol-town"] = CityRecord{"Lol-town", 50000000, 2.4, 9.4};
    // cityMap["Berlin"] = CityRecord{"Berlin", 50000000, 2.4, 9.4};
    // cityMap["Paris"] = CityRecord{"Paris", 50000000, 2.4, 9.4};
    // cityMap["London"] = CityRecord{"London", 50000000, 2.4, 9.4};
    
    // CityRecord& berlinData = cityMap["Berlin"];
    // std::cout<<berlinData.Population;

    for(auto values : cityMap)
    {
        std::cout<<values.first<<std::endl;
    }


    

    return 0;
}