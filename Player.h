#ifndef PLAYER_H
#define PLAYER_H
#include "Map.h"
#include <utility>
using namespace std;



class Player
{
	protected:
    pair<int,int> position;
	int x;
    int y;
	public:
		Player(int x,int y);
		pair<int,int>getpos();
		virtual ~Player();
		virtual void move(Map& map,char input)=0;
};

#endif
