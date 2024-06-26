/* Copyright 2021 Andrew Braini
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"

/* joystick config */
joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
    [0] = JOYSTICK_AXIS_IN(F5, 1023, 512, 0),
    [1] = JOYSTICK_AXIS_IN(F4, 0, 512, 1023)
};

/* joystick button code (thumbstick pressed) */
void keyboard_pre_init_kb(void) {
	gpio_set_pin_input_high(F6);
}
