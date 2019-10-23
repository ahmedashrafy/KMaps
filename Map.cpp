#include "Map.hpp"

//Input
    void Map::getInput()
    {
        cout "Please enter the expression's minterms:"
        cin>>input;
    }
    void Map::Parser (); //M
    
//Group
    void Map::Eight ();
    void Map::Four ();
    void Map::Two ();
    void Map::One ();

    void Map::Simplifier (int sum [3], int number)
    {
        for (int i =0; i<3; i++)
        {
            if (sum[i] == number)
            {
                Expression += (i+17);
            }
            else if (sum[i] == 0)
            {
                Expression+= ((i+17)+"'");
            }
        }
    }

    bool Map::Completed ()
    {
        for (int i = 0; i <2; i++)
        {
            for (int j = 0; j<4; j++)
            {
                if (!Grouped [i][j]) return false;
            }
        }
        return true;
    }
    
//Output
    void Map::Visualize (); //M
    
//Call-Functions  - DONE
    void Map::Input()
    {
        getInput();
        Parser();
    }

    void Map::Group()
    {
        !Completed() && Eight();
        !Completed() && Four();
        !Completed() && Two();
        !Completed() && One();
    };
    void Map::Output()
    {
        Visualize();
    };

//Constructor - DONE
    Map::Map()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j <4; j++)
            {
                Minterms[i][j] = 0;
                Grouped [i][j] = true;
    
                Background [i][j][0] = j/2
                Background [i][j][1] = (j==1 || j==2)? 1:0;
                Background [i][j][2] = i;
            }
        }
    }

}
