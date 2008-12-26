/*
 * Overflow and underflow
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
void copyright(void);

int main(void) {
    int int_over = 2147483647;
    unsigned int uint_over = 4294967295;
    int int_under = -2147483648;
    unsigned int uint_under = 0;
    float float_over = 1.0e38f;
    float float_under = 1.0e-37f;
    float operand_over = 1000.0f;
    float operand_under = 1.0e8f;
    copyright();

    printf("*** Integer Overflow ***\n");
    printf("Signed init = %d, Over1 = %d, Over2 = %d\n",
            int_over, int_over + 1, int_over + 2);
    printf("Unsigned init = %u, Over1 = %u, Over2 = %u\n\n",
            uint_over, uint_over + 1, uint_over + 2);

    printf("*** Integer Underflow ***\n");
    printf("Signed init = %d, Under1 = %d, Under2 = %d\n",
            int_under, int_under - 1, int_under - 2);
    printf("Unsigned init = %u, Under1 = %u, Under2 = %u\n\n",
            uint_under, uint_under - 1, uint_under - 2);
    
    printf("*** Float Overflow ***\n");
    printf("Init = %f, Over = %f\n",
            float_over, float_over * operand_over);
    printf("Init = %e, Over = %e\n\n",
            float_over, float_over * operand_over);

    printf("*** Float Underflow ***\n");
    printf("Init = %f, Under = %f\n",
            float_under, float_under / operand_under);
    printf("Init = %e, Under = %e\n",
            float_under, float_under / operand_under);
    return 0;
}

void copyright(void) {
    printf("Copyright (c) 2008 Ricky Wirapratigta\nThis program comes "
        "with ABSOLUTELY NO WARRANTY.\nThis is free software, "
        "and you are welcome to redistribute it\nunder certain "
        "conditions.\n\n");
}
