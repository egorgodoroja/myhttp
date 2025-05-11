#include "http.h"

HttpClient::HttpClient(SecurityContext context){
    return HttpOverrides.global.createHttpClient(context);
}