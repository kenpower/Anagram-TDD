// Allowed expectations / guidance:
// - Implementations should treat letters case-insensitively: uppercase and
//   lowercase are considered equivalent ("a" == "A").
// - Inputs will contain only English letters A-Z (no spaces, punctuation,
//   or digits). Students may assume this for the exercises.
// - Empty strings are valid inputs; two empty strings are considered
//   anagrams of each other.

#include "pch.h"
#include <gtest/gtest.h>
#include "include/anagram.h"

TEST(StarterAnagramTests, EmptyBoth) {
	EXPECT_TRUE(are_anagrams("", ""));
}

TEST(StarterAnagramTests, OneEmpty) {
	EXPECT_FALSE(are_anagrams("", "A"));
	EXPECT_FALSE(are_anagrams("A", ""));
}
