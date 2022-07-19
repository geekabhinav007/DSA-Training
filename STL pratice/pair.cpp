#include <bits/stdc++.h>
using namespace std;
int main()
{
    // defining a pair
    pair<int, char> PAIR1;
    // pair of pair
    pair<int, pair<int, int>> nestedPair = {1, {102, 33}};
    // Pair of array
    pair<int, int> arr[] = { {1, 2},
                             {12, 13},
                             {333, 233} };

    // we can refer using pairName.first and similary for second element pairName .second

    // first part of the pair

    PAIR1.first = 1;

    // second part of the pair

    PAIR1.second = 'A';
    cout << PAIR1.first << " "<<PAIR1.second<<endl;

    // we can print pair element of nested pair and array of pairs like that

    cout<<nestedPair.first<<" "<< nestedPair.second.first<<" "<<nestedPair.second.second<<endl;
    cout<<arr[0].first<<" "<<arr[2].second<<endl;
    return 0;
}