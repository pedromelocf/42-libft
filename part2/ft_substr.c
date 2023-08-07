
#include <string.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char *substring;
	size_t counter;

	counter = 0;
	substring = malloc(sizeof(char) * len  + 1);
	if (substring == NULL)
		return (NULL);
	while(s[counter] && counter < len)
	{
		substring[counter] = s[start + counter];
		counter++;
	}
	substring[counter] = '\0';
	return (substring);
}
