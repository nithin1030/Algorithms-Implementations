#include <iostream>
#include <vector>

using namespace std;

// selection sort

int main(){
    int n, i, j, min, temp;
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
        min = i;
        temp = array[i];
        for(int j = i + 1; j < n - 1; j++){
            if(array[j] < array[min]){
                min = j;
                }
            }
        array[i] = array[min];
        array[min] = temp;
        }
        
    cout << "After Sorting" << endl;
    for(int i = 0; i < n; i++){
        cout << array[i] << endl;
        }
    return 0;
    }