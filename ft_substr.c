/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proberto <proberto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 22:03:30 by proberto          #+#    #+#             */
/*   Updated: 2021/06/07 12:43:17 by proberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*substr;

	if (!s)
		return (NULL);
	if (start >= (unsigned int) ft_strlen(s))
		return (ft_strdup(""));
	size = len + 1;
	substr = (char *) malloc(size * sizeof(char));
	if (!substr)
		return (NULL);
	size = ft_strlcpy(substr, &s[start], size);
	return (substr);
}
