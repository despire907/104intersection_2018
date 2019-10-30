/*
** EPITECH PROJECT, 2018
** 104intersection_2018
** File description:
** intersection
*/

#ifndef EPITECH_PROJECT_104INTERSECTION_H
#define EPITECH_PROJECT_104INTERSECTION_H

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_vector3i{
    int x;
    int y;
    int z;
}t_vector3i;

typedef struct s_vector3f{
    float x;
    float y;
    float z;
}t_vector3f;

typedef struct s_solution{
    float delta;
    struct s_vector3f sol;
    struct s_vector3f solb;
}t_solution;

t_solution sphere(t_vector3i v, t_vector3i, double size);
int my_repart(char **av);
t_solution cylinder(t_vector3i p, t_vector3i v, double size);
t_solution cone(t_vector3i p, t_vector3i v, double size);
#endif //EPITECH_PROJECT_104INTERSECTION_H
