/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthibaut <tthibaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:00:21 by tthibaut          #+#    #+#             */
/*   Updated: 2021/03/09 12:46:52 by tthibaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	i = 0;
	j = start;
	if (s == NULL)
		return (0);
	if (start < ft_strlen(s))
		while (s[j++] && i < len)
			i++;
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
