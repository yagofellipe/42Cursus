#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int countWords(const char *s, char c) {
    int count = 0;
    int in_word = 0;

    while (*s) {
        if (*s == c) {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            count++;
        }
        s++;
    }

    return count;
}

static char *strndup(const char *str, size_t n) {
    char *dup = (char *)malloc(n + 1);
    if (dup != NULL) {
        strncpy(dup, str, n);
        dup[n] = '\0';
    }
    return dup;
}

char **ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	num_words;
	int	word_len;
	char	**ptr;
	
	if (!s)
        return NULL;
    num_words = countWords(s, c);
    **ptr = (char **)malloc((num_words + 1) * sizeof(char *));
    if (ptr == NULL)
        return NULL;
    i = 0;
    j = 0;    
    while (s[i] && j < num_words) {
        while (s[i] == c && s[i])
            i++;
        if (s[i] != c) {
            word_len = 0;
            while (s[i + word_len] && s[i + word_len] != c)
                word_len++;
            ptr[j] = strndup(&s[i], word_len);
            if (!ptr[j])
                return NULL;            
            j++;
            i += word_len;
        }
    }
    ptr[j] = NULL; // Adicione um ponteiro NULL para indicar o final do array de strings.
    
    return (ptr);
}

int main() {
    const char *input = "Esta é uma string que você deseja dividir.";
    char delimiter = ' ';

    char **tokens = ft_split(input, delimiter);

    if (tokens) {
        int i = 0;
        while (tokens[i]) {
            printf("Token %d: %s\n", i, tokens[i]);
            free(tokens[i]);
            i++;
        }

        free(tokens);
    } else {
        perror("Erro na função ft_split");
    }

    return 0;
}
