/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proberto <proberto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:57:29 by proberto          #+#    #+#             */
/*   Updated: 2021/06/07 14:11:53 by proberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	prefixtrim(const char *s1, const char *set, size_t len);
static size_t	suffixtrim(const char *s1, const char *set, size_t len_s1,
					size_t len_set);
static char		*makestrtrim(const char *s1, char *strtrim, size_t start,
					size_t end);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	len_set;
	size_t	len_strtrim;
	size_t	offsets[2];
	char	*strtrim;

	if (!s1 || !set)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	offsets[0] = prefixtrim(s1, set, len_set);
	offsets[1] = 0;
	len_strtrim = 1;
	if (offsets[0] != len_s1)
	{
		offsets[1] = suffixtrim(s1, set, len_s1 - 1, len_set);
		len_strtrim = len_s1 - offsets[0] - (len_s1 - offsets[1]) + 1;
	}
	strtrim = (char *) malloc(len_strtrim * sizeof(char));
	if (!strtrim)
		return (NULL);
	makestrtrim(s1, strtrim, offsets[0], len_strtrim);
	return (strtrim);
}

static size_t	prefixtrim(const char *s1, const char *set, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (*(s1 + i))
	{
		j = 0;
		while (j < len)
		{
			if (s1[i] == set[j])
				j = len + 1;
			else
				j++;
		}
		if (j == len)
			return (i);
		i++;
	}
	return (i);
}

static size_t	suffixtrim(const char *s1, const char *set, size_t len_s1,
size_t len_set)
{
	size_t	i;
	size_t	j;
	int		stop;

	i = len_s1;
	stop = 1;
	while (stop > 0)
	{
		j = 0;
		while (j < len_set)
		{
			if (s1[i] == set[j])
				j = len_set + 1;
			else
				j++;
		}
		if (j == len_set)
			return (i);
		i--;
		if (i == 0)
			stop = -1;
	}
	return (i);
}

static char	*makestrtrim(const char *s1, char *strtrim, size_t start,
size_t end)
{
	size_t	i;

	i = 0;
	while (i < end)
	{
		strtrim[i] = s1[start + i];
		i++;
	}
	strtrim[i] = '\0';
	return (strtrim);
}
