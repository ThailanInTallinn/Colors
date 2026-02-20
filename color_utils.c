#include "color_utils.h"

struct color make_color(int red, int green, int blue){
	int new_red = red < 0 ? 0 : red > 255 ? 255 : red;
	int new_green = green < 0 ? 0 : green > 255 ? 255 : green;
	int new_blue = blue < 0 ? 0 : blue > 255 ? 255 : blue;

	return ((struct color) {.red = new_red, .green = new_green, .blue = new_blue});
}
