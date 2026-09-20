/*PROBLEM STATEMENT :

PERFORM A LINEAR SEARCH OPERATION ON A GIVEN ARRAY AND RETURN INDEX OF THE TARGET ELEMENT :

FOR E.G :

int array = {4, 7, 2, 9, 1, 6}, target = 9 -> return index of 9 :

*/

#include<iostream>
#include<vector>
using namespace std;

int LinearSearch(vector<int> &array, int target) {

    for(int i = 0; i < array.size(); i++) {//SCANS THE ARRAY :
        if(array[i] == target) {//TARGET FOUND :

            return i;//RETURN INDEX OF THE TARGET :

        }
    }

        return -1;//IF TARGET NOT FOUND :
}

int main(){

    vector<int> array = {4, 7, 2, 9, 1, 6};

    int target = 9;//TARGET DECLARATION FOR THIS PROBLEM, IN GENERAL ASK FOR USER INPUT FOR A RANDOM TARGET :
    cout << LinearSearch(array, target) << endl;//FUNCTION CALLING :
}
