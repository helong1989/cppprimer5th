/* exercise for c++ primer 5th exercise 3.7 */
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string temp;
    cout << "Enter a string" <<endl;
    getline(cin,temp);
    for (char i : temp){
        i = 'X';
    };
    cout << temp << endl;
    return 0;
}

