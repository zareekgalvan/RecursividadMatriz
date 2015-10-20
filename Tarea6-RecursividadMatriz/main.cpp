//
//  main.cpp
//  Tarea6-RecursividadMatriz
//
//  Created by Zareek Galvan on 8/27/15.
//  Copyright (c) 2015 Trisquel Labs. All rights reserved.
//

#include <iostream>
using namespace std;

//=======================================================================================================================
int intMayor100Recursivo(int n1, int n2, int &matriz[n1][n2])
{
    for (int i=n1; i>0; i--)
    {
        for (int j=n2; j>0; j--)
        {
            
        }
    }
}

int main()
{
    int matriz[4][4];
    int cont = 1;
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            matriz[i][j] = cont;
            cont++;
        }
    }
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
}
