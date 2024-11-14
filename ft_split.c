/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:40:20 by efranco           #+#    #+#             */
/*   Updated: 2024/11/08 17:26:08 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_size(const char *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i] != '\0')
	{
		size++;
		i++;
	}
	return (size);
}

int	ft_count_s(const char *s, char c)
{
	int	flag;
	int	i;
	int	count;

	flag = 0;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		if (s[i] == c && flag == 1)
			flag = 0;
		i++;
	}
	return (count);
}

char	*ft_strndup(const char *src, int j, int n)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * n + 1);
	if (!str)
		return (NULL);
	while (i < n)
	{
		str[i] = src[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		index;
	int		word_len;
	char	**array;

	i = 0;
	index = 0;
	array = malloc(sizeof(char *) * (ft_count_s(s, c) + 1));
	if (!array)
		return (NULL);
	while (s[i] != '\0' && index < ft_count_s(s, c))
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			word_len = ft_word_size(s, c, i);
			array[index] = ft_strndup(s, i, word_len);
			i += word_len;
			index++;
		}
	}
	array[index] = NULL;
	return (array);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototype de la fonction à tester
char **ft_split(const char *s, char c);

int main() {
    // Chaîne de caractères à tester
    const char *test_str = "Bonjour;monde;test;de;separation";
    char delimiter = ';';

    // Appel de la fonction
    char **result = ft_split(test_str, delimiter);
    
    // Vérification du résultat
    if (result == NULL) {
        printf("Erreur d'allocation mémoire ou chaîne vide.\n");
        return 1;
    }

    // Affichage des sous-chaînes
    printf("Résultat de la séparation :\n");
    for (int i = 0; result[i] != NULL; i++) {
        printf("Segment %d : %s\n", i, result[i]);
        free(result[i]);  // Libération de chaque sous-chaîne
    }

    free(result);  // Libération du tableau de pointeurs
    return 0;
}
*/
