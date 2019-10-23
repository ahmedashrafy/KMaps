//
//  Map.hpp
//  K-Map
//
//  Created by Ahmed on 22/10/2019.
//  Copyright © 2019 Ahmed. All rights reserved.
//

#ifndef Map_hpp
#define Map_hpp
#include <string>
#include <stdio.h>

using namespace std; 

class Map
{
    private:
        int Minterms [2][4];
        int Background [2][4][3];
        bool Grouped [2][4];
        string input;
        string Expression;
    
        //Input
        void getInput();
        void Parser ();
    
        //Group
        void Eight ();
        void Four ();
        void Two ();
        void One ();

    
        void Simplifier (int sum, int number); 
        bool Completed ();
    
        //Output
        void Vizualize ();
    
    public:
        void Input();
        void Group();
        void Output();
    
        Map();
};

#endif /* Map_hpp */
