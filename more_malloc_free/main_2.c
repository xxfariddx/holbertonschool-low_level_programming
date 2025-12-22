#include "main.h"
#include <stdio.h>

int main(void)
{
    char *c;

    /* _malloc_checked funksiyasını çağırır */
    c = _malloc_checked(sizeof(char) * 1024);

    /* Test üçün mesaj */
    if (c != NULL)
        printf("Memory allocated successfully!\n");

    /* Yaddaşı azad edirik */
    free(c);

    return (0);
}
