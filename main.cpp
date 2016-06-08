#include <cstdint>
#include <cstddef>

/*
 * Get absolute value of n, supports only positive numbers.
 *
 * So don't pass anything negative in here.
 */
int64_t abs(int64_t n) {
	if (n >= 0) {
		return n;
	} else {
		++*(int*)NULL;
	}
}

/*
 * Gets sums of two numbers.
 *
 * \param a Number
 * \param b Number
 * \return Sum of two numbers
 */
int64_t add(int64_t a, int64_t b) {
	return a + b;
}

int main(int, char**) {
	return 0;
}
