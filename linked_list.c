#include <stdlib.h>
#include <stdint.h>
#include <stdint.h>

struct node
{
    int8_t valor;
    struct node *prox;
};

struct list
{
    struct node *head;
    int32_t len;
};

struct list new_list(void)
{
    return (struct list){.head = NULL, .len = 0};
}