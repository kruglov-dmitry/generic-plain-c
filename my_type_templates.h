typedef struct TYPE_NAME(TYPE, SUB_TYPE) {
        SUB_TYPE data;
} TYPE_NAME(TYPE, SUB_TYPE);

#ifndef INCLUDED_IN_IMPLEMENTATION_FILE

/* if this file is included in any header - just redefine interface */
TYPE_NAME(TYPE, SUB_TYPE)
TYPE_NAME(make, TYPE_NAME(TYPE, SUB_TYPE) ) ( SUB_TYPE init_value);

TYPE_NAME(TYPE, SUB_TYPE)
TYPE_NAME(subtract, TYPE_NAME(TYPE, SUB_TYPE) ) ( TYPE_NAME(TYPE, SUB_TYPE) A, T
YPE_NAME(TYPE, SUB_TYPE) B);

/*
 *         long list of supported functions
 */

#else

/* if this file is included in implementation file, where defined flag INCLUDED_
IN_IMPLEMENTATION_FILE - generate implementaion of functions
 *  */

/*  add implementain make_* functions       */
TYPE_NAME(TYPE, SUB_TYPE)
TYPE_NAME(make, TYPE_NAME(TYPE, SUB_TYPE) ) ( SUB_TYPE init_value ) {
    TYPE_NAME(TYPE, SUB_TYPE) return_value;
    return_value.data = init_value;                    
    return return_value;
}

/*  add implementain subtract_* functions       */
TYPE_NAME(TYPE, SUB_TYPE)
TYPE_NAME(subtract, TYPE_NAME(TYPE, SUB_TYPE) ) ( TYPE_NAME(TYPE, SUB_TYPE) A, T
YPE_NAME(TYPE, SUB_TYPE) B) {
    return TYPE_NAME(make, TYPE_NAME(TYPE, SUB_TYPE) ) ( A.data - B.data );
}

#endif
