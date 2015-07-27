/* exercise for c++ primer 5th exercise 3.8 */
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string temp;
    cout << "Enter a string" <<endl;
    getline(cin,temp);
    int i = 0;
/*
    while (i<temp.size()){
        temp[i]='X';
        i++;
    }
*/
    for (i=0;i<temp.size();i++) temp[i]='X';
/*
    for (char &i : temp){
        i = 'X';
    };
*/
    cout << temp << endl;
    return 0;
}

