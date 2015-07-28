/* exercise for c++ primer 5th exercise 3.15 */
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<string> temp;
    string num;
    while(cin>>num)
        temp.push_back(num);
    
    for (auto i:temp)
        cout << i <<" ";
    cout<< endl;
    return 0;
}

