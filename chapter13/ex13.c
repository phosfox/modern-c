#include <string.h>
#include <stdio.h>

void build_index_url(const char *domain, char *index_url)
{
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}

int main(int argc, char const *argv[])
{
    char domain[] = "knking.com";
    char index_url[256];
    build_index_url(domain, index_url);
    puts(index_url);
    return 0;
}
