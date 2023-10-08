#ifndef MAP_H
#define MAP_H
#include <vector>
#include <string> 
using namespace std;
class Map
{  private:
	int x;
	int y;
    vector <string> map;
	public:
   Map(string &filename);
   char getentity(int x,int y);
   void setentity(int x,int y,char symbol);
   void display();
   int getx();
   int gety();
};

#endif
