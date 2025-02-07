#define PIX_blu 0x00303F //Bright Purple
#define PIX_yel 0x001500 //Red
#define PIX_whi 0x15153F //Cyan

#define PIX_b 0x00153F //Dark Purple

void put_pixel(uint32_t pixel_grb);

void halt_with_error(uint32_t err, uint32_t bits);

void gpio_disable_input_output(int pin);

void gpio_enable_input_output(int pin);

void finish_pins_except_leds();

void reset_cpu();
