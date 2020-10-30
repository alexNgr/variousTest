#ifndef STEFAN
#define STEFAN
#include <iostream>
#include <vector>
#include <numeric>

template<typename T>
T sum(T a, T b){
	return a+b;
}
// Calculate pi
constexpr double calculate_pi(){
  return 22.0/7;
}
// Calculate area 
const double calc_area(double pi, double radius);

// Sum for any number of arguments
template<typename ...Args> auto sum_multi(Args ...args) 
{ 
    return (args + ... + 0); 
}

#endif