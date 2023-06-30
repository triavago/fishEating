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
    int generatedRandomNumber(int maxValue);
    enum Direction {IDLE ,UP, DOWN, LEFT, RIGHT};
public:
    Fish(Coordinate position);
    void swim();
    void eat();
    int getSize();
    Coordinate getCoordinate();
    int getVelocity();
    void weaken();
};