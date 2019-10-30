/*
** EPITECH PROJECT, 2018
** 104intersection_2018
** File description:
** intersection
*/

#include "intersection.h"

t_solution sphere(t_vector3i p, t_vector3i v, double size)
{
    double a = v.x * v.x + v.y * v.y + v.z * v.z;
    double b = 2 * (p.x * v.x + p.y * v.y + p.z * v.z);
    double c = p.x * p.x + p.y * p.y + p.z * p.z - size * size;
    t_solution sol;
    double lambda;

    sol.delta = b * b - 4 * a * c;
    if (sol.delta == 0) {
        lambda = -b / 2 / a;
        sol.sol.x = p.x + lambda * v.x;
        sol.sol.y = p.y + lambda * v.y;
        sol.sol.z = p.z + lambda * v.z;
    } else if (sol.delta > 0){
        lambda = (-b - sqrt(sol.delta)) / 2 / a;
        sol.sol.x = p.x + lambda * v.x;
        sol.sol.y = p.y + lambda * v.y;
        sol.sol.z = p.z + lambda * v.z;
        lambda = (-b + sqrt(sol.delta)) / 2 / a;
        sol.solb.x = p.x + lambda * v.x;
        sol.solb.y = p.y + lambda * v.y;
        sol.solb.z = p.z + lambda * v.z;
    }
    return sol;
}

t_solution cylinder(t_vector3i p, t_vector3i v, double size)
{
    double a = v.x * v.x  + v.y * v.y;
    double b = 2 * (p.x * v.x + p.y * v.y);
    double c = p.x * p.x + p.y * p.y - size * size;
    t_solution sol;
    double lambda;

    sol.delta = b * b - 4 * a * c;
    if (sol.delta == 0) {
        lambda = -b / 2 / a;
        sol.sol.x = p.x + lambda * v.x;
        sol.sol.y = p.y + lambda * v.y;
        sol.sol.z = p.z + lambda * v.z;
    } else if (sol.delta > 0){
        lambda = (-b - sqrt(sol.delta)) / 2 / a;
        sol.sol.x = p.x + lambda * v.x;
        sol.sol.y = p.y + lambda * v.y;
        sol.sol.z = p.z + lambda * v.z;
        lambda = (-b + sqrt(sol.delta)) / 2 / a;
        sol.solb.x = p.x + lambda * v.x;
        sol.solb.y = p.y + lambda * v.y;
        sol.solb.z = p.z + lambda * v.z;
    }
    return sol;
}

t_solution cone(t_vector3i p, t_vector3i v, double size)
{
    double a = v.x * v.x + v.y * v.y - ((v.z / tan((double)size / 180.0 * M_PI))
            * (v.z / tan((double)size / 180.0 * M_PI)));
    double b = 2 * (p.x * v.x) + 2 * (p.y * v.y) - 2 * (p.z * v.z) /
            tan((double)size / 180.0 * M_PI) *
            tan((double)size / 180.0 * M_PI);
    double c = p.x * p.x + p.y * p.y - p.z * p.z /
            tan((double)size / 180.0 * M_PI) *
            tan((double)size / 180.0 * M_PI);
    t_solution sol;
    double lambda;

    sol.delta = b * b - 4 * a * c;
    if (sol.delta == 0) {
        lambda = -b / 2 / a;
        sol.sol.x = p.x + lambda * v.x;
        sol.sol.y = p.y + lambda * v.y;
        sol.sol.z = p.z + lambda * v.z;
    } else if (sol.delta > 0){
        lambda = (-b - sqrt(sol.delta)) / 2 / a;
        sol.sol.x = p.x + lambda * v.x;
        sol.sol.y = p.y + lambda * v.y;
        sol.sol.z = p.z + lambda * v.z;
        lambda = (-b + sqrt(sol.delta)) / 2 / a;
        sol.solb.x = p.x + lambda * v.x;
        sol.solb.y = p.y + lambda * v.y;
        sol.solb.z = p.z + lambda * v.z;
    }
    return sol;
}