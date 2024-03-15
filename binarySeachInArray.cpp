#include<iostream>
using namespace std;
int binarySearch(int arr[],int key,int no){  
    int low =0;
    int high = (no-1);
    while (low<=high)
    {
        int mid=(low+high)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (key>arr[mid])
        {
            low=mid+1;
        }
        else if (key<arr[mid])
        {
            high=mid-1;
        }
        
        
    }
    return -1;
}

int main(){
    int no;
    cout<<"Enter the no. of elements in array :";
    cin>>no;
    cout<<endl;
    int arr[no] ,key;
    cout<<"Enter elements "<<no<<" in array in ascending order :";
    for (int i = 0; i < no; i++)
    {
        cin>>arr[i];
        cout<<" ";
    }
    cout<<endl;
    cout<<"Enter Key element to search :"; 
    cin>>key;
    cout<<endl;
    int pos = binarySearch(arr,key,no);
    if(pos>=0){
        if (pos==0)
        {
            cout<<"Element was found at "<<pos+1<<"st position"<<endl;
        }
        else if (pos==1)
        {
            cout<<"Element was found at "<<pos+1<<"nd position"<<endl;
        }
        else if (pos==2)
        {
            cout<<"Element was found at "<<pos+1<<"rd position"<<endl;
        }
        else {
            cout<<"Element was found at "<<pos+1<<"th position"<<endl;
        }
        
    }
    else
    {
        cout<<"Element was not found";
    }
    return 0;
}
