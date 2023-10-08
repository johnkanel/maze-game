#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
#include <vector>
#include <string>
#include "Map.h"
#include "Malf.h"
#include "Gem.h"
#include "Poter.h"
using namespace std;
class Engine
{
		private:
	Map map;
	Poter poter;
	Malf malf;
	Gem gem;
	public:
 Engine(string mapfile);
void run();
};
#endif
