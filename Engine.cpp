#include <string>
#include<iostream>
#include "Engine.h"
#include "Poter.h"
#include <conio.h>
using namespace std;



Engine::Engine(string mapfile):map(mapfile),poter(2,3), malf(2, 5), gem(2,20) {}
	
	 
	

 void Engine::run(){
 	 char input;
    bool gameOver = false;

    
    while (!gameOver) {
        system("cls");
        map.display();

        
        if (gem.gemfound(malf.getpos())){
            std::cout << "Congratulations Malf! You found the gem!" << std::endl;
            gameOver = true;
            continue;
        }

        if (gem.gemfound(poter.getpos())){
            std::cout << "Congratulations poter! You found the gem!" << std::endl;
            gameOver = true;
            continue;
        }
        
        if (!kbhit()) {
            input = getch();
            malf.move( map,input);
        }
        system("cls");
        map.display();
        
          if (!kbhit()) {
            input = getch();
            poter.move( map,input);
        }
         
         
        
        if (malf.getpos()==poter.getpos() ){
            std::cout << "Oh no! Malfoy caught you!" << std::endl;
            gameOver = true;
        
        }
    }
 	
 }

