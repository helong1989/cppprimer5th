/* exercise for c++ primer 5th exercise 3.8 */
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string temp;
    cout << "Enter a string" <<endl;
    getline(cin,temp);
    for (char &i : temp){
        if(!ispunct(i)) cout<< i <<endl;
/*        
        if (i=='!'){
        i = ' ';
        };
*/
    };
    cout << temp << endl;
    return 0;
}

