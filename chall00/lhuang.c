#include <stdlib.h>

int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_check_from_reverse(char *s1, char *s2, int necklace_len, int s2_start_pos)
{
	int i;

	i = 0;
	while (i < necklace_len)
	{
		if (s1[i] != s2[s2_start_pos])
			return (0);
		s2_start_pos++;
		if (s2_start_pos == necklace_len)
			s2_start_pos = 0;
		i++;
	}
	return (1);
}

int	ft_check_from_pos(char *s1, char *s2, int necklace_len, int s2_start_pos)
{
	int i;

	if (s2_start_pos != 0)
		return (ft_check_from_reverse(s1, s2, necklace_len, s2_start_pos));
	i = 0;
	while (i < necklace_len)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_necklace(char *s1, char *s2)
{
	int i;
	int necklace_len;
	int same;

	if (s1 == NULL || s2 == NULL)
		return (0);
	necklace_len = ft_strlen(s1);
	same = 0;
	if (necklace_len != ft_strlen(s2))
		return (0);
	i = 0;
	while (!same && i < necklace_len)
	{
		if (s1[0] == s2[i])
			same = ft_check_from_pos(s1, s2, necklace_len, i);
		i++;
	}
	if (necklace_len == 0)
		return (1);
	return (same);
}
