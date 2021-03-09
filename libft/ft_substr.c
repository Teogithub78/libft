/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthibaut <tthibaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:00:21 by tthibaut          #+#    #+#             */
/*   Updated: 2021/03/06 14:57:54 by tthibaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = start;
	while (s[j] && i < len)
	{
		j++;
		i++;
	}
	j = 0;
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (0);
	while (j < i)
	{
		str[j++] = s[start++];
	}
	str[j] = '\0';
	return (str);
}
