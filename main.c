#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char    dst[] = "";
    char    src[] = "somp";
    // printf("me: %zu \n", ft_strlcpy(dst, src, 91));

    char dst1[] = "";
    char src1[] = "somp";
    printf("sys: %zu \n", strlcpy(dst1, src1, 91));
    
    printf("me: %s \n", dst);
    printf("sys: %s \n", dst1);
}