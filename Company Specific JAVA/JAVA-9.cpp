#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char a[50];
    scanf("%s", a);
    for (i = 0; (a[i] != '\0'); i++)
    {
        if (a[i] != a[i + 2] || a[i + 2] == '\0' || a[i] == a[i + 1])
            break;
    }
    if ((a[i + 2] == '\0'))
        printf("Yes");
    else
        printf("No");
    return 0;
}