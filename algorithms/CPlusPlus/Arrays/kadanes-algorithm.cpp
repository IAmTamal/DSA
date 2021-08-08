//The question is to find the max sum of a contingous subarray.
//The array can even have negative integers , so we dont care if the sum is in negative, we will simply make it 0 
//because we need the MAXIMUM SUM
//The logic is to iterate from 0 to n-1 and add the sum and store it in max, if the sum is greater than max then we update the value of max
//And finally return max
// arr[] = {1,2,3,-2,5}  Output:9


#include <iostream>
using namespace std;
int main()
{
 int size;
 cin>>size;

 int arr[size];
 for (int i = 0; i < size; i++) //taking input
 {
    cin>>arr[i];
 }

 if(size==1) //if there is just one element in the array
 {
     cout<<arr[0];
     return 0;
 }
 else
 {
     int sum=0,max=arr[0];

     for (int i = 0; i < size; i++)
     {
        sum=sum+arr[i];
        if(sum>max) //if the sum is more than max then update the max.
        {
            max=sum;
        }

        if(sum<0)  //if sum becomes negative at some point we make it 0.
        sum=0;
     }
     cout<<"The max sum is:"<<max;
 }
 
 
 return 0;
}