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
// ? Learned How to dynamically assign values in Vector,
// ? and how to concatenate arrays.

// #include <iostream>
// #include <vector>

// using namespace std;

// int main ()
// {
//   std::vector<int> nums;
//   std::vector<int> ans;
//   int a, n=2;

//   std::cout << "Please enter some integers:\n";

//     for (int i=0; i<n; i++)
//     {
//         std::cin >> a;
//         nums.push_back(a);
//     }

//     cout << "The nums array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << nums[i] << " ";
//     }

//     ans.assign(nums.begin(), nums.end());

//     for(int j=0; j< n; j++)
//     {
//         ans.push_back(nums[j]);
//     }

//     cout << "\nThe ans array is: ";
//     for (int j = 0; j < 2*n; j++)
//     {
//         std::cout << ans[j] << " ";
//     }

//   return 0;
// }

// !1480 - Array -  Running Sum of 1d Array

// #include <iostream>
// #include <vector>

// using namespace std;

// int main(){
//     std::vector<int> nums;
//     std::vector<int> runningsum;

//     int a, n=3, sum = 0;

//       std::cout << "Please enter some integers:\n";

//     for (int i=0; i<n; i++)
//     {
//         std::cin >> a;
//         nums.push_back(a);
//     }

//     cout << "The nums array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << nums[i] << " ";
//     }

//     // Logic to calculate running sum
//     for(int i=0; i<n; i++)
//     {
//         sum += nums[i];
//         runningsum.push_back(sum);
//     }

//     cout << "The running sum array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << runningsum[i] << " ";
//     }

// }

// !1470 - Array - Shuffling of Array

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     std::vector<int> nums{2, 5, 1, 3, 4, 7};
//     std::vector<int> res;
//     int n = 3;

//     //Logic to shuffle the array
//     for (int i = 0; i < n; i++)
//     {
//         res.push_back(nums[i]);
//         res.push_back(nums[i + n]);
//     }

//     cout << "The shuffled array is: ";
//     for (int i = 0; i < 2 * n; i++)
//     {
//         std::cout << res[i] << " ";
//     }

//     return 0;
// }

// !1431. Kids With the Greatest Number of Candies

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int extraCandies = 3;
//     std::vector<int> candies{2, 3, 5, 1, 3};
//     std::vector<bool> res;

//     // Calculate Max Candies
//     int maxCandies = 0;
//     for (int i = 0; i < candies.size(); i++)
//     {
//         if (candies[i] > maxCandies)
//         {
//             maxCandies = candies[i];
//         }
//     }

//     for (int i = 0; i < candies.size(); i++)
//     {
//         if (candies[i] + extraCandies >= maxCandies)
//         {
//             res.push_back(true);
//         }
//         else
//         {
//             res.push_back(false);
//         }
//     }

//     cout << "The res array is: ";
//     for (int i = 0; i < res.size(); i++)
//     {
//         std::cout << res[i] << " ";
//     }

//     return 0;
// }

// !1313. Decompress Run-Length Encoded List

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     std::vector<int> nums{1, 2, 3, 4};
//     int freq, val;
//     vector<int> res;
//     for (int i = 0; i < nums.size(); i += 2)
//     {
//         res.insert(res.end(), nums[i], nums[i + 1]);
//     }

//     cout << "The res array is: ";
//     for (int i = 0; i < res.size(); i++)
//     {
//         std::cout << res[i] << " ";
//     }

//     return 0;
// }

// !1528. Shuffle String

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     string s = "codeleet";
//     std::vector<int> indices{4, 5, 6, 7, 0, 2, 1, 3};
//     string res;

//     for (int i = 0; i < indices.size(); i++)
//     {
//         res += s[indices[i]];
//     }

//     cout << "The res string is: ";
//     for (int i = 0; i < res.size(); i++)
//     {
//         std::cout << res[i];
//     }

//     return 0;
// }

// !1769. Minimum Number of Operations to Move All Balls to Each Box

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     std::vector<int> res;
//     string boxes = "001011";
//     for (int i = 0; i < boxes.length(); i++)
//     {
//         int count = 0;
//         for (int j = 0; j < boxes.length(); j++)
//         {
//             if (abs(i - j) > 0 && boxes[j] == '1')
//             {
//                 count += abs(i - j);
//             }
//         }

//         res.push_back(count);
//     }

//     cout << "The res array is: ";
//     for (int i = 0; i < res.size(); i++)
//     {
//         std::cout << res[i] << " ";
//     }

//     return 0;
// }
