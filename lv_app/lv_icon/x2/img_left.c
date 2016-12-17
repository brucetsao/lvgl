#include "img_conf.h"
#include "lv_conf.h"

#if USE_IMG_LEFT != 0 || (LV_APP_USE_INTERNAL_ICONS != 0 && LV_DOWNSCALE == 2)

#include <stdint.h> 
#include "misc/others/color.h"

const color_int_t img_left [] = { /*Width = 19, Height = 30*/ 
19,	/*Width*/
30,	/*Heigth*/
16,	/*Color depth = 16*/
1,	/*Flags: Transp = 1*/
2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 33808, 29582, 2016, 2016, 2016, 2016, 
2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 27501, 14791, 10565, 21162, 2016, 2016, 2016, 
2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 29582, 10565, 32, 0, 6371, 23243, 2016, 2016, 
2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 29614, 12678, 32, 0, 0, 0, 6371, 23243, 2016, 
2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 31695, 10597, 32, 0, 0, 0, 0, 0, 8452, 25356, 
2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 31695, 14791, 2113, 0, 0, 0, 0, 0, 0, 2145, 21130, 
2016, 2016, 2016, 2016, 2016, 2016, 2016, 29582, 10597, 2113, 0, 0, 0, 0, 0, 0, 0, 8452, 2016, 
2016, 2016, 2016, 2016, 2016, 2016, 29582, 12678, 32, 0, 0, 0, 0, 0, 0, 32, 8452, 23275, 2016, 
2016, 2016, 2016, 2016, 2016, 29614, 10597, 32, 0, 0, 0, 0, 0, 0, 0, 8452, 31727, 2016, 2016, 
2016, 2016, 2016, 2016, 29614, 12710, 32, 0, 0, 0, 0, 0, 0, 32, 8452, 25356, 2016, 2016, 2016, 
2016, 2016, 2016, 29614, 10597, 32, 0, 0, 0, 0, 0, 0, 0, 8452, 31727, 2016, 2016, 2016, 2016, 
2016, 2016, 29614, 12710, 32, 0, 0, 0, 0, 0, 0, 2113, 8452, 25356, 2016, 2016, 2016, 2016, 2016, 
2016, 29614, 10597, 32, 0, 0, 0, 0, 0, 0, 0, 8452, 31727, 2016, 2016, 2016, 2016, 2016, 2016, 
29614, 12678, 32, 0, 0, 0, 0, 0, 0, 32, 8452, 23275, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 
12678, 0, 0, 0, 0, 0, 0, 0, 0, 6371, 29614, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 
8484, 0, 0, 0, 0, 0, 0, 0, 0, 6371, 31727, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 
23243, 6339, 0, 0, 0, 0, 0, 0, 0, 2113, 10597, 29582, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 
2016, 21162, 6371, 0, 0, 0, 0, 0, 0, 0, 32, 14791, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 
2016, 2016, 21162, 6371, 0, 0, 0, 0, 0, 0, 0, 4226, 12710, 29614, 2016, 2016, 2016, 2016, 2016, 
2016, 2016, 2016, 23243, 8452, 0, 0, 0, 0, 0, 0, 0, 0, 12710, 2016, 2016, 2016, 2016, 2016, 
2016, 2016, 2016, 2016, 23243, 6371, 0, 0, 0, 0, 0, 0, 0, 2145, 12710, 29614, 2016, 2016, 2016, 
2016, 2016, 2016, 2016, 2016, 23243, 8452, 0, 0, 0, 0, 0, 0, 0, 0, 12710, 2016, 2016, 2016, 
2016, 2016, 2016, 2016, 2016, 2016, 23243, 6371, 0, 0, 0, 0, 0, 0, 0, 2145, 12710, 29614, 2016, 
2016, 2016, 2016, 2016, 2016, 2016, 2016, 23243, 6371, 0, 0, 0, 0, 0, 0, 0, 0, 12710, 2016, 
2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 21130, 4258, 0, 0, 0, 0, 0, 0, 0, 4226, 19017, 
2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 21130, 6371, 0, 0, 0, 0, 0, 0, 4258, 19049, 
2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 23243, 6371, 0, 0, 0, 0, 2113, 16904, 2016, 
2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 23243, 8452, 0, 0, 4258, 16904, 2016, 2016, 
2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 21162, 8452, 4258, 16904, 2016, 2016, 2016, 
2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 2016, 25388, 21162, 31727, 2016, 2016, 2016, 
};

#endif
