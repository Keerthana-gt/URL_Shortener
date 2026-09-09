#ifndef SHORTENER_H
#define SHORTENER_H

#include <string>
#include <unordered_map>

class Shortener {
public:
    // Generate a short code for a given URL
    std::string shorten(const std::string& url);

    // Retrieve the original URL from a short code
    std::string expand(const std::string& code);

private:
    std::unordered_map<std::string, std::string> db; // shortCode -> originalURL
    std::string generateCode(const std::string& url);
};

#endif
