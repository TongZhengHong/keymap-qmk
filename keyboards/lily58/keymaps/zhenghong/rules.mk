MCU = RP2040
BOOTLOADER = rp2040
USER_NAME = zhenghong

LTO_ENABLE = yes            # Link Time Optimization enabled
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output
SWAP_HANDS_ENABLE = no      # Enable one-hand typing
OLED_ENABLE = yes           # OLED display
WPM_ENABLE = yes

ENCODER_ENABLE = yes        # Enables the use of one or more encoders
ENCODER_MAP_ENABLE = yes    # Enables layer-aware encoder_map feature.
# CONVERT_TO = rp2040_ce      # Compile ot .uf2 file for RP2040 mcu

OLED_DRIVER_ENABLE = yes
SERIAL_DRIVER = vendor
RGB_MATRIX_ENABLE = yes

# If you want to change the display of OLED, you need to change here
SRC +=  ./keymaps/first_firmware/rgb_matrix_reader.c \
        ./keymaps/first_firmware/layer_state_reader.c \
        ./keymaps/first_firmware/keylogger.c \
        ./keymaps/first_firmware/bongo.c \
        # ./lib/logo_reader.c \
        # ./lib/mode_icon_reader.c \
        # ./lib/host_led_state_reader.c \
        # ./lib/timelogger.c \
