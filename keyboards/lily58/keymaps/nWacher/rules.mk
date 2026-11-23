# USB HID features
EXTRAKEY_ENABLE = yes      # Media and system control keycodes
NKRO_ENABLE = yes          # USB N-key rollover

# Display
OLED_ENABLE = yes

# Underglow is intentionally disabled, matching the original configuration.
# Set to yes only if your PCB has a compatible RGBLight/WS2812 installation.
RGBLIGHT_ENABLE = no

# Custom OLED support files
SRC += \
    ./lib/rgb_state_reader.c \
    ./lib/logo_reader.c \
    ./lib/keylogger.c