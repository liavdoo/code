#include <iostream>
#include <vector>
#include <cstdlib>
#include <array>
#include <memory>

using namespace std;
struct massive{
    int numbers;
};

int main()
{
    int nums1[] {1, 2, 3, 4, 5};
    cout << "nums1[0] address: " << nums1 << endl;
    cout << "nums1[0] value: " << *nums1 << endl;

    int nums2[5];
    cout << "nums2[0] address: " << nums2 << endl;
    cout << "nums2[0] value: " << *nums2 << endl;

    int nums3[5] = {0, 1, 2, 3, 4}; 
    cout << "nums3[0] address: " << nums3 << endl;
    cout << "nums3[0] value: " << *nums3 << endl;

    int *nums4 {new int[5]};
    cout << "nums4[0] address: " << nums4 << endl;
    cout << "nums4[0] value: " << *nums4 << endl;

    int *nums5 = new int[5];
    cout << "nums5[0] address: " << nums5 << endl;
    cout << "nums5[0] value: " << *nums5 << endl;

    vector<int> nums6 = {1,2,3,4,5};
    cout << "nums6[0] address: " << &nums6[0]<< endl;
    cout << "nums6[0] value: " << nums6.at(0) << endl;
    
    int * nums7 = (int*) malloc(5); 
    if (nums7==NULL) exit (1);  
    cout << "nums7[1] address: " << &nums7[1] << endl;
    cout << "nums7[1] value: " << nums7[1] << endl; 

    array<int,5> ar = {1,2,3,4,5};
    cout << "ar[1] value: " << ar[1] << endl;

    int lenght = 5;
    int *arr = new int[lenght];
    cout<<"address arr: " << arr<<endl;
}


