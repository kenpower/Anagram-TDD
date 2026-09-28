Visual Studio build instructions (GoogleTest via vcpkg)

1. Install vcpkg if you don't have it: https://github.com/microsoft/vcpkg
2. Install GoogleTest for x64 triplet:
   .\vcpkg install gtest:x64-windows
3. Set VCPKG_ROOT environment variable to your vcpkg root folder (e.g., C:\dev\vcpkg)
   or open a Developer PowerShell that has the environment set.
4. Open Anagram-TDD\AnagramTDD.sln in Visual Studio 2022/2026.
5. Select x64 and Debug configuration, build the solution.

Notes:
- The tests project expects gtest headers and libs under $(VCPKG_ROOT)\installed\x64-windows.
- If you prefer a different setup (NuGet, manual libs), update the test project's AdditionalIncludeDirectories and AdditionalLibraryDirectories accordingly.

Run tests:
- From Test Explorer in Visual Studio (after building), or run the produced test exe (anagram_tests.exe) from the output folder.
