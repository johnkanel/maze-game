#include "Map.h"
#include <fstream>
#include <iostream>
using namespace std;
Map::Map(string &filename){
	ifstream file(filename.c_str());
	if(!file){
	
	cout<<"error to open the file"<<endl;
	return ;
}
string line ;
while(getline(file,line)){
	map.push_back(line);



}
}
char Map::getentity(int x,int y){
	if (x >= 0 && x < map.size() && y >= 0 && y < map[0].size()) {
        return map[x][y];
    }
    return '*';
	
}
int Map::getx(){
	return x;
}
int Map::gety(){
	return y;
}
void Map::display(){
	for(int i=0;i<map.size();i++)
	    cout<<map[i]<<endl;
}	
void Map::setentity(int x,int y,char symbol){
	map[x][y]=symbol;
}
