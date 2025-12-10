char *_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    /* Find end of dest string */
    while (dest[i] != '\0')
    {
        i++;
    }

    /* Append src to dest */
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* Add the terminating null byte */
    dest[i] = '\0';

    return (dest);
}
