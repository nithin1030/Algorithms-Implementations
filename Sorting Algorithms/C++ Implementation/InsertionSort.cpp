#include <iostream>
#include <vector>

using namespace std;

// insertion sort

int main(){
    int n, i, j, val;
    cin >> n;
    int temp;
    vector<int>array(n, 0);

    // generates array of size n with random integers ranging between 0 to 100
    for(int i = 0; i < n; i++)
        array[i] = rand()%100;
        
    cout << "Before Sorting" << endl;
    for(int i = 0; i < n; i++){
        cout << array[i] << endl;
        }
    
    for(i = 0; i < n; i++){
        temp = array[i];
        j = i;
        while(j > 0 && array[j-1] > temp){
            array[j] = array[j-1];
            j--;
            }
        array[j] = temp;
        }
        
    cout << "After Sorting" << endl;
    for(int i = 0; i < n; i++){
        cout << array[i] << endl;
        }
    return 0;
    }