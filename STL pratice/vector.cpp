#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    vector<int> v;
    v.push_back(45);
    v.emplace_back(89);
    // emplace_back is faster and more efficient than push_back
    // https://stackoverflow.com/questions/4303513/push-back-vs-emplace-back
    for (int i = 0; i < 2; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // vector of pair datatype
    vector<pair<int, int>> vp;
    vp.push_back({1,2});
    // push_back rquires currly braces to push pair element in a vector.
    vp.emplace_back(4,5);
    // emplace_back dont required currly braces to push a pair value in vector

    // declare vector of some size or some values filled already in it.

    // vector of size 6 having 0 or any garbage value (Depends on compiler).
    vector<int> vec(6);
    // vector of size 6 with default value 142 in it.
    vector<int> vect(6,142);
    // copy vector vect to v2
    vector<int> v2(vect);
     */

    vector<int> v1 = {10, 20, 35, 89};
    // Accessing Elements in a vector
    // we can access elements in vector as a similar fashion like array.
    cout << "Accessing Vector using index(element at zeroth index): " << v1[0] << endl;
    cout << "Accessing Vector using at method(element at zeroth index): " << v1.at(0) << endl;
    cout << "Accessing Vector end element using back method(element at last index): " << v1.back() << endl;
    // we can also access elements ny the use of iterator
    // Declearition of iterator
    vector<int>::iterator it = v1.begin();
    cout << "type :- " << typeid(it).name() << "\nAddress:- " << &it << endl;
    cout << "Value at the address where iterator it is pointing " << *(it) << endl;
    vector<int>::iterator it2 = v1.end();
    cout << "Value at the address where iterator it2 is pointing " << *(it2) << endl;
    /*printed zero because the address in not the
    part of our vector so it's value may be garbage or zero depending on the compiler.
    */

    /*
    Above result conclude that the int data type have 2 byte storage in memory,
    also we have it pointing to the begining of the vector and it is pointing
    to the end of the vector.
     */

    // Printing all the elements of vector
    cout << "Elements of vector V1 are:- ";
    for (vector<int>::iterator itr = v1.begin(); itr != v1.end(); itr++)
    {
        cout << *(itr) << " ";
    }
    cout << endl;

    // using auto
    cout << "Elements of vector V1 are:- ";
    for (auto itr1 = v1.begin(); itr1 != v1.end(); itr1++)
    {
        cout << *(itr1) << " ";
    }
    cout << endl;

    // using foreach loop
    cout << "Elements of vector V1 are:- ";
    for (auto itr1: v1)
    {
        cout << itr1 << " ";
    }
    cout << endl;

    return 0;
}