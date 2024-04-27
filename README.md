# ft_printf

ft_printf é uma recriação da função printf em C, desenvolvida para entender melhor o funcionamento do va_args e outras funções de manipulação de argumentos variáveis.

## Funcionalidades

A função ft_printf é capaz de formatar e imprimir texto no terminal, suportando várias especificações de formato, como `%s`, `%d`, `%c`, `%x`, entre outras. Ela utiliza as seguintes funções para seu funcionamento:

- `malloc`: Aloca memória dinamicamente para armazenar os argumentos formatados.
- `free`: Libera a memória alocada dinamicamente após o uso.
- `write`: Escreve dados em um descritor de arquivo.
- `va_start`: Inicializa a lista de argumentos variáveis.
- `va_arg`: Recupera o próximo argumento da lista de argumentos variáveis.
- `va_copy`: Copia uma lista de argumentos variáveis para outra.
- `va_end`: Limpa a lista de argumentos variáveis.

## Uso

### Compilando
Você pode compilar o projeto utilizando o Makefile fornecido. Basta executar o comando ```make``` no terminal no diretório do projeto. Isso irá compilar o código fonte e criar o arquivo libftprintf.a.
#
Para usar a função ft_printf em seu projeto, inclua o cabeçalho `ft_printf.h` em seu código fonte e vincule o arquivo `libftprintf.a` durante o processo de compilação.

Exemplo de uso:

```c
#include "ft_printf.h"
#include <stdio.h>

int main() {
    ft_printf("Hello, world! %d\n", 42);
    return 0;
}
```
