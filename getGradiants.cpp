#include <curl/curl.h>
#include <iostream>

using namespace std;

static size_t writecallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

void getGradiants() {
    // testing out libcurl stuff
    CURLcode ret;
    CURL *hnd;

    struct curl_slist * headers = NULL; // init to NULL is important
    headers = curl_slist_append(headers, "content-Type: application/json");

    string readbuffer;

    hnd = curl_easy_init();
    if(hnd)
    {
        curl_easy_setopt(hnd, CURLOPT_BUFFERSIZE, 102400L);
        curl_easy_setopt(hnd, CURLOPT_URL, "https://api.random.org/json-rpc/4/invoke");
        curl_easy_setopt(hnd, CURLOPT_NOPROGRESS, 1L);
        curl_easy_setopt(hnd, CURLOPT_POSTFIELDS, "{\"jsonrpc\":\"2.0\",\"method\":\"generateDecimalFractions\",\"params\":{\"apiKey\":\"741cc2e9-9a93-49d9-b6c7-369d0b7227b4\",\"n\":10,\"decimalPlaces\":10,\"replacement\":true,\"pregeneratedRandomization\":null},\"id\":23600}");
        curl_easy_setopt(hnd, CURLOPT_POSTFIELDSIZE_LARGE, (curl_off_t)201);
        curl_easy_setopt(hnd, CURLOPT_USERAGENT, "curl/7.81.0");
        curl_easy_setopt(hnd, CURLOPT_MAXREDIRS, 50L);
        curl_easy_setopt(hnd, CURLOPT_HTTP_VERSION, (long)CURL_HTTP_VERSION_2TLS);
        curl_easy_setopt(hnd, CURLOPT_CUSTOMREQUEST, "POST");
        curl_easy_setopt(hnd, CURLOPT_FTP_SKIP_PASV_IP, 1L);
        curl_easy_setopt(hnd, CURLOPT_TCP_KEEPALIVE, 1L);
        curl_easy_setopt(hnd, CURLOPT_HTTPHEADER, headers);
        curl_easy_setopt(hnd, CURLOPT_WRITEFUNCTION, writecallback);
        curl_easy_setopt(hnd, CURLOPT_WRITEDATA, &readbuffer);

        ret = curl_easy_perform(hnd);
        if(ret != CURLE_OK)
        {
            printf("curl_easy_perform() bad: %s\n", curl_easy_strerror(ret));
        }
        else
        {
            cout << "readbuffer: '" << readbuffer << "'" << endl;
        }
        curl_easy_cleanup(hnd);
        hnd = NULL;
        curl_slist_free_all(headers);
        headers = NULL;
    }
    curl_global_cleanup();
}
