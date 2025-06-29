#include "action_layer.h"
#include <stdio.h>

#define L_WINDOWS 0
#define L_MAC (1 << 1)
#define L_NAV (1 << 2)
#define L_NUMBER (1 << 3)

char layer_state_str[24];

const char *read_layer_state(void) {
  if (layer_state == L_WINDOWS) {
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Windows");
  } else if (layer_state == L_MAC) {
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Mac");
  } else if (layer_state & L_NAV) {
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Navigation");
  } else if (layer_state & L_NUMBER) {
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Number");
  } else {
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%u", layer_state);
  }

  return layer_state_str;
}
