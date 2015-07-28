/* exercise for c++ primer 5th exercise 3.20 */
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{   
    vector <int> numbers;
    int temp;
    while(cin>>temp)
        numbers.push_back(temp);

    for(int i=0;i<numbers.size()-1;i++)
        cout << numbers[i]+numbers[i+1] << " ";
    cout<<endl;

    for(int i=0;i<(numbers.size()+1)/2;i++)
        cout << numbers[i]+numbers[numbers.size()-i-1]<< " ";
    cout<<endl;

    return 0;
}
