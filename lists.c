#include "shell.h"

/**
 * add_node - To add a node
 * @head: Pointer to the address of the head node
 * @str: string fata of node
 * @num: Node index used for history
 *
 * Return: size of the list
 */
list_t add_node(list_t **head, const char str, int num)
{
	list_t new_node;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	_memset((void *)new_node, 0, sizeof(list_t));
	new_node->num = num;
	if (str)
	{
		new_node->str = _strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * add_node_end - Add a new node to the end of the linked list
 * @head: The address of the head node
 * @str: String field for the node
 * @num: Node ondex for history
 *
 * Return: Size of the list
 */
list_t add_node_end(list_t **head, const char *str, int num)
{
	list_t *new_node, *node;

	if (!head)
		return (NULL);

	node = *head;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	_memset((void *)new_node, 0, sizeof(list_t));
	new_node->num = num;
	if (str)
	{
		new_node->str = _strup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}

/**
 * print_list_str - Prints only the str of the linkked list
 * @h : The pointher to the first node
 *
 *Return: The size of the list
 */
size_t print_list_str(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		_puts(h->str ? h->str : "(nil)");
		_puts("\n");
		h = h->next;
	}
	return (i);
}

/**
 * delete_node_at_index - To delete node at a given index
 * @head: The adrress of the pointer of the head node
 * @index: The index of the node thas has to be deleted
 *
 * Return: 1 on success, 0 when on failure
 */
int_delete_node_at_index(list_t **head, unsigned int index)
{
	list_t *node, prev_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (0);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node->str);
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			prev_node->next = node->next;
			free(node->str);
			free(node);
			return (1);
		}
		i++;
		prev_node = node;
		node = node->next;
	}
	return (0);
}

/**
 * free_list - Frees all nodes of a linked list
 * @head_ptr: The adress of a pointer of the head node
 *
 * Return: Void
 */
void free_list(list_t **head_ptr)
{
	list_t *node, *next_node, *head;

	if (!head_ptr || !*head_ptr)
		return;
	head = *head_ptr;
	node = head;
	while (node)
	{
		next_node = node->next;
		frree(node->str);
		free(node);
		node = next_node;
	}
	*head_ptr = NULL;
}
