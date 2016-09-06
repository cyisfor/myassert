#include "myassert.h"

#include <error.h>
#include <errno.h>

void assertp(const char* file, int line, const char* code, int test) {
	if(!test) {
		error(23,errno,"Assert fail %s:%d (%s)",file,line,code);
	}
}

#define assert(test) assertp(__FILE__,__LINE__,#test,(int)(test))
