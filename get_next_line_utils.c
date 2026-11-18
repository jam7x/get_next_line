/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaineau <bpaineau@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 18:05:37 by bpaineau          #+#    #+#             */
/*   Updated: 2026/11/12 15:55:04 by bpaineau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*res;
	size_t	l1;
	size_t	i;
	size_t	j;

	if (!s2)
		return (NULL);
	l1 = ft_strlen(s1);
	res = malloc(l1 + ft_strlen(s2) + 1);
	if (!res)
		return (free(s1), NULL);
	i = 0;
	while (i < l1)
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		res[l1 + j] = s2[j];
		j++;
	}
	res[l1 + j] = '\0';
	return (free(res), s1);
}
/*int	main(void)
{
*	char *s = ft_strjoin(NULL, "abc");
*	s = ft_strjoin(s, "def");
*	printf("%s %zu\n", s, ft_strlen(s));
*	free(s);
}*/
