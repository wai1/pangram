#include "pangram.h"
#include <algorithm>

namespace pangram {

	bool is_pangram(std::string test_string)
	{
		transform(test_string.begin(), test_string.end(), test_string.begin(), [](unsigned char c) { return std::tolower(c); });

		for (char x = 'a'; x < 'z'; x++)
		{
			std::string letter{ x };
			std::size_t found = test_string.find(letter);

			if (found == std::string::npos)
				return false;
		}
		return true;
	}

}  // namespace pangram
