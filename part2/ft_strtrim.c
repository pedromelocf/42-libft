
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *trimmed_string;
	size_t set_counter;
	size_t s1_len;
	size_t index;
	size_t index2;

	s1_len = 0;
	set_counter = 0;
	index = 0;
	while (s1[s1_len + set_counter])
	{
		if (s1[s1_len] == set )
			set_counter++;
		s1_len++;
	}
	trimmed_string = malloc(sizeof(char) * s1_len + 1);
	if (trimmed_string == NULL)
		return (NULL);
	while (s1[s1_len] && index < s1_len)
	{
		trimmed_string[index] = s1[s1_len - set_counter + index - 1];
		index++;
	}
	trimmed_string[index] = '\0';
	return (trimmed_string);
}
