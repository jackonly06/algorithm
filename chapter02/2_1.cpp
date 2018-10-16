/*************************************************************************
    > File Name: 2_1.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Tue, Oct 16, 2018 10:12:47 AM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

#define ARR_LENTH 6

using namespace std;

int main(int argc, char** argv)
{
    vector<int> arr = {5, 2, 4, 6, 1, 3};
    int i = 0;
    int j = 0;
    int key = 0;
    int o_put = 0;

    for(auto v : arr ){
        cout << v;
    }

    cout << endl;

    for( i = 1; i < ARR_LENTH; i++ ){
        key = arr[i];
        j = i - 1;
        while( j >= 0 && arr[j] > key ){
            arr[j + 1] = arr[j];
            j = j - 1 ;
        }
        arr[j + 1] = key;
    }

    for(auto v : arr ){
        cout << v;
    }

    cout << endl;

    return 0;
}

