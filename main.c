#include <my_types.h>

int main(int argc, char* argv[])
{
   type_int a = make_type_int(25);


   type_float b; b.data = 1.f;
   type_float c; c.data = 25.f;

   type_float d = subtract_type_float(b,c);
     
    return 0;
}
