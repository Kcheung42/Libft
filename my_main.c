/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:15:00 by kcheung           #+#    #+#             */
/*   Updated: 2017/01/08 00:02:04 by kcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 					Functions to Test:
** void		ft_lstpush_end(t_list **begin, t_list *node);
** void		ft_lstprint(t_list *list);
** int		ft_lstsize(t_list *begin_list);
** t_list	*ft_lstat(t_list *begin_list, unsigned int nbr);
*/


#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int	fd;
	int	ret;
	char	*line;

	fd = 0;
	/* get_next_line(fd, &line); */
	/* printf("line:%s\n", line); */
	
	while(get_next_line(fd,&line) > 0)
	{
		printf("line:%s\n", line);
	}
	get_next_line(fd,&line);
	printf("line:%s\n", line);

	get_next_line(fd,&line);
	printf("line:%s\n", line);
	get_next_line(fd,&line);
	printf("line:%s\n", line);
	/* int i; */
	/* t_list **begin_list; */
	/* t_list *list; */
	/* t_list *new_node; */
	/* t_list *new2; */
	/* char *c; */
    /*  */
	/* begin_list = &list; */
	/* list = ft_lstnew("1ST",4); */
    /*  */
	/* printf("==========Initial list==================\n"); */
	/* printf("size of list is:\n %d\n", ft_lstsize(list)); */
	/* printf("Print Contents:\n"); */
	/* ft_lstprint(list); */
	/* ft_putchar('\n'); */
    /*  */
	/* i = 0; */
	/* c = "ABCDEFGHIJKLMNOP"; */
	/* while(i < 10) */
	/* { */
	/* 	new_node = ft_lstnew(c, 1); */
	/* 	ft_lstpush_end(begin_list, new_node); */
	/* 	i++; */
	/* 	c++; */
	/* } */
    /*  */
	/* printf("==========test ft_lstsize && ft_lstprint==================\n"); */
	/* printf("size of list is:\n %d\n", ft_lstsize(list)); */
	/* printf("Print Contents:\n"); */
	/* ft_lstprint(list); */
	/* ft_putchar('\n'); */
    /*  */
	/* printf("==========test ft_lstpush_end==================\n"); */
    /*  */
	/* ft_lstpush_end(begin_list, ft_lstnew("111", 3)); */
	/* ft_lstpush_end(begin_list, ft_lstnew("222", 3)); */
	/* ft_lstpush_end(begin_list, ft_lstnew("333", 3)); */
	/* printf("size of list is:\n %d\n", ft_lstsize(list)); */
	/* printf("Print Contents:\n"); */
	/* ft_lstprint(list); */
	/* ft_putchar('\n'); */
    /*  */
	/* 	printf("==========test ft_lstat==================\n"); */
    /*  */
	/* i = 0; */
	/* while (i < ft_lstsize(list)) */
	/* { */
	/* 	new_node = ft_lstat(list, i + 1); */
	/* 	printf("Node [%d] is [%s]\n", i, new_node->content); */
	/* 	i++; */
	/* } */
}
