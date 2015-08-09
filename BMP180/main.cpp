//
//  Main file
//  ----------------------------------
//  Developed with embedXcode
//
//  BMP180
//  Created by jeroenjonkman on 07-07-15
//   


#include "WProgram.h"
#include "BMP180.pde"

int main(void)
{
    init();
	setup();
	for (;;) loop();
	return 0;
}
