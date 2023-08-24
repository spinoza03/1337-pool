/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:54:57 by iallali           #+#    #+#             */
/*   Updated: 2023/08/19 12:55:04 by iallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (int x,char left,char midle,char right)
{
    int a;
    a = 1;
    while (a <= x) 
    {
        if (a == 1)
            write(1, &left, 1);
        else if (a == x)
            write(1, &right, 1);
        else
            write(1, &midle, 1);
        a++;
    }
    write (1, "\n", 1);
}

void    rush01(int x, int y)
{
      if (x <= 0 || y <= 0)
    {
        write (1, "please enter a positive number\n", 31);
    }
    int b;
    b = 1;
    while (b <= y)
    {
        if (b == 1)
            ft_putchar (x, '/', '*', '\\');
        else if (b == y)
            ft_putchar (x, '\\', '*', '/');
        else
            ft_putchar (x, '*', ' ', '*');
        b++;
     }
}
int main()
{
    int width = 4;
    int height = 6;

    rush01(width, height);

    return 0;
}
