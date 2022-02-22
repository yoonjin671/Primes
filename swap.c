#include "list.h"
// XOR swap
void swap ( ll * a , ll * b ) {
	if ( * a == * b ) {
		return;
	}

	* a = * a ^ * b;
	* b = * a ^ * b;
	* a = * a ^ * b;
}

