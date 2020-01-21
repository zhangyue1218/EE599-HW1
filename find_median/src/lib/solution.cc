#include "solution.h"
#include <iostream>

double Solution::FindMedian(std::vector<int> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }
  double result = 0;
  double target = -1;
  if(inputs.size()%2 != 0){
    target = (inputs.size() + 1)/2;
    result = inputs[target-1];
  }
  if(inputs.size()%2 == 0){
    target = inputs.size()/2;
    result = (inputs[target-1] + inputs[target])/2.0;
  }
  return result;
}

