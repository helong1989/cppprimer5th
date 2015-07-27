/* exercise for c++ primer 5th exercise 3.6 */
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string temp, temp2;
    cout << "Enter a string" <<endl;
    cin >> temp;
    for (auto i : temp){
        i = 'X';
        temp2 +=i;
    };
    temp = temp2;
    cout << temp << endl;
    return 0;
}

