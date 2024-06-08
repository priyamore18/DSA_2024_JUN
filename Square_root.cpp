#include<iostream>
using namespace std;

// Function to find the integer square root using binary search
int binary(int n) {
    int start = 0;
    int end = n;
    int mid;
    int ans = -1; // Variable to store the closest integer square root

    while(start <= end) {
        mid = start + (end - start) / 2; // Calculate mid to avoid overflow
        int square = mid * mid;
        
        if(square == n) {
            return mid; // If the exact square root is found, return it
        }
        else if(square > n) {
            end = mid - 1; // Move to the left half
        } else {
            ans = mid; // Update the answer to the current mid
            start = mid + 1; // Move to the right half
        }
    }
    return ans; // Return the closest integer square root
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    int temp = binary(n);
    cout << "The nearest square root is " << temp << endl;
    return 0;
}
