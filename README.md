# Color.h
Terminal Styling with C

```c
#include <stdio.h>
#include <string.h>
#include "color.h"

int main() {
printf("%s\n", rgb("I am red", 255, 0, 0));

char* purple = rgb("I could be blue?", 0, 127, 255);

puts(purple);

puts(bold(rgb("I AM STRONG AND YELLOW!", 255, 255, 204)));

char italian[1024] = "";
strcat(italian, italic(rgb("I a", 0, 140, 69)));
strcat(italian, italic(rgb("m Ital", 244, 245, 240)));
strcat(italian, italic(rgb("ian.", 205, 33, 42)));
puts(italian);

char* undb = munderline(rgb_bg(rgb("I am a yellow underlined text with a blue background", 255, 255, 0), 0, 0, 255));
printf("%s\n", undb);
free(undb);
return 0;
}
```

![sample](https://github.com/spiderites/color.h/blob/main/sample.png) 
