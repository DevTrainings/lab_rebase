#include <cstdint>
#include <cstddef>

/*
 * Get absolute value of n, supports only positive numbers.
 *
 * So don't pass anything negative in here.
 */
int64_t abs(int64_t n) {
	if (n > 0) {
		return n;
	} else {
		return -n;
	}
}

int main(int, char**) {
	return 0;
}
