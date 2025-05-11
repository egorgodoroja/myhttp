#include "certificate.h"
#include<functional>
#include<string>

class HttpOverrides{
    HttpClient createHttpClient(SecurityContext context);
    static HttpOverrides global;
};
