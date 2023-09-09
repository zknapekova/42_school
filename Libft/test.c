
#include <stdio.h>
#include "libft.h"
#include <ctype.h>
#include <string.h>

void ft_isalpha_test(void)
{
    char c;
    c = '6';
    printf("%d", ft_isalpha(c));
}

void ft_isdigit_test(void)
{
    char c;
    c = '5';
    printf("%d\n", ft_isdigit(c));
    printf("%d\n", isdigit(c));

}

void ft_isalnum_test(void)
{
    char c;
    c='*';
    printf("%d", ft_isalnum(c));

}

void ft_isascii_test(void)
{
    char c;
    c= 1;
    printf("%d\n", ft_isascii(c));
    printf("%d\n", isascii(c));
    printf("%d\n", ft_isprint(c));

}

void ft_strlen_test(void)
{
    char str[] = "";
    printf("%d", ft_strlen(str));
}

void ft_memset_test(void)
{
    int arr[10];
    ft_memset(arr, 0, 10*sizeof(arr[0]));
    for (int i=0; i<10; i++)
      printf("%d ", arr[i]);
}

void ft_bzero_test(void)
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    ft_bzero(str, 8);
    printf("After bzero():  %s", str);
}

void ft_memcopy_memmove_test(void)
{
    char str1[7] = "aabbcc";

    printf( "The string: %s\n", str1 );
    ft_memcpy( str1, str1, 4 );
    printf( "New string: %s\n", str1 );

    char str2[7] = "aabbcc";

    printf( "The string: %s\n", str2 );
    memmove( str2 + 2, str2, 4 );
    printf( "New string: %s\n", str2 );
}

void ft_tolower_toupper_test(void)
{
    char c = '*';
    printf("ft_toupper: %c\n", ft_toupper(c));
    printf("ft_tolower: %c\n", ft_tolower(c));
}

void    ft_strchr_test(void)
{
    const char str[] = "abcd1abc";
   const char ch = '1';
   char *ret;

   /*ret = ft_strchr(str, ch);*/
   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
}

void    ft_substr_test(void)
{
    const char str[] = "";
    char *res;
    res = ft_substr(str, 0, 3);
    printf("%s", res);
}

void    ft_strjoin_test(void)
{
    const char s1[] = "";
    const char s2[] = "";
    char *res;
    res = ft_strjoin(s1, s2);
    printf("%s", res);
}


int main(void)
{
    /*ft_isalpha_test();*/
    /*ft_isdigit_test();*/
    /*ft_isalnum_test();*/
    /*ft_isascii_test();*/
    /*ft_strlen_test();*/
    /*ft_memset_test();*/
    /*ft_bzero_test();*/
    /*ft_memcopy_memmove_test();*/
    /*ft_tolower_toupper_test();*/
    /*ft_strchr_test();*/
    ft_substr_test();
    /*ft_strjoin_test();*/
    return 0;
}


