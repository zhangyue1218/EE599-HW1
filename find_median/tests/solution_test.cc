#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindMaxTest, HandlesEmptyVector) {
  Solution solution;
  std::vector<int> inputs = {};
  EXPECT_EQ(solution.FindMedian(inputs), -1);
}

TEST(FindMedianTest, HandlesConsecutiveEvenNumbers) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), 2.5);
}
TEST(FindMedianTest, HandlesConsecutiveOddNumbers) {
  Solution solution;
  std::vector<int> inputs = {1, 3, 5, 7, 9};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), 5);
}