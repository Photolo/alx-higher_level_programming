#include "lists.h"

/**
 * check_cycle - checks for loops in the cycle
 * @list: check linked lists
 *
 * Description - check loops in LL
 * Return: 1 if the list is cycled, 0 if it is not
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
