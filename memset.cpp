//used to initialise array elemnts
// this is used to set all value of array(int) is either 0 or 1
//but u can set any char to string or character array
//memset(array_name,value,sizeof(array_name))
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<10;i++){
     cout<<arr[i]<<":";
    }
    cout<<endl;
      int arr2[10];
    memset(arr2,-1,sizeof(arr));
    for(int i=0;i<10;i++){
     cout<<arr2[i]<<":";
    }
    cout<<endl;
       char arr3[10];
    memset(arr3,'a',sizeof(arr));
    for(int i=0;i<10;i++){
     cout<<arr3[i]<<":";
    }
return 0;
}
//why only 0 and -1
//memset() works byte by byte
