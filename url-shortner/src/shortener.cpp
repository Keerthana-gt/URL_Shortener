#include "shortener.h"
#include <cstdlib>
#include <ctime>

// Helper: generate a random 6-character code using Base62 characters
std::string Shortener::generateCode(const std::string& url) {
    static const std::string chars =
        "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    std::string code;
    for (int i = 0; i < 6; i++) {
        code += chars[rand() % chars.size()];
    }
    return code;
}

// Shorten a given URL and store mapping
std::string Shortener::shorten(const std::string& url) {
    std::string code = generateCode(url);
    db[code] = url;
    return code;
}

// Expand a short code back to the original URL
std::string Shortener::expand(const std::string& code) {
    if (db.find(code) != db.end()) {
        return db[code];
    }
    return "Error: Code not found!";
}
