## TDD Exercise: "Anagram Detector"

Task Description

Write a function that determines if two words are anagrams of each other.

An anagram is created by rearranging the letters of a word to produce a new word, using all original letters exactly once.

- Letters may be provided in uppercase or lowercase. Implementations should
  treat letters case-insensitively (for example, 'a' is equivalent to 'A').

- Return True if the two words are anagrams, else False.

Examples:

- "LISTEN", "SILENT"  True

- "ARMY", "MARY"  True

- "HELLO", "WORLD"  False

- "A", "A"  True

- "A", "B"  False

- "" (empty strings)  True

=========================================================

Suggested TDD Steps

1. Both inputs empty: ("", "") -> True

2. One word empty, one not: ("", "A") -> False

3. Same single letter: ("A", "A") -> True

4. Different single letters: ("A", "B") -> False

5. Double letters, same word: ("AA", "AA") -> True

6. Double letters, different words: ("AB", "BA") -> True

7. Same word: ("GAGA", "GAGA") -> True

8. Same letters, different word: ("RACE", "CARE") -> True

9. Different words, same length: ("HELLO", "WORLD") -> False

10. Longer anagrams: ("LISTEN", "SILENT") -> True

11. Same letters, different counts: ("AAB", "ABA") -> True; ("AAB", "ABB") -> False

12. Words are anagrams of substrings: ("GREEN", "GENE") -> False; ("CAP", "PACK") -> False

13. Ignore capitalisation: ("A", "a") -> True; ("Rome", "More") -> True, ("SETU", "Tues") -> True

14. Ignore punctuation: ("Carlow?", "Coral, W!") -> True
