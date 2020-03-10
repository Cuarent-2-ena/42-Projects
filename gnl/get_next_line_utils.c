/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapalmer <dapalmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:59:17 by dapalmer          #+#    #+#             */
/*   Updated: 2020/03/10 17:03:28 by dapalmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

/* 
    !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    USEFUL FUNCTIONS. Modify as needed

    !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

*/

size_t	ft_strlen(const char *s)
{
	int		count;

	count = 0;
	if (!s)
		return (0);
	while (s[count])
		count++;
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (*(s++) == '\0')
			return (NULL);
	return ((char *)s);
}

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	len = -1;
	while (s1[++len])
		dest[len] = s1[len];
	dest[len] = '\0';
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2, int rd)
{
	size_t	count;
	size_t	s1_size;
	char	*tab;

	count = -1;
	s2[rd] = '\0';
	s1_size = ft_strlen(s1);
	if (!(tab = (char *)malloc((s1_size + ft_strlen(s2) + 1) * sizeof(char))))
		return (NULL);
	if (s1)
		while (s1[++count])
			tab[count] = s1[count];
	count = -1;
	if (s2)
		while (s2[++count])
			tab[s1_size + count] = s2[count];
	tab[s1_size + count] = '\0';
	/*
    if (s1)
		free(s1);
    */
	return (tab);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*tab;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup("", 0));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	if (!(tab = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < len)
	{
		tab[i] = s[start + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}