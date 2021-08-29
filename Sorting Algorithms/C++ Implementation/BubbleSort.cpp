#include <iostream>
#include <vector>

using namespace std;

// Bubble Sort

int main(){
    int n, i, j, temp;
    cin >> n;
    vector<int>array(n, 0);

    // generates array of size n with random integers ranging between 0 to 100
    for(int i = 0; i < n; i++)
        array[i] = rand()%100;
        
    cout << "Before Sorting" << endl;
    for(int i = 0; i < n; i++){
        cout << array[i] << endl;
        }
    
    for(i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                }
            }
        }
        
    cout << "After Sorting" << endl;
    for(int i = 0; i < n; i++){
        cout << array[i] << endl;
        }
    return 0;
    }