#include "Poter.h"
#include <conio.h>

using namespace std;

Poter::Poter(int x,int y):Player(x,y){
	
}

void Poter::move(Map& map,char input){
int x=position.first;
int y=position.second;

    if (input == 'w' && map.getentity(x-1, y ) != '*'  ) {
    	position.first--;
        map.setentity(x-1,y,'P');
        map.setentity(x,y,'.');
	} else if (input == 's' && map.getentity(x+1, y ) != '*' ) {
        position.first++;
        map.setentity(x+1,y,'P');
        map.setentity(x,y,'.');    
	} else if (input == 'a' && map.getentity(x , y-1) != '*') {
        position.second--;
        map.setentity(x,y-1,'P');
        map.setentity(x,y,'.');
	} else if (input == 'd' && map.getentity(x , y+1) != '*') {
        position.second++;
        
        map.setentity(x,y+1,'P');
        map.setentity(x,y,'.');
    }
}
