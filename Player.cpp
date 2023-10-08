#include "Player.h"
#include <utility>
using namespace std;

Player::Player(int x,int y){
	
position = make_pair(x, y);

}

pair<int,int> Player::getpos(){
	return position;
} 

 Player::~Player(){
 	
 }

