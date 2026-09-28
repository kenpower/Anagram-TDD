#include "anagram.h"

#include <array>

bool are_anagrams(const std::string& a, const std::string& b) {
	if (a.size() != b.size()) return false;
	std::array<int, 26> counts{};
	for (char ch : a) {
		// Assumes input is uppercase A-Z as specified in the README
		counts[static_cast<unsigned char>(ch) - 'A']++;
	}
	for (char ch : b) {
		counts[static_cast<unsigned char>(ch) - 'A']--;
	}
	for (int c : counts) if (c != 0) return false;
	return true;
}
