/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:25:02 by yfellipe          #+#    #+#             */
/*   Updated: 2023/10/23 13:25:03 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int ft_strlen(const char *s) {
    int len = 0;

    while (s[len] != '\0')
        len++;

    return len;
}

char *ft_strchr(const char *s, int c)
{
	if (!*s)
		return (0);
	while (*s != '\0')
	{
		if(*s == c) // int c permite encontrar na tabela ascii
			return (char *)s;
		
		s++;
	}
	if (c == '\0')
        	return (char *)s;
	return (0);
}

char *ft_strtrim(const char *s1, const char *set) {
    int i = 0;
    int j;
    int trilen = 0;

    trilen = ft_strlen(s1) - ft_strlen(set);

    char *trimmed = (char *)malloc(sizeof(char) * (trilen + 1));

    if (trimmed == NULL)
        return NULL;

    i = 0;
    j = 0;

    while (s1[i] != '\0') {
        if (ft_strchr(set, s1[i]) == NULL) {
            trimmed[j] = s1[i];
            j++;
        }
        i++;
    }

    trimmed[j] = '\0'; // Null-terminate the trimmed string

    return trimmed;
}
/*
#include <stdio.h>

int main() {
const char s1[] = "   Hello, world!   ";
    const char set[] = "He";
    char *trimmed = ft_strtrim(s1, set);

    if (trimmed != NULL) {
        printf("Trimmed string: \"%s\"\n", trimmed);
        free(trimmed);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
