#include <string>
#include <vector>
#include <sstream>

class Uri{
public:
    std::string protocol;
    std::string hostname;
    std::string api;
    Uri(std::string p, std::string h, std::string a);
    static Uri parse(std::string uri);
};