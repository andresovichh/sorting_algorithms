#include "sort.h"

/**
 * insertion_sort_list - sorts a dll of ints in ascending
 * order using Insertion Sort algorithm
 * @list: the list
 */
void insertion_sort_list(listint_t **list)
{/** set index and aux */
listint_t *index, *aux;
/** check that list exists, that nodes exist, and 1+ nodes */
if (!list || !list[0] || !list[0]->next)
return;

index = (*list)->next;
while (index != NULL)
{/** whalk the list */
aux = index;

while (aux->prev && aux->n < aux->prev->n)
{ /** see image in the README.md file */
aux->prev->next = aux->next;
aux->next = aux->prev;
aux->prev = aux->next->prev;
aux->next->prev = aux;
if (aux->prev)
aux->prev->next = aux;
else
*list = aux;
if (aux->next->next)
aux->next->next->prev = aux->next;
print_list(*list);
}
/** move the index */
index = index->next;
}
}
