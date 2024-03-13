#include "lists.h"

/**
 *  check_cycle - Checks If lll Has A Cycle
 *
 *  @list: listint_
 *
 *  Return: 0 If No Cycle, 1 If There Is A Cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL || list->next == NULL)
	{
		return (0);
	}
	slow = list;
	fast = list->next;

	while (slow && fast->next && fast->next->next)
	{
		if (slow == fast)
		{
			return (1);
		}
		fast = fast->next->next;
		slow = slow->next;
	}
	return (0);
}
