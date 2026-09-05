/* PROBLEM STATEMENT :

FIND LARGEST ELEMENT IN THE GIVEN ARRAY :

*/

#include<iostream>
#include<vector>
using namespace std;


    int FindLargest(vector<int> &arr) {

        int largest = arr[0];

        for(int i = 1; i < arr.size(); i++) { //SCAN ELEMENTS :

            if(largest < arr[i]) { //COMPARING WITH arr[0] :
                largest = arr[i];
            }
    
        }
            return largest;
    }


    int main(){

        vector<int> arr = {-7, 3, -12, 5, -2, 9, -15}; //ARRAY DECLARATION :

        cout << "THE LARGEST ELEMENT IS : " << FindLargest(arr) << endl; //PRINTING ELEMENT :

    }