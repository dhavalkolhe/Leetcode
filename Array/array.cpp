// // C++ program to display "Hello World"

// // Header file for input output functions
// #include <iostream>
// using namespace std;

// // Main() function: where the execution of program begins
// int main()
// {
// 	// prints hello world
// 	cout << "Hello World";

// 	return 0;
// }

// !1929 - Array - Concatenation of Array

#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  std::vector<int> nums;
  std::vector<int> ans;
  int a, n=2;

  std::cout << "Please enter some integers:\n";

    for (int i=0; i<n; i++)
    {
        std::cin >> a;
        nums.push_back(a);
    }

    cout << "The nums array is: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << nums[i] << " ";
    }

    ans.assign(nums.begin(), nums.end()); 

    for(int j=0; j< n; j++)
    {
        ans.push_back(nums[j]);
    }

    cout << "\nThe ans array is: ";
    for (int j = 0; j < 2*n; j++)
    {
        std::cout << ans[j] << " ";
    }
    
  return 0;
}