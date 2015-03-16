/*
 * Print name in some specific format
 * Copyright (c) 2008, 2015 Richard Huang. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
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

#include <stdio.h>
#define COPYRIGHT "Copyright (c) 2008, 2015 Richard Huang. All rights reserved.\n" \
                  "This program comes with ABSOLUTELY NO WARRANTY.\n" \
                  "This is free software, and you are welcome to redistribute it\n" \
                  "under certain conditions.\n\n"
#define FIRST_NAME "John"
#define LAST_NAME "Doe"

int main(void) {
    printf(COPYRIGHT);
    printf("%s %s\n", FIRST_NAME, LAST_NAME);
    printf("%s\n%s\n", FIRST_NAME, LAST_NAME);
    printf("%s ", FIRST_NAME);
    printf("%s\n", LAST_NAME);
    return 0;
}
