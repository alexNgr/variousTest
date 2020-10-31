
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
    int n, k;
    std::cin >> n;
    
    
    std::vector<int> arr;
    int myint;

    for (int i = 0; i < n; i++) {
        
        std::cin >> myint;
        arr.push_back(myint);
    }
   
    std::cin >> k;
    std::sort(arr.begin(), arr.end());
    
    //for (auto i : arr) // access by value, the type of i is int
    //    std::cout << i << ' ';
    //std::cout << '\n';


    std::vector<int> sum;
    for (int i = 0; i < n; i++) {
        if (k == 0)
            break;

       
        arr[i] = arr[i] * -1;
        k--;

        
        
    }
    int sum_final= std::accumulate(arr.begin(), arr.end(), 0);
    std::cout << sum_final << '\n';
    //std::cout << "myvector stores " << int(arr.size()) << " numbers.\n";

   
}

