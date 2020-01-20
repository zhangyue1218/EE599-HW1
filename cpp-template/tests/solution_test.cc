#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(NameShould, ReturnName) {
  Solution solution;
  std::string actual = solution.PrintName();
  std::string expected = "Yue Zhang";
  EXPECT_EQ(expected, actual);
}

TEST(MajorShould, ReturnMajor) {
  Solution solution;
  std::string actual = solution.PrintMajor();
  std::string expected = "Electrical Engineering";
  EXPECT_EQ(expected, actual);
}

TEST(InterestShould, ReturnInterest) {
  Solution solution;
  std::string actual = solution.PrintInterest();
  std::string expected = "travel";
  EXPECT_EQ(expected, actual);
}