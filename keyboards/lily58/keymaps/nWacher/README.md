# Lily58 keymap modernization

This folder contains the modernized `keymap.c`, `config.h`, and `rules.mk`.

## Add the OLED helper sources

The OLED code in `keymap.c` uses helper functions from the Lily58 default keymap.

Copy these three files from your QMK checkout:

`keyboards/lily58/keymaps/default/lib/`

- `rgb_state_reader.c`
- `logo_reader.c`
- `keylogger.c`

Place them in a `lib/` directory inside your keymap folder.

## Build

From the root of your QMK checkout, run:

```sh
qmk compile -kb lily58/rev1 -km <your_keymap_name>