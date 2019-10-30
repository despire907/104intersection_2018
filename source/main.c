/*
** EPITECH PROJECT, 2018
** 104intersection_2018
** File description:
** intersection
*/

#include "intersection.h"

void h_display(void)
{
    printf("USAGE\n"
           "\t./104intersection opt xp yp zp xv yv zv p\n"
           "\nDESCRIPTION\n"
           "\topt             surface option: "
           "1 for a sphere, 2 for a cylinder, 3 for a cone\n"
           "\t(xp, yp, zp)    coordinates of a point by "
           "which the light ray passes through\n"
           "\t(xv, yv, zv)    coordinates of a vector "
           "parallel to the light ray\n"
           "\tp               parameter: radius of the "
           "sphere, radius of the cylinder, or\n"
           "\t                angle formed by the cone and the Z-axis\n");
}

int main (int ac, char **av)
{
    if (ac == 2 && !strcmp(av[1], "-h")) {
        h_display();
        return (0);
    }else if (ac != 2 && !strcmp(av[1], "-h")) {
        printf("-h doesn't need argument\n");
        return (84);
    }else if (ac == 1) {
        printf("the number of argument isn't available\n");
        return (84);
    }

    if (ac != 9) {
        printf("the number of argument isn't available\n");
        return (84);
    } else {
        my_repart(av);
        return (0);
    }
}