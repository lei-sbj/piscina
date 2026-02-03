/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notas_print_combn.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:14:40 by ljesus            #+#    #+#             */
/*   Updated: 2026/02/03 19:36:45 by ljesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// substitui putchar + putnbr por print_number (print_tab)
void	ft_print_number(int *number, int n)
{
	int	i;

	i = -1; //inicia em -1 pq na sequencia tem o incremento ++i
	while (++i < n)
	{
		char	c;
		c = number[i] + '0';
		write(1, &c, 1);
	}
	if (number[0] < 10 - n)
		write(1, ", ", 2);
}

/* 
if number[0] < 10 - n) then ", "
Ex. n = 1, ultimo valor = 9,number[0] = 9,number[0] < 9 (FALSO) entao nao imprime "," pois e o [ultimo]]
Ex. n = 4, ultimo valor = 6789,number[0] = 6,number[0] < 6 (FALSO)
	penultimo valor = 5789 //A recursão funciona como um hodômetro de carro, mas com uma regra extra: o número da direita nunca pode ser menor ou igual ao da esquerda. Quando um dígito chega no 9, ele "puxa" o vizinho da esquerda para cima e se reseta para o menor valor possível permitido.
int i = ITERADOR, contador classico de loop. roda dentro de uma funcao apenas
int index = nao so conta, mas indica a profundidade da arvore de decisoes. a posicao 2 e resultado das decisoes anteriores em 1 e 0
o index passa de uma funcao, como index, para ela mesma, index +1.
Chamar as duas de forma diferente esclarece que sao funcoes dif e diminui risco de sobrescricao 
*/

void	ft_combn(int n, int index, int *number)
{
	if (index == n)
	{
		ft_print_number(number, n);
		return ;
	}
	if (index == 0)
		number[index] = 0;
	else
		number[index] = number[index - 1] + 1;
	while (number[index] <= 9)
	{
		ft_combn(n, index + 1, number);
		number[index]++;
	}
}
/*
SE index = a qntd de digitos solicitados
	ENTAO imprima o numero como esta
	e encerre a funçao ;
SE index estiver na 1a posiçao
	o digito sempre inicia em ZERO ;
SE NAO for o inicio do numero __nem o final, que ja saiu no if anterior
	o digito de inicio = digito anterior + 1 (deve ser MAIOR que o anterior) ;
ENQUANTO o digito for menor ou igual ao numero maximo
	REINICIE esta funcao apos somar 1 ao valor atual ;
*/

void	ft_print_combn(int n)
{
	int	number[9];

	if (n <= 0 || n >= 10)
		return ;
	ft_combn(n, 0, number);
}

int	main(void)
{
	ft_print_combn(5);
	return (0);
}
