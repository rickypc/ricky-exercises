/*
 * Convert years to days
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
#define YEAR_IN_DAYS 365

int main(void) {
    int years;
    printf(COPYRIGHT);
    printf("How many years old are you now?\n");
    scanf("%d", &years);
    printf("You are %d days old.\n", years * YEAR_IN_DAYS);
    return 0;
}
