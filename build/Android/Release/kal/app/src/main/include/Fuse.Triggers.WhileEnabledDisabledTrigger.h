// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileEnabledDisabledTrigger;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class WhileEnabledDisabledTrigger :38
// {
struct WhileEnabledDisabledTrigger_type : ::g::Fuse::Triggers::Trigger_type
{
    void(*fp_get_IsActive)(::g::Fuse::Triggers::WhileEnabledDisabledTrigger*, bool*);
};

WhileEnabledDisabledTrigger_type* WhileEnabledDisabledTrigger_typeof();
void WhileEnabledDisabledTrigger__ctor_3_fn(WhileEnabledDisabledTrigger* __this);
void WhileEnabledDisabledTrigger__OnIsContextEnabledChanged_fn(WhileEnabledDisabledTrigger* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WhileEnabledDisabledTrigger__OnRooted_fn(WhileEnabledDisabledTrigger* __this, ::g::Fuse::Node* parentNode);
void WhileEnabledDisabledTrigger__OnUnrooted_fn(WhileEnabledDisabledTrigger* __this, ::g::Fuse::Node* parentNode);

struct WhileEnabledDisabledTrigger : ::g::Fuse::Triggers::WhileTrigger
{
    void ctor_3();
    bool IsActive() { bool __retval; return (((WhileEnabledDisabledTrigger_type*)__type)->fp_get_IsActive)(this, &__retval), __retval; }
    void OnIsContextEnabledChanged(uObject* sender, ::g::Uno::EventArgs* args);
};
// }

}}} // ::g::Fuse::Triggers
