#include <iostream>
using namespace std;

int main()
{
    int copied = 0, marks = 0;
    int d[3][4];
    int n[3][4];
    
    //DPS
    for (int r=0; r<3; r++)
    {
        for (int c=0; c<4; c++)
        {
            cout << "Enter the marks of DPS students:";
            cin >> marks;
            d[r][c]=marks;
        }
    }
    
    cout << "\nDPS\n";
    for (int r=0; r<3; r++)
    {
        for (int c=0; c<4; c++)
        {
            cout << d[r][c] << " ";
        }
        cout << "\n";
    }
    
    //NDPS
    cout << "\n";
    for (int r=0; r<3; r++)
    {
        for (int c=0; c<4; c++)
        {
            cout << "Enter the marks of NDPS students:";
            cin >> marks;
            n[r][c]=marks;
        }
    }
    
    cout << "\nNDPS\n";
        for (int r=0; r<3; r++)
    {
        for (int c=0; c<4; c++)
        {
            cout << d[r][c] << " ";
        }
        cout << "\n";
    }
    
    //Checking
    for (int r=0; r<3; r++)
    {
        for (int c=0; c<4; c++)
        {
            if (d[r][c] == n[r][c])
            {
                copied+=1;
            }
        }
    }
    
    if (copied>5)
    {
        cout << "\nCOPIED";
    }
    else
    {
        cout << "\nFAIR EXAMINATION";
    }
    

    return 0;
}
