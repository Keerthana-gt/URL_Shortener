#include "shortener.h"
#include <iostream>

int main() {
    srand(time(0)); // seed random generator
    Shortener s;

    std::string url;
    std::cout << "Enter a URL to shorten: ";
    std::cin >> url;

    std::string code = s.shorten(url);
    std::cout << "Shortened URL: " << code << std::endl;

    std::cout << "Expanding code " << code << ": "
              << s.expand(code) << std::endl;

    return 0;
}
