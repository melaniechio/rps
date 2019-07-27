//
//  main.cpp
//  rps
//
//  Created by Melanie Chio on 7/27/19.
//  Copyright © 2019 Melanie Chio. All rights reserved.
//
#include <iostream>
#include <random>
#include <string.h>

int main(int argc, const char * argv[]) {
    std::random_device rd;
    std::string options[] = {"rock", "paper", "scissors"};
    std::string computer;
    
    std::string player;
    std::cout << "welcome to rock, paper scissors! \n\nin this game, you will be playing against a computer.\nthis will be played best out of 3!" << std::endl;
    
    int counter = 0;
    int win = 0;
    int lose = 0;

    while(counter < 3){
        
        std::cout << "what will you play?" << std::endl;
        std::cin >> player;
        
        computer = options[rd()%3];
        
        std::cout << "computer plays " << computer << std::endl;
        
        if(player.compare(computer) == 0){
            std::cout << "its a tie!\n"<< std::endl;
        }
        else if (player.compare("rock") == 0){
            if(computer.compare("paper") == 0){
                std::cout << "computer wins! " << computer << " covers " << player << "\n" <<std::endl;
                lose++;
            }
            else{
                std::cout << "you win! " << player << " crushes " << computer << "\n" <<std::endl;
                win++;
            }
            counter++;
        }
        else if (player.compare("scissors") == 0){
            if(computer.compare("paper") == 0){
                std::cout << "you win! " << player << " cuts " << computer << "\n" <<std::endl;
                win++;
            }
            else{
                std::cout << "computer wins! " << computer << " crushes " << player << "\n" <<std::endl;
                lose++;
            }
            counter++;
        }
        else if (player.compare("paper") == 0){
            if(computer.compare("rock") == 0){
                std::cout << "you win! " << player << " covers " << computer << "\n" <<std::endl;
                win++;
            }
            else{
                std::cout << "computer wins! " << computer << " cuts " << player << "\n" <<std::endl;
                lose++;
            }
            counter++;
        }
        else {
            std::cout << "try again! invalid input." << "\n" <<std::endl;
        }
    }
    if(win > lose){
        std::cout << "\nyou win! final score: " << win << " to " << lose << "." << std::endl;
    }
    else if (lose > win){
        std::cout << "\nyou lose! final score: " << lose << " to " << win << "." << std::endl;
    }
    else{
        std::cout << "\nits a tie!" << std::endl;
    }
    std::cout << "\nthanks for playing!" << std::endl;
}
