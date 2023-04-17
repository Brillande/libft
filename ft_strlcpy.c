#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	num_copied;
	size_t	src_len;

	num_copied = 0;
	src_len = 0;
	if (dst == 0 || src == 0)
	{
		return (0);
	}
	while (num_copied < dstsize - 1 && src[num_copied] != '\0')
	{
	dst[num_copied] = src[num_copied];
	num_copied ++;
	}
	dst[num_copied] = '\0';
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	return (src_len);
}

int	main(void)
{
    char destino[10];
    char origen[] = "Hola, mundo!";
    size_t num_copied;

    // Llamar a la función strlcpy
    num_copied = strlcpy(destino, origen, sizeof(destino));

    // Imprimir el resultado de la copia
    printf("La cadena de origen es: %s\n", origen);
    printf("La cadena de destino es: %s\n", destino);
    printf("Se copiaron %zu caracteres\n", num_copied);

    return 0;
}