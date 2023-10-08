#ifndef MALF_H
#define MALF_H
#include "Player.h"
using namespace std;
class Malf :public Player
{
	private:
	int x;
	int y;	
	public:
	Malf(int x,int y);
	void move(Map &map,char input);
	
};

#endif
