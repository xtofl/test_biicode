#include "sum.h"

namespace xtofl {
				int sum(int a, int b) {
								a %= 2;
								b %= 2;
								return (a + b) % 2;
				}
}
