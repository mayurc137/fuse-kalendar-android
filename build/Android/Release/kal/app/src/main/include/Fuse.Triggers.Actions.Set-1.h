// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#7'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Internal{struct Blender;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Set;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Set<T> :331
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Set_typeof();
void Set__ctor_1_fn(Set* __this, ::g::Uno::UX::Property* target);
void Set__get_Expression_fn(Set* __this, uDelegate** __retval);
void Set__set_Expression_fn(Set* __this, uDelegate* value);
void Set__New1_fn(uType* __type, ::g::Uno::UX::Property* target, Set** __retval);
void Set__Perform_fn(Set* __this, ::g::Fuse::Node* target);
void Set__get_Target_fn(Set* __this, ::g::Uno::UX::Property** __retval);
void Set__set_Target_fn(Set* __this, ::g::Uno::UX::Property* value);
void Set__Update_fn(Set* __this, void* value);
void Set__get_Value_fn(Set* __this, uTRef __retval);
void Set__set_Value_fn(Set* __this, void* value);

struct Set : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Internal::Blender*> _blender;
    bool _hasIncrement;
    uTField _increment() { return __type->Field(this, 9); }
    bool _updateRestValue;
    uStrong<uDelegate*> _Expression;
    uStrong< ::g::Uno::UX::Property*> _Target;
    uTField _Value() { return __type->Field(this, 13); }

    void ctor_1(::g::Uno::UX::Property* target);
    uDelegate* Expression();
    void Expression(uDelegate* value);
    ::g::Uno::UX::Property* Target();
    void Target(::g::Uno::UX::Property* value);
    template<class T>
    void Update(T value) { Set__Update_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    T Value() { T __retval; return Set__get_Value_fn(this, &__retval), __retval; }
    template<class T>
    void Value(T value) { Set__set_Value_fn(this, uConstrain(__type->T(0), value)); }
    static Set* New1(uType* __type, ::g::Uno::UX::Property* target);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
