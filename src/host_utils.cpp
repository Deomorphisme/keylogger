#include <iostream>
#include <climits>
#include <unistd.h>
#include <string>

namespace host_utils {

std::string get_hostname() {
    char hostname[HOST_NAME_MAX + 1];
    gethostname(hostname, HOST_NAME_MAX + 1);

    return hostname;
}

}