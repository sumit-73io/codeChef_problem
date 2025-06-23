/*
Chef is playing with weights. He has an object weighing W units. He also has three weights each of X,Y, and Z units respectively.
Help him determine whether he can measure the exact weight of the object with one or more of these weights.
If it is possible to measure the weight of object with one or more of these weights, print YES, otherwise print NO.*/

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,z,w;
        cin>>w>>x>>y>>z;
        if (x==w || y==w ||z==w)
        cout<<"yes"<<endl;
        else if(x+y+z == w||(x+y)==w||(x+z)==w||(y+z)==w)
        cout <<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
    
    return 0;
}