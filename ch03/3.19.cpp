/* exercise for c++ primer 5th exercise 3.19 */
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector <int> a(10,42);
    vector <int> b{42,42,42,42,42,42,42,42,42,42};
    vector <int> c;
    for(;c.size()<10;c.push_back(42));
    for(auto i:a)
        cout<< i <<" ";
    cout<<endl;
    for(auto i:b)
        cout<< i <<" ";
    cout<<endl;
    for(auto i:c)
        cout<< i <<" ";
    cout<<endl;
    
    return 0;
}
