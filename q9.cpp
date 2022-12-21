#include <iostream>
   
using namespace std;

void EvenOddSum(int arr[], int n)
{
    int even = 0;
    int odd = 0;
    for (int i = 1; i <= n; i++) {
        cin>>arr[i];
        if (i % 2 == 0)
            even += arr[i];
        else
            odd += arr[i];
    }
   
    cout << "Sum of even numbers:" << even<<endl;
    cout << "Sum of odd numbers:" << odd;
}
int main()
{
    int sum=0;
	int i, n, arr[100];
	cout<<"Enter a range"<<endl;
	cin>>n;
	cout<<"Enter some numbers"<<endl;
    EvenOddSum(arr, n);
   
    return 0;
}