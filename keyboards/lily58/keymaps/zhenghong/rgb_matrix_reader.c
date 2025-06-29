#ifdef RGB_MATRIX_ENABLE
#include <stdio.h>
#include "rgb_matrix.h"

char rbf_info_str[24];

const char *read_rgb_info(void) {
    snprintf(rbf_info_str, sizeof(rbf_info_str), "RGB:%s M%2d S%2d B%2d",
        rgb_matrix_is_enabled() ? "ON" : "--",
        rgb_matrix_get_mode(),
        rgb_matrix_get_speed(),
        rgb_matrix_get_val()
    );
    return rbf_info_str;
}
#endif
