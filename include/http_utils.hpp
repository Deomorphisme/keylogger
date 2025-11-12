#ifndef HTTP_UTILS_HPP
#define HTTP_UTILS_HPP

#include <string>
#include <curl/curl.h>

class HttpClient {
public:
    HttpClient();
    ~HttpClient();

    // Envoie une requête POST avec des données
    std::string post(const std::string& url, const std::string& data);

    // Envoie une requête GET
    std::string get(const std::string& url);

    // Optionnel : Ajoute un header à la requête
    void addHeader(const std::string& header);

private:
    static size_t writeCallback(void* contents, size_t size, size_t nmemb, std::string* output);
    struct curl_slist* headers;
};

#endif // HTTP_UTILS_HPP
