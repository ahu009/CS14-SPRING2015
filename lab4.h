//name: Abe Hu
//SID: 861148832
//Date: 5/01/2015

#ifndef _lab4_
#define _lab4_

#include <iostream>
#include <queue>
#include <vector>

using namespace std;
    class Node 
    { 
        public:
            Node* left;
            Node* middle;
            Node* right;
            Node* pred;
            Node* sibling;
            int value;
            int value2;
            Node(int v, int v2) : value(v), value2(v2), left(0), right(0), 
            middle(0), pred(0), sibling(0){}
            
    }; 

    class Tree
    {
        Node* root;
        priority_queue< pair<int,int> > queue1;
        vector< pair<int,int> > myvector;
        
        public:
        Tree()
        {
            //root = 0;
            root -> left = new Node(2,1);
            //cout << root -> left -> value << " " << root -> left -> value2 << endl;
            root -> right = new Node(3,1);
            //cout << root -> right -> value << " " << root -> right -> value2 << endl;
            root -> middle = 0;
        }
        
        void prelefttreehelp()
        {
            pretree(root -> left, root -> left -> value, root -> right -> value2, 0);
            return;
        }
        void prerighttreehelp()
        {
            pretree(root -> right, root -> right -> value, root -> right -> value2, 0);
            return;
        }
        void pretree(Node* root, int m, int n, int counter)
        {
            if(counter == 3)
            {
                return;
            }
            if(root == 0)
            {
                root = new Node(m, n);
            }
            if(n + m <= 9)
            {
                cout << m << " " << n << endl;
            }
            pretree(root -> left, 2 * m - n, m, counter + 1);
            pretree(root -> middle, 2 * m + n, m, counter + 1);
            pretree(root -> right, m + 2 * n, n, counter + 1);
        }
        
        void postlefttreehelp()
        {
            posttree(root -> left, root -> left -> value, root -> right -> value2, 0);
            return;
        }
        void postrighttreehelp()
        {
            posttree(root -> right, root -> right -> value, root -> right -> value2, 0);
            return;
        }
        void posttree(Node* root, int m, int n, int counter)
        {
            if(counter == 3)
            {
                return;
            }
            if(root == 0)
            {
                root = new Node(m, n);
            }
            
            posttree(root -> left, 2 * m - n, m, counter + 1);
            posttree(root -> middle, 2 * m + n, m, counter + 1);
            posttree(root -> right, m + 2 * n, n, counter + 1);
            if(n + m <= 9)
            {
                cout << m << " " << n << endl;
            }
        }
        
        void sumlefttreehelp()
        {
            sumtree(root -> left, root -> left -> value, root -> right -> value2, 0);
            return;
        }
        void sumrighttreehelp()
        {
            sumtree(root -> right, root -> right -> value, root -> right -> value2, 0);
            return;
        }
        void sumtree(Node* root, int m, int n, int counter)
        {
            if(counter == 3)
            {
                return;
            }
            if(root == 0)
            {
                root = new Node(m, n);
            }
            
            sumtree(root -> left, 2 * m - n, m, counter + 1);
            sumtree(root -> middle, 2 * m + n, m, counter + 1);
            sumtree(root -> right, m + 2 * n, n, counter + 1);
            if(n + m <= 9)
            {
                myvector.push_back(make_pair(n,m));
            }
            
        }
        void sort()
        {
            for(int i = 0; i < myvector.size(); ++i)
            {
                int num1 = myvector[i].first;
                int num2 = myvector[i].second;
                int sum = num1 + num2;
                for(int j = 0; j < myvector.size(); ++j)
                {
                    int tocompare = sum1(j);
                    if(sum < tocompare)
                    {
                        swap(myvector[i], myvector[j]);
                    }
                }
            }
            for(int i = 0; i < myvector.size(); ++i)
            {
                cout << myvector[i].first << " " << myvector[i].second << endl;
            }
        }
        
        int sum1(int i)
        {
            int num1 = myvector[i].first;
            int num2 = myvector[i].second;
            return num1 + num2;
        }
        
    };
    
    #endif