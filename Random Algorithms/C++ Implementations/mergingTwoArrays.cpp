#include <iostream>
#include <vector>

using namespace std;

vector<int> sortArray(vector<int> array){
    int n = array.size(), temp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                }
            }
        }
    return array;
    }

int main(){
    int n, m, i = 0, j = 0;
    cin >> n >> m;
    vector<int> firstArray(n, 0);
    vector<int> secondArray(m, 0);
    vector<int> thirdArray(0);
    
    for(int i = 0; i < n; i++)
        firstArray[i] = rand() % 100;
        
    for(int j = 0; j < m; j++)
        secondArray[j] = rand() % 100;
        
    // uses bubble sort to sort the arrays.
    firstArray = sortArray(firstArray);
    secondArray = sortArray(secondArray);
        
    while(i != n && j != m){
        if(firstArray[i] < secondArray[j]){
            thirdArray.push_back(firstArray[i]);
            i++;
            } else {
                thirdArray.push_back(secondArray[j]);
                j++;
                }
        }
    while(i != n){
        thirdArray.push_back(firstArray[i]);
        i++;
        }
    
    while(j != m){
        thirdArray.push_back(secondArray[j]);
        j++;
        }
    
    for(int i = 0; i < n+m; i++)
        cout << thirdArray[i] << endl;
    
    return 0;
    }