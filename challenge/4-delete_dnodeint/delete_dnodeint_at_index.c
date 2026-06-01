#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Supprime le nœud à un index donné
 * @head: Double pointeur vers la tête de la liste
 * @index: Index du nœud à supprimer (commence à 0)
 *
 * Return: 1 si succès, -1 si échec
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    current = *head;

    # 1. Si on doit supprimer le tout premier nœud (index 0)
    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    # 2. On avance jusqu'au nœud à l'index demandé
    for (i = 0; current != NULL && i < index; i++)
    {
        current = current->next;
    }

    # Si l'index est hors des limites de la liste
    if (current == NULL)
        return (-1);

    # 3. On ajuste les pointeurs pour contourner le nœud 'current'
    if (current->prev != NULL)
        current->prev->next = current->next;

    if (current->next != NULL)
        current->next->prev = current->prev;

    # 4. On libère la mémoire du nœud supprimé
    free(current);
    return (1);
}
