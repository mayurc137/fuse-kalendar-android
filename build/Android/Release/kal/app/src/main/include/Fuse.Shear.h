// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.10/$.uno#50'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Transform.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct Shear;}}

namespace g{
namespace Fuse{

// public sealed class Shear :7114
// {
::g::Fuse::Transform_type* Shear_typeof();
void Shear__ctor_1_fn(Shear* __this);
void Shear__AppendTo_fn(Shear* __this, ::g::Fuse::FastMatrix* m, float* weight);
void Shear__get_IsFlat_fn(Shear* __this, bool* __retval);
void Shear__New1_fn(Shear** __retval);
void Shear__PrependTo_fn(Shear* __this, ::g::Fuse::FastMatrix* m);
void Shear__get_Vector_fn(Shear* __this, ::g::Uno::Float2* __retval);
void Shear__set_Vector_fn(Shear* __this, ::g::Uno::Float2* value);

struct Shear : ::g::Fuse::Transform
{
    ::g::Uno::Float2 _vector;

    void ctor_1();
    ::g::Uno::Float2 Vector();
    void Vector(::g::Uno::Float2 value);
    static Shear* New1();
};
// }

}} // ::g::Fuse
