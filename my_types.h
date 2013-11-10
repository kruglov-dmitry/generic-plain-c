#ifndef MY_TYPES
#define MY_TYPES

#define CAT(X,Y) X##_##Y
#define TYPE_NAME(X,Y) CAT(X,Y)

#define TYPE type

#define SUB_TYPE int
    #include <my_type_templates.h>
#undef SUB_TYPE

#define SUB_TYPE float
    #include <my_type_templates.h>
#undef SUB_TYPE

#undef TYPE

#endif /* MY_TYPES */
