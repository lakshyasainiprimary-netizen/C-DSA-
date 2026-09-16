/*PROBLEM STATEMENT

ARRAY TRAVERSAL - PRINT ALL ELEMENTS IN AN ARRAY
*/

#include<iostream>
#include<vector>
using namespace std;

int Traversal(vector<int> &array) {
    
    for(int i = 0; i < array.size(); i++) {

    cout << array[i] << " ";

    }
}

int main(){

    vector<int> array = {4, 7, 2, 9, 1, 6};

    cout << Traversal(array) << endl;

}
