#ifndef POTER_H
#define POTER_H
#include "Player.h"

using namespace std;
class Poter:public Player
{ 
private:
	int x;
	int y;
   public:
     Poter(int x,int y);	
     
     void move(Map& map,char input);
};

#endif


