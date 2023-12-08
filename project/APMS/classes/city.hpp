
#include <iostream>
#include <vector> 
#include <string> 
#include "Area.hpp" 

using namespace std;   

class City {
    string name;
    int id;
    std::vector<Area> areas;

public:
    City();
    //parameterized constructor
    City(const string&, const int&, const vector<Area>&);
    City(const City&);
    City(City&&);
    ~City();
    //getter and setter

    string getName()const;
    int getCityId()const;
    std::vector<Area> getArea()const;
    void setName(const string &name);
    void setArea(const vector<Area>& areas);
    void setCityId(const int& );

    //add area to the city
    void addArea(const Area&);
    //remove area from the city
    void removeArea(const Area&);
    void removeArea(const string&);

    //overloading < operator
    bool operator<(const City&)const; 
};

