#ifndef GEM_H
#define GEM_H
#include "Map.h"
using namespace std;
class Gem
{
	private:
		int x;
		int y;
		pair<int,int>position;
	public:
		Gem(int x,int y);
		pair<int, int> getpos() ;
		bool gemfound(pair<int,int> pos);
};

#endif
