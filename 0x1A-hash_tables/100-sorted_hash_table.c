#include "hash_tables.h"
/* Task 100 0x1A. C - Hash tables */

/**
 * shash_table_create - creates a sorted hash table
 * @size: Size of the sorted hash table
 *
 * Return: pointer to a shash_table_t
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *new;
	unsigned long int i;

	if (size == 0)
	{
		return (NULL);
	}

	new = malloc(sizeof(shash_table_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->size = size;

	new->array = malloc(size * sizeof(shash_node_t *));

	if (new->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}
    new->shead = NULL;
    new->stail = NULL;

	return (new);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: Sorted Hash Table
 * @key: Key
 * @value: Value
 *
 * Return: 1 if success 0 if not
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index, cmp, cmp2;
	shash_node_t *new, *tmp, *tmp2;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (key[0] == '\0')
		return (0);

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);
	index = key[0];
	if (ht->array[index] == NULL)
	{
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = NULL;
		ht->array[index] = new;
        if (ht->shead == NULL)
        {
            new->snext = NULL;
            new->sprev = NULL;
            ht->shead = new;
            ht->stail = new;
        }
        else
        {
            cmp = ht->shead->key[0];
            cmp2 = ht->stail->key[0];
            if (cmp > index)
            {
                tmp = ht->shead;
                new->sprev = NULL;
                new->snext = tmp;
                tmp->sprev = new;
                ht->shead = new;
            }
            else if (cmp2 < index)
            {
                tmp = ht->stail;
                new->sprev = tmp;
                new->snext = NULL;
                tmp->snext = new;
                ht->stail = new;
            }
            else
            {
                tmp = ht->shead->snext;
                cmp = tmp->key[0];
                while(1)
                {
                    if (cmp > index)
                    {
                        tmp2 = tmp->sprev;
                        new->sprev = tmp2;
                        new->snext = tmp;
                        tmp2->snext = new;
                        tmp->sprev = new;
                        break;
                    }
                    tmp = tmp->snext;
                    cmp = tmp->key[0];
                }
            }
        }
	}
	else
	{
		tmp = ht->array[index];
		
		while (tmp)
		{
			if (strcmp(tmp->key, (char *)key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				free(new);
				return (1);
			}
			tmp = tmp->next;
		}
		
		tmp = ht->array[index];		
		new->key = strdup(key);
		new->value = strdup(value);
		
		if (tmp->key[1] == '\0')
			cmp = 0;
		else
			cmp = tmp->key[1];
		
		if (key[1] == '\0')
			cmp2 = 0;
		else
			cmp2 = key[1];
		
		if (cmp > cmp2)
		{
			tmp2 = tmp->sprev;
			new->sprev = tmp->sprev;
			new->snext = tmp;
			new->next = tmp;
			tmp->sprev = new;
			if (tmp2)
				tmp2->snext = new;
			if (ht->shead == tmp)
				ht->shead = new;
			ht->array[index]= new;
		}
		else
		{
			while (1)
			{
				if (tmp->next == NULL)
				{
					tmp->next = new;
					new->next = NULL;
					new->sprev = tmp;
					tmp2 = tmp->snext;
					tmp->snext = new;
					if (tmp2)
					{
						new->snext = tmp2;
						tmp2->sprev = new;
					}
					if (ht->stail == tmp)
						ht->stail = new;
					break;
				}
				else
				{
					tmp = tmp->next;
					if (tmp->key[1] == '\0')
						cmp = 0;
					else
						cmp = tmp->key[1];
		
					if (key[1] == '\0')
						cmp2 = 0;
					else
						cmp2 = key[1];
					
					if (cmp > cmp2)
					{
						tmp2 = tmp->sprev;
						new->sprev = tmp->sprev;
						new->snext = tmp;
						new->next = tmp;
						tmp->sprev = new;
						tmp2->snext = new;
						tmp2->next = new;
						break;
					}
				}
			}
			
		}
	}
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: Hash table
 * @key: Key
 *
 * Return: Value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    char *value;
	unsigned long int index;
	shash_node_t *tmp;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	if (key[0] == '\0')
	{
		return (NULL);
	}

	index = key[0];

	tmp = ht->array[index];

	if (tmp == NULL)
		return (NULL);

	while (tmp)
	{
		if (_strcmp(tmp->key, (char *)key) == 0)
		{
			value = tmp->value;
			return (value);
		}
		tmp = tmp->next;
	}

	return (NULL);
}

/**
 * shash_table_print -  prints a sorted hash table
 * @ht: sorted Hash table
 *
 * Return: Void
 */
void shash_table_print(const shash_table_t *ht)
{
    /*unsigned long int i;*/
	shash_node_t *tmp;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	tmp = ht->shead;
	while (tmp)
	{
		if (flag != 0)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext, flag = 1;		
	}
	/*for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (flag != 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next, flag = 1;
		}
	}*/
	printf("}\n");
}

/**
 * shash_table_print_rev -  prints a sorted hash table in reverse
 * @ht: sorted Hash table
 *
 * Return: Void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *tmp;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
    tmp = ht->stail;
	while (tmp)
	{
		if (flag != 0)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev, flag = 1;		
	}
	printf("}\n");
}

/**
 * shash_table_delete -  delete a sorted hash table
 * @ht: Hash table
 *
 * Return: Void
 */
void shash_table_delete(shash_table_t *ht)
{
    unsigned long int i;
	shash_node_t *tmp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = tmp->next;
		}
		free(tmp);
	}
	free(ht->array);
	free(ht);
}

/**
 * _strcmp - Compares two string
 * @s1: Fisrt string
 * @s2: Second string
 * Description: Compares two strings
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int p;

	p = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			p = s1[i] - s2[i];
			break;
		}
		i++;
	}

	return (p);
}