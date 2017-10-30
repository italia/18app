// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.3.1/EvaluateJS.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct EvaluateJS;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class EvaluateJS :104
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* EvaluateJS_typeof();
void EvaluateJS__Execute_fn(EvaluateJS* __this, uObject* webView);
void EvaluateJS__add_Handler_fn(EvaluateJS* __this, uDelegate* value);
void EvaluateJS__remove_Handler_fn(EvaluateJS* __this, uDelegate* value);
void EvaluateJS__Perform_fn(EvaluateJS* __this, ::g::Fuse::Node* target);
void EvaluateJS__ResultHandler_fn(EvaluateJS* __this, uString* result);

struct EvaluateJS : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uString*> _processedSource;
    uStrong<uString*> _rawSource;
    uStrong<uObject*> _target;
    uStrong<uDelegate*> Handler1;

    void Execute(uObject* webView);
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void ResultHandler(uString* result);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
