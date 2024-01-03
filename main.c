#include <stdio.h>
#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

 int main()
{
	//int fd;
	//fd = open("test.txt", O_RDWR);
	//write(fd, "Hello", 5);

	//strrchr
	/*char s1[] = "nazli";

	printf("%s", ft_strrchr(s1, 2));*/

	//split
	/*char *a = "nazli ogulcan durkan";
	char **result = ft_split(a, ' ');
	int i = 0;
	while (i < 3)
	{
		printf("%s\n", result[i]);
		i++;
	}*/
	//calloc
	/*int i = 0;
	int	sayac;
	int	*ptr;
	sayac = 10;
	ptr = ft_calloc(sayac, sizeof(int));
	while(i < sayac)
	{
		printf("%d\n", *ptr);
		i++;
	}*/
	//calloc
	/*char *ptr = ft_calloc(6, sizeof(char));
	ptr = "nazli";
	printf("%s\n", ptr);*/

	/*int a = 12;
	int b = -12;
	printf("%s\n", ft_itoa(a));
	printf("%s", ft_itoa(b));*/

	//striteri
	/*void mytoupper()
	{
	printf("Fonksiyon çalıştı");

	}

	int main()
	{	char str[] = "same";	
	ft_striteri(str, mytoupper);		
	return 0;
	}  */

	/*char a[] = "nazli";
	char b[] = "anapa";
	printf("%zu,%c", ft_strlcat(a, b, 3));*/

	/*char **str = ft_split("nazli anapa giresun", ' ');
	int i = 0;
	while(str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	ft_free_all(str, 4);*/

	// int fd;
	// fd = open("test.txt", O_RDWR);
	// fd2 = open("test.txt", O_RDWR);
	// fd3 = open("test.txt", O_RDWR);
	// fd4 = open("test.txt", O_RDWR);
	// write(fd, "Nazli", 5);

	//listsize
	/*char *str1 = "elem1";
	char *str2 = "elem2";

	t_list	*elem1;
	t_list	*elem2;

	elem1 = malloc(sizeof(t_list));
	elem2 = malloc(sizeof(t_list));

	elem1 -> next = elem2;
	elem2 -> next = 0;

	elem1 -> content = str1;
	elem2 -> content = str2;

	int i = ft_lstsize(elem1);
	printf("%d", i);*/

	
	char *a = "elem1";
	char *b = "elem2";

	t_list elem1;
	t_list elem2;

	elem1 = malloc(sizeof(t_list));
	elem2 = malloc(sizeof(t_list));

	elem1 -> next = elem2;
	elem2 -> next = 0;

	elem1 -> content = a;
	elem2 -> content = b;

	int i = ft_lstsize(elem1);
	printf("%d", i);
}

