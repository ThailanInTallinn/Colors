#ifndef COLORS_UTILS_H
#define COLORS_UTILS_H
#include <stdbool.h>

	struct color {
		int red;
		int green;
		int blue;
	};

struct color make_color(int, int, int);
int getRed(struct color);
bool equal_color(struct color, struct color);
struct color brighter(struct color);


#endif
