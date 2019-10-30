/*
** EPITECH PROJECT, 2018
** 104intersection_2018
** File description:
** intersection
*/

#include "../include/intersection.h"

void display_geo(t_vector3i v, t_vector3i p, int id, int size)
{
    if (id == 1)
        printf("Sphere of radius %i\n", size);
    else if (id == 2)
        printf("Cylinder of radius %i\n", size);
    else if (id == 3)
        printf("Cone with a %i degree angle\n", size);
    printf("Line passing through the point (%i, %i, %i) and parallel to the"
           " vector (%i, %i, %i)\n", p.x, p.y, p.z, v.x, v.y, v.z);
}

void display_sol(t_solution sol)
{
    if (sol.delta < 0)
        printf("No intersection point.\n");
    else if (sol.delta == 0) {
        printf("1 intersection point:\n"
               "(%.3f, %.3f, %.3f)\n", sol.sol.x, sol.sol.y, sol.sol.z);
    } else {
        printf("2 intersection points:\n"
               "(%.3f, %.3f, %.3f)\n(%.3f, %.3f, %.3f)\n",
               sol.solb.x, sol.solb.y, sol.solb.z, sol.sol.x, sol.sol.y,
               sol.sol.z);
    }
}

int my_repart(char **av)
{
    t_vector3i p;
    t_vector3i v;
    int size = atoi(av[8]);
    int id = atoi(av[1]);
    t_solution sol;
    p.x = atoi(av[2]);
    p.y = atoi(av[3]);
    p.z = atoi(av[4]);
    v.x = atoi(av[5]);
    v.y = atoi(av[6]);
    v.z = atoi(av[7]);

    if (id == 1) {
        sol = sphere(p, v, size);
    } else if (id == 2) {
        sol = cylinder(p, v, size);
    } else if (id == 3) {
        sol = cone(p, v, size);
    } else
        return 0;
    display_geo(v, p, id, size);
    display_sol(sol);
    return 1;
}