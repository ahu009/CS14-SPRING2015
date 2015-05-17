//name: Abe Hu
//SID: 861148832
//Date: 5/01/2015

#include "lab4.h"
#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;

int main(int argc, char** argv)
{
    if(argc != 2)
    {
        cout << "Error" << endl;
        exit(1);
    }
    
    int k = atoi(argv[1]);
    Tree tree;
    cout << "pre-order: " << endl;
    tree.prelefttreehelp();
    tree.prerighttreehelp();
    
    cout << "post-order: " << endl;
    tree.postlefttreehelp();
    tree.postrighttreehelp();
    
    cout << "sorted order: " << endl;
    tree.sumlefttreehelp();
    tree.sumrighttreehelp();
    
    tree.sort();
    
    
    return 0;
}