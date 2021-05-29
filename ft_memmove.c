/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proberto <proberto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 02:09:39 by proberto          #+#    #+#             */
/*   Updated: 2021/05/29 13:02:42 by proberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	ptr_dst = (unsigned char *) dst;
	ptr_src = (unsigned char *) src;
	if (ptr_src > ptr_dst)
		ft_memcpy(dst, src, len);
	else
		while ((int)(len--) >= 0)
			ptr_dst[len] = ptr_src[len];
	return (dst);
}
