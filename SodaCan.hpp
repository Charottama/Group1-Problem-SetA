//
//  SodaCan.hpp
//  Jude and Miyabi
//
//  Created by Charottama Oshmar on 10/25/16.
//  Copyright © 2016 Charottama Oshmar. All rights reserved.
//

#ifndef SodaCan_hpp
#define SodaCan_hpp

#include <iostream>

#include <string>

using namespace std;

class SodaCan{
private:
    string my_Brand;
    int my_Size;
    int my_Contents;
    
public:
    SodaCan(){
        my_Brand = "";
        my_Size = 0;
        my_Contents = 0;
    }
    SodaCan (string brand, int size, int contents){
        my_Brand = brand;
        my_Size = size;
        my_Contents = contents;
    }
    
    bool isEmpty(){
        if(my_Contents==0)
        {
            return false;
        }
        else{
            return true;
        }
    }
    void pourInSoda (int amount)
    {
        my_Contents = amount;
    }
    void drink (int amount)
    {
        my_Contents -= amount;
    }
    void setSize (int size)
    {
        my_Size = size;
    }
    int getSize (){
        return my_Size;
    }
    string getBrand(){
        return my_Brand;
    }
    void setBrand (string brand){
        my_Brand = brand;
    }
    int getContents(){
        return my_Contents;
    }
};




//#include <stdio.h>

#endif /* SodaCan_hpp */
