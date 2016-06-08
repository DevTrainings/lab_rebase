#include <cstdint>
#include <cstddef>

/*
 * Get absolute value of n.
 */
int64_t abs(int64_t n) {
	return n < 0 ? -n : n;
}

int main(int, char**) {
	return 0;
}
