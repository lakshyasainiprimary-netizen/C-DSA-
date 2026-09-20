/*PROBLEM STATEMENT :

PERFORM A LINEAR SEARCH OPERATION ON A GIVEN ARRAY AND RETURN INDEX OF THE TARGET ELEMENT :

FOR E.G :

int array = {4, 7, 2, 9, 1, 6}, target = 9 -> return index of 9 :

*/

#include<iostream>
#include<vector>
using namespace std;

int LinearSearch(vector<int> &array, int target) {

    for(int i = 0; i < array.size(); i++) {
        if(array[i] == target) {

            return i;

        }
    }

        return -1;
}

int main(){

    vector<int> array = {4, 7, 2, 9, 1, 6};

    int target = 9;
    cout << LinearSearch(array, target) << endl;
}
