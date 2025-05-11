#include "overrides.h"
#include<string>
#include<map>

class HttpClient{
public:
    HttpClient(SecurityContext context);

    bool badCertificateCallback(X509Certificate cert, std::string host, int port);
};