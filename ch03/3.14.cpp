/* exercise for c++ primer 5th exercise 3.14 */
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> temp;
    int num;
    while(cin>>num)
        temp.push_back(num);
    
    for (auto i:temp)
        cout << i <<" ";
    cout<< endl;
    return 0;
}

