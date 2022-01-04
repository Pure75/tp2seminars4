struct void_arr
{
	void *data;
	// Size of each item
	
	size_t smemb;
	// Number of items
	
	size_t nmemb;
};

void *get_item(struct void_arr *arr, size_t index){
	if (arr->nmemb >= index) return NULL;
	return *(arr->data + (index*smemb));
	}
}

void set_item(struct void_arr *arr, void *elem, size_t index){
	void *tmp = arr->data;
	tmp += (index * smemb);
	*tmp = *elem;
}

int compare(struct void_arr *arr, size_t item, size_t other){
	void *tmp1 = arr->data + (item * smemb);
	void *tmp2 = arr->data + (other * smemb);
	for(size_t i = 0, i < smemb, i++){
		if (*tmp1 > *tmp2) return 1;
		if (*tmp1 < *tmp2) return -1;
		tmp1++;
		tmp2++;
	}
	return 0;
}

struct void_arr *bubble_sort(struct void_arr *arr, int(*compare) (void *item, void*other)){
	for(size_t i = 0; i < nmemb - 1; i++){
		for(size_t j = 0; j < nmemb - i - 1; j++){
			*item = arr->data + (j * smemb);
			*other = arr->data + ((j+1) * smemb);
			if(compare(item,other) > 0){
				void *tmp = *(item + j);
				*(item + j) = *(other + j + 1);
				*(other + j + 1) = *tmp;}
		}
	}
	return arr;
} 
