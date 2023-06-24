#include<iostream>
#include<vector>
#include<random>
#include<memory>
#include<algorithm>
#include<coordinate.h>

using namespace std;

class Fish
{
private:
    Coordinate coordinate;
    int size;
    int velocity;
public:
    Fish(Coordinate coordinate, int size, int velocity);
    void swim();
    void eat();
    int getSize();
    Coordinate getCoordinate();
    void weaken();
};