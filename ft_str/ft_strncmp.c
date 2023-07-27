int	strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while((s1[i] && s2[i]) && (i < n) && !j)
	{
		j = ((size_t)s1[i] - (size_t)s2[i]);
		i++;
	}
	if ((i < n) && s1[i] != s2[i] && !j)
		j = ((size_t)s1[i] - (size_t)s2[i]);
	return (j);
}
