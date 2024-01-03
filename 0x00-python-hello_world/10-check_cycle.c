#include "lists.h"

/**
 * cycle_check - check for loop in LL
 * @list: head of linked list
 *
 * Description - check loops in LL
 * Return: 1 if cycled, 0 if not
 */

int cycle_check(listint_t *list)
{
	listint_t *slow, *fast;

	if (!list)
	{
		return (0);
	}
	slow = list;
	fast = list->next;
	while (fast && slow && fast->next)
	{
		if (slow == fast)
		{
			return (1);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
