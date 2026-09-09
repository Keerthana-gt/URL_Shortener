#include "shortener.h"
#include <cassert>
#include <iostream>

int main() {
    Shortener s;

    std::string url = "https://github.com";
    std::string code = s.shorten(url);

    // Check that expand returns the original URL
    assert(s.expand(code) == url);

    // Check that an invalid code returns error
    assert(s.expand("invalid") == "Error: Code not found!");

    std::cout << "All tests passed!" << std::endl;
    return 0;
}
