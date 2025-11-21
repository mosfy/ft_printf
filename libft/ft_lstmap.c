/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 01:40:07 by tfrances          #+#    #+#             */
/*   Updated: 2025/11/03 22:48:47 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node_tmp;
	t_list	*node_res;
	t_list	*node_res_head;
	void	*new_content;

	node_tmp = lst;
	node_res_head = NULL;
	while (node_tmp)
	{
		new_content = f(node_tmp->content);
		node_res = ft_lstnew(new_content);
		if (!node_res)
		{
			del(new_content);
			ft_lstclear(&node_res_head, del);
			return (NULL);
		}
		ft_lstadd_back(&node_res_head, node_res);
		node_tmp = node_tmp->next;
	}
	return (node_res_head);
}
