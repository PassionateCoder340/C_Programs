#include <stdio.h>

typedef struct {
    int value;
} MyObject;

void modify_object(MyObject *obj) {
    obj->value = 5;  // This change affects the original object
}

int main() {
    MyObject my_obj;
    my_obj.value = 10;
    modify_object(&my_obj);
    printf("%d\n", my_obj.value);  // Output: 5 (changed)
    return 0;
}
