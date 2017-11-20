//
//  main.cpp
//  Project142
//
//  Created by Michael A. Gonzalez on 11/20/17.
//  Copyright © 2017 Michael A. González. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int selector=0;
    cout<<"<<--- WELCOME --->>\n";
    cout<<"Enter the # of the option you choose:\n";
    while(!selector){
        cout<<"1. TestCase1\n";
        cout<<"2. TestCase2\n";
        cout<<"3. Exit\n";
        cin>>selector;
        
        switch (selector) {
            case 1:
                cout<<"You chose 1\n";
                //Here will be the function that initiates Test Case 1
                break;
            case 2:
                cout<<"You chose 2\n";
                //Here will be the function that initiates Test Case 2
                break;
            case 3:
                cout<<"You chose to exit. Goodbye.\n";
                break;
            
            default:
                cout<<"\n\"" + to_string(selector) + "\" is not an option. Enter #1-3:\n";
                selector=0;
                break;
        }
    }
    
    return 0;
}
