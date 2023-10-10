
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *topic = "a/1234567890ab/usb/2feb1083-f99c-48bf-96e0-1ce90b9a32fd/Thing/7c4eaebb-d870-4a4f-b049-65c6c46c6706/action";
    char *prefix = "a/1234567890ab/usb/";
    char *space = "2feb1083-f99c-48bf-96e0-1ce90b9a32fd";

    size_t indx = strlen(prefix) + strlen(space) + sizeof("Thing") + 1;

    char *ending = &topic[indx];

    printf("%s\n", ending);

    char *end = strchr(ending, '/');

    char just_id[1000];
    strncpy(just_id, ending, end-ending);
    printf("%s\n", just_id);

    printf("%.*s\n", end-ending, ending);

    return 0;
}