// To Find Largest element in an array

#include <iostream>
using namespace std;

int naivegetlargest(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            return i;
    }
    return -1;
    // time: O(n2)
}
int efficientgetlargest(int arr[], int n)
{
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
            largest = i;
    }
    return largest;
    // time : O(n)
}

int main()
{
    int arr[] = {12, 6, 3, 13, 7, 4, 91, 23, 52, 112, 4, 9, 3, 34, 99};
    cout << "largest element is: " << arr[naivegetlargest(arr, 15)] << endl;
    cout << "largest element is: " << arr[efficientgetlargest(arr, 15)] << endl;
    return 0;
}
