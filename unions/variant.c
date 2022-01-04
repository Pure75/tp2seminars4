#include <string.h>

#include "variant.h"

void variant_display(const struct variant *v)
{
    switch(v->type){
	case TYPE_INT:
		printf("%i", v->value->int_v);
	case TYPE_FLOAT:
		printf("%f", v->value->float_v);
	case TYPE_CHAR:
		printf("%c", v->value->char_v);
	case TYPE_STRING:
		printf("%s", v->value->*(str_v));
	default:
		break;
    }
}

int variant_equal(const struct variant *first, const struct variant *second)
{
    if (first->type == seconde->type && first->value == second->value) return 1;
    return 0;
}

size_t variant_find(const struct variant *array, size_t len, enum type type,
                 union type_any value)
{
    size_t res = 0;
    for(size_t = 0; i < len; i++){
	if(array->type == type && array->value == value ){
		res++;
		array = array + 1; 
	}
    }
    return res;
}

int variant_is_sorted(const struct variant *array, size_t len)
{
    //TODO
    return 0; //TO DELETE
}

int variant_sum(const struct variant *array, size_t len)
{
    //TODO
    return 0; //TO DELETE
}

