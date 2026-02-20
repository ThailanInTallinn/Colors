#include "color_utils.h"
#include <stdbool.h>
#include <stdio.h>


struct color make_color(int red, int green, int blue){
	int new_red = red < 0 ? 0 : red > 255 ? 255 : red;
	int new_green = green < 0 ? 0 : green > 255 ? 255 : green;
	int new_blue = blue < 0 ? 0 : blue > 255 ? 255 : blue;

	return ((struct color) {.red = new_red, .green = new_green, .blue = new_blue});
}

int getRed(struct color c){
	return c.red;
}

bool equal_color(struct color color1, struct color color2){
	return (color1.red == color2.red && color1.green ==  color2.green && color1.blue == color2.blue);
}

struct color brighter(struct color c){
	int *ptr, temp = 0;

	if((c.red + c.green + c.blue) == 0)
		return ((struct color) {.red = 3, .green = 3, .blue = 3});

	for(ptr = &c; ptr != &c.blue + 1; ptr++){
		if(*ptr > 0 && *ptr < 3)
			*ptr = 3;
		temp = *ptr / 0.7;
		if(temp > 255)
			temp = 255;
		*ptr = temp;
	}
	return c;
}
