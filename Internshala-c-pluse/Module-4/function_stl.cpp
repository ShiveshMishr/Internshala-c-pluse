#include<iostream>
#include<functional>
#include <algorithm>

using namespace std;

int  main(){
    int arr[]={2,34,5,65,6,3,1};
    //sort(arr, arr+4);
    sort(arr , arr+7, greater<int>());
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";   
    }
    
    }