#ifndef RAYH
#define RAYH

class ray
{
    public:
        ray() {}
        ray(const vec3& a, const vec3& b) { A = a; B = b; }
        vec3 A;
        vec3 B;
        vec3 origin() const {return A; }
        vec3 direction() const {return B; }
        vec3 point_at_parameter(float t) const { return A + t * B; }
};
#endif