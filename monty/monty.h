instruct_func get_op_func(char *str);

/*Fuxntions Monty*/
void _pall(stack_t **stack, unsigned int line_number);
void _push(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void _rotl(stack_t **stack, unsigned int line_number);
void _rotr(stack_t **stack, unsigned int line_number);

/*Functions string ascci */
void _pchar(stack_t **stack, unsigned int line_number);
void _pstr(stack_t **stack, unsigned int line_number);

/*Functions math*/
void _sub(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void _mul(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void _mod(stack_t **stack, unsigned int line_number);

/*Utility functions*/
void free_dlistint(stack_t *head);
void dobfree(stack_t **stack);
void dobfree2(stack_t **stack);
int _isalpha(int c);
#endif
