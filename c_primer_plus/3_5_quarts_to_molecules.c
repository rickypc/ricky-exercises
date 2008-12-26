/*
 * Convert quarts to molecules
 * Copyright (c) 2008 Ricky Wirapratigta
 * $Id$
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
#define MOLECULE_IN_GRAMS 3.0e-23
#define QUART_IN_GRAMS 950.0
void copyright(void);

int main(void) {
    float quarts;
    float molecules;
    copyright();
    printf("How many quarts of water do you have?\n");
    scanf("%f", &quarts);
    molecules = quarts * QUART_IN_GRAMS * (1 / MOLECULE_IN_GRAMS);
    printf("There are %.2f or %e molecules in %.2f quarts.\n", molecules, molecules, quarts);
    return 0;
}

void copyright(void) {
    printf("Copyright (c) 2008 Ricky Wirapratigta\nThis program comes "
        "with ABSOLUTELY NO WARRANTY.\nThis is free software, "
        "and you are welcome to redistribute it\nunder certain "
        "conditions.\n\n");
}
