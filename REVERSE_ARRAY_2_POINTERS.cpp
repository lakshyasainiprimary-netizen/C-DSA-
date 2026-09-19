/*PROBLEM STATEMENT :

REVERSE A GIVEN ARRAY IN-PLACE :

E.G = {1, 2, 3, 4, 5};
OUTPUT = {5, 4, 3, 2, 1};

*/

#include<iostream>
#include<vector>
using namespace std;

void ReverseArray(vector<int> &array) {//SIGNATURE FXN :

    int left = 0; int right = array.size() - 1;//POINTERS INITIALISATION :

    while(left < right) {
        swap(array[left], array[right]);//SWAPPING OUTER-MOST ELEMENTS :

        left++; right--;//MOVING LEFT AND RIGHT POINTERS IN-WARDS :

    }
    
    for(int i = 0; i < array.size(); i++) {//PRINTING THE REVERSED ARRAY :

        cout << array[i] << " ";
    }
}


int main(){
vector<int> array = {1, 2, 3, 4, 5};

ReverseArray(array);//FXN CALLING :

}