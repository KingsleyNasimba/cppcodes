#include <iostream>

using namespace std;

class Entity
{
public:
     float X, Y;

     void Move(float W, float Z)
     {
        X = X + W;
        Y = Y + Z;
     }
};

class Player  :  public Entity
{
public:
    const char* Name; 
    
     void PrintName()
     {
        cout << Name << endl;
     }   
};

int main()

{
    cout << sizeof(Player) << endl;
    Player player;
    player.Move(5, 5);
    player.X = 2;

    cin.get();

    return 0;
}