void assertp(const char* file, int line, const char* code, int test);
#define assert(test) assertp(__FILE__,__LINE__,#test,(int)(test))
