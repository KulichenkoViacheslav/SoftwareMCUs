#include "garland.h"
#include "leds.h"
#include "button.h"

static garland_state_s_t garland_state;

void garland_init(void)
{
  // Start initialization
  leds_init();
  button_init();
  
  garland_state.mode = turned_on;
  leds_switch(led_blue, on);
  leds_switch(led_red, on);
  leds_switch(led_orange, on);
  leds_switch(led_green, on);
}

void garland_run(void)
{
}
