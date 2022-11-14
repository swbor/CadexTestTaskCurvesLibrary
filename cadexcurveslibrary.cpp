#include "cadexcurveslibrary.h"

Point3D Circle::calcPoint(double t)
{
    return Point3D{
        c.x + radi * cos(t),
        c.y + radi * sin(t),
        c.z
    };
}

Vector3D Circle::calcVector(double t)
{
    return Vector3D{
        -radi * sin(t),
        radi * cos(t),
        0
    };
}


Point3D Elipse::calcPoint(double t)
{
    return Point3D{
        c.x + radi_a * cos(t),
        c.y + radi_b * sin(t),
        c.z
    };
}

Vector3D Elipse::calcVector(double t)
{
    return Vector3D{
        -radi_a * sin(t),
        radi_b * cos(t),
        0
    };
}

Point3D Helix::calcPoint(double t)
{
    return Point3D{
        c.x + radi * t * cos(t),
        c.y + radi * t * sin(t),
        c.z + step * t
    };
}

Vector3D Helix::calcVector(double t)
{
    return Vector3D{
        radi * (cos(t) - t * sin(t)),
        radi * (sin(t) + t * cos(t)),
        step
    };
}

