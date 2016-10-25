//
//  main.cpp
//  Jude and Miyabi
//
//  Created by Charottama Oshmar on 10/25/16.
//  Copyright © 2016 Charottama Oshmar. All rights reserved.
//

#include <iostream>
#include "SodaCan.hpp"
using namespace std;

int main(int argc, const char * argv[]) {

        string brand;
        int size;
        int contents;
    int money, choice;
    
    SodaCan can;
        cout<<"\tWelcome to Miyabi's Vending Machine!"<<endl;
        cout<<"Insert money"<<endl;
        cin>>money;
    
    while (true){
        
        cout<<"What do uyou want?"<<endl;
        cout<<"1. Buy a soda \n2. Add soda\n3.Remove soda\n 4. Quit\n5. Enter number to continue\n";
        cin>>choice;
        
        if (choice == 1){
            cout<<"Brand "<<endl;
            cin>>brand;
            can.setBrand(brand);
            cout<<"Amount "<<endl;
            cin>>contents;
            can.pourInSoda(contents);
            cout<<"Size "<<endl;
            cout<<"1. Small\n2. Medium\n3.Large\n"<<endl;
            cin>>size;
            can.setSize(size);
            
            cout<<"You bought "<<can.getBrand()<<endl;
            cout<<"Amount "<<can.getContents()<<endl;
            cout<<"Size "<<can.getSize()<<endl;
            if (size == 1)
                cout<<"Small cup";
            else if(size == 2)
                cout<<"Medium cup";
            else if(size == 3)
                cout<<"Large cup";
            
    
        SodaCan can;
        can.setBrand(brand);
        can.setSize(size);
        can.pourInSoda(contents);
        
        cout<<"Yeah its coming right up: ";
        cout<<can.getContents()<< "ounces of "<<can.getBrand()<<endl;
        cout<<
            
            
            
    return 0;
}
