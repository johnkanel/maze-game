#include <iostream>
#include <cstdlib>
#include <string>
#include "Engine.h"


using namespace std;

int main(int argc, char** argv) {
Engine engine("map.txt");
  engine.run();	
	return 0;
}

