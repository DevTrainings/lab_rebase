#include <cstdint>
#include <cstddef>

/*
 * Gets absolute value.
 *
 * \param n Number
 * \return Absolute value of n
 */
int64_t abs(int64_t n) {
	return n < 0 ? -n : n;
}

int main(int, char**) {
	return 0;
}
