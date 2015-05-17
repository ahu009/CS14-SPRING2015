//Name: Abe Hu
//SID: 861148832
//Date: 5/16/2015
#ifndef _lab6_
#define _lab6_

#include <iostream>
#include <utility>
#include <iterator>
#include <vector>

using namespace std;

template<typename L>
void selectionsort(L &l){
    int count = 0;
    bool isequal = false;
    typename L::iterator it = begin(l);
    typename L::iterator iter;
    typename L::iterator smallest; 
    int small;
    cout << "pre: ";
    for(typename L::iterator print = begin(l); print != end(l); ++print)
    {
        cout << *print << " ";
    }
    
    cout << endl << "post: ";
    for( ; it != end(l); ++it)
    {
        smallest = it;
        isequal = false;
        for(iter = it; iter != end(l); ++iter)
        {
            if (*iter < *smallest)
            {
                smallest = iter;
                isequal = true;
            }
        }
        if(isequal == true)
        {
            swap(*it, *smallest);
            count = count + 3;
        }
        cout << *it << " ";
    }
    cout << endl;
    cout << "0 copies and " << count << " moves" << endl; 
}

#endif