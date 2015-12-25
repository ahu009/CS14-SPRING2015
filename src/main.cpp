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
    cout << "testing vectors: " << endl;
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(8);
    v.push_back(9);
  
    selectionsort(v);
    
    vector<int> v2;
    selectionsort(v2);
    
    cout << endl << "testing lists: " << endl; 
     int myints[] = {75,23,65,42,13};
     list<int> mylist (myints,myints+5);
   
     selectionsort(mylist);
    
   //cout << endl << "testing lists: " << endl; 
     int myints2[] = {1,2,3,4,5};
     list<int> mylist2 (myints2,myints2+5);
   
     selectionsort(mylist2);
}