/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proberto <proberto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:33:39 by proberto          #+#    #+#             */
/*   Updated: 2021/05/31 11:16:43 by proberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	len_s3;
	char	*s3;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	len_s3 = len_s1 + len_s2 + 1;
	s3 = (char *) malloc(len_s3 * sizeof(char));
	ft_memcpy(s3, s1, len_s1);
	len_s3 = ft_strlcat(s3, s2, len_s3);
	return (s3);
}
