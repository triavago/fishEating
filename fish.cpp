#include"fish.h"

using namespace std;

Fish::Fish(Coordinate position)
{
    size = generatedRandomNumber(10);
    velocity = generatedRandomNumber(3);
    coordinate = position;
}

int Fish::generatedRandomNumber(int maxValue)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, maxValue);
    return dis(gen);
}

void Fish::swim()
{
    int fishMove = generatedRandomNumber(4);
    switch (fishMove)
    {
    case UP:
        coordinate.y += velocity;
        break;
    case DOWN:
        coordinate.y -= velocity;
        break;
    case LEFT:
        coordinate.x -= velocity;
        break;
    case RIGHT:
        coordinate.x += velocity;
        break;
    default:
        break;
    }
}
