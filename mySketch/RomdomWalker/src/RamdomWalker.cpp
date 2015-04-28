//
//  RamdomWalker.cpp
//  RomdomWalker
//
//  Created by 尾中彩美 on 2015/04/28.
//
//

#include "RamdomWalker.h"

RandomWalker::RandomWalker(){
    position.x = ofGetWidth() / 2.0;
    position.y = ofGetHeight() / 2.0;
    
    for(int i= 0; i < 10; i++){
        position.x += ofRandom(-1,1);
        position.y += ofRandom(-2, 1);
        if (position.x < 0){
            position.x = ofGetWidth();
        }
        if (position.x > ofGetWidth()){
            position.x = 0;
        }
        if (position.y < 0){
            position.y = ofGetHeight();
            
        }
        if(position.y > ofGetHeight()){
            position.y = 0;
        }


}

    
    void Ramdomwalker::setup(){
        for(int i= 0; i < 10; i++){
            position.x += ofRandom(-1,1);
            position.y += ofRandom(-2, 1);
            if (position.x < 0){
                position.x = ofGetWidth();
            }
            if (position.x > ofGetWidth()){
                position.x = 0;
            }
            if (position.y < 0){
                position.y = ofGetHeight();
                
            }
            if(position.y > ofGetHeight()){
                position.y = 0;
            }

    }
    
void RandomWalker::draw(){
    for(int i= 0; i < 10; i++){
        position.x += ofRandom(-1,1);
        position.y += ofRandom(-2, 1);
        if (position.x < 0){
            position.x = ofGetWidth();
        }
        if (position.x > ofGetWidth()){
            position.x = 0;
        }
        if (position.y < 0){
            position.y = ofGetHeight();
            
        }
        if(position.y > ofGetHeight()){
            position.y = 0;
        }
    }
    
    

    
}