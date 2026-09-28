#include <gtest/gtest.h>
#include "anagram.h"

TEST(AnagramBasic, EmptyBoth) {
	EXPECT_TRUE(are_anagrams("", ""));
}

TEST(AnagramBasic, OneEmpty) {
	EXPECT_FALSE(are_anagrams("", "A"));
	EXPECT_FALSE(are_anagrams("A", ""));
}

TEST(AnagramBasic, SimpleAnagrams) {
	EXPECT_TRUE(are_anagrams("LISTEN", "SILENT"));
	EXPECT_TRUE(are_anagrams("ARMY", "MARY"));
}

TEST(AnagramBasic, NotAnagrams) {
	EXPECT_FALSE(are_anagrams("HELLO", "WORLD"));
}

TEST(AnagramEdge, DifferentCounts) {
	EXPECT_TRUE(are_anagrams("AAB", "ABA"));
	EXPECT_FALSE(are_anagrams("AAB", "ABB"));
}

TEST(AnagramEdge, DifferentLengths) {
	EXPECT_FALSE(are_anagrams("GREEN", "GENE"));
}

// main provided by gtest_main
