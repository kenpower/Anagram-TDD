#include <gtest/gtest.h>
#include "anagram.h"

TEST(AnagramBasic, EmptyBoth) {
	EXPECT_TRUE(are_anagrams("", ""));
}

TEST(AnagramBasic, OneEmpty) {
	EXPECT_FALSE(are_anagrams("", "A"));
	EXPECT_FALSE(are_anagrams("A", ""));
}


// main provided by gtest_main
