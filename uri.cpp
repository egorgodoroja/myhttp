#include "uri.h"

std::vector<std::string> split(const std::string& text, const std::string& delimiter = " ") {
    std::vector<std::string> result;
    size_t start = 0;
    size_t end = text.find(delimiter);

    while (end != std::string::npos) {
        result.push_back(text.substr(start, end - start));
        start = end + delimiter.length();
        end = text.find(delimiter, start);
    }

    result.push_back(text.substr(start));
    return result;
}

Uri::Uri(std::string p, std::string h, std::string a):protocol(p), hostname(h), api(a){}

Uri Uri::parse(std::string uri){
    std::vector<std::string> vect = split(uri, "://");
    std::string protocol = vect[0];
    std::vector<std::string> vect1 = split(vect[1], "/");
    std::string hostname = vect1[0];
    std::string api = "";
    for(int i = 1; i < vect1.size(); i++){
        api += vect1[i];
    }
    return Uri(protocol, hostname, api);
}