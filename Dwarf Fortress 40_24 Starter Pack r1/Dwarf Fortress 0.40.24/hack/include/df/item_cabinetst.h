/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_CABINETST_H
#define DF_ITEM_CABINETST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_cabinetst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_cabinetst(virtual_identity *_id = &item_cabinetst::_identity);
    friend void *df::allocator_fn<item_cabinetst>(void*,const void*);
  };
}
#endif
