/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_rush.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 01:25:39 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/05 01:25:45 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
 
    void  put(char c)
    {
      write(1, &c, 1);
    }
    
    void  rush(int x, int y)
    {
      int i;
      int j;

      i = 1;
      j = 1;
      while (i <= y)
      {
        j = 1;
        while (j <= x)
       {
          if ((j == 1 && i == 1) || ((i == y && j == x) && i != 1 && j != 1))
            put('/');
          else if (i != 1 && j != 1 && i != y && j != x)
            put(' ');
          else if ((j != 1 && j != x) || (i != 1 && i != y) ||  ((j > 1 && j < x && i == y)) || ((i > 1 && i < y) && j == x))
            put('*');
          else if ((j == x && i == 1)||(j == 1 && i == y))
            put('\\');
          j++;
        }
        put('\n');
        i++;
      }
    }
    
    int main() {
      rush(4, 4);
      return 0;
    }
