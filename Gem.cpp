#include "Gem.h"
using namespace std;
Gem::Gem(int x,int y){
	position = make_pair(x, y);
}

bool Gem::gemfound(pair<int,int> pos){
	 return (this->position==pos);
}
pair<int, int> Gem::getpos(){
	return position;
}
