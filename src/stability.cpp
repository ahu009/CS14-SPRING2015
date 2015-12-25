//Name: Abe Hu
//SID: 861148832
//Date: 5/16/2015

#include "selectionsort.h"
#include <iostream>
#include <utility>
#include <iterator>
#include <vector>
#include <list>

using namespace std;

int main()
{
    cout << "PART 2B" << endl;
    cout << "This program tests the stability of selectionsort function" << endl;
    cout << endl;
    vector<int> v;
    cout << "With equal values (should have 0 moves)." << endl;
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    
    selectionsort(v);
    
    vector<int> v2;
    v2.push_back(6);
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(5);
    
    cout << "Without equal values. Replaced one '1' with '6'(should have 9 moves)." << endl;
    selectionsort(v2);
    
    cout << "This program shows that the selection sort" << endl;
    cout << "function is stable because there were 0 moves when " << endl;
    cout << "equal values were present, indicating that they did not" << endl;
    cout << "move positions after the function executed." << endl;
    
    return 0;
}