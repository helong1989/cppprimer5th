/* exercise for c++ primer 5th exercise 3.17 */
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector <string> tempWord;
    string temp;
    while(cin>>temp)
        tempWord.push_back(temp);
    for(auto &i : tempWord)
        for (auto &j :i)
            j = toupper(j);
    for(int i=0; i < tempWord.size(); i++){
        if(i !=0 &&(i) % 8 == 0) cout<<endl;
        cout << tempWord[i]<<" ";
    }
    cout<<endl;
}
        
