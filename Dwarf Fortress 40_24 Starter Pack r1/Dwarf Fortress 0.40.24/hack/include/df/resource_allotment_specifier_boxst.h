/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_RESOURCE_ALLOTMENT_SPECIFIER_BOXST_H
#define DF_RESOURCE_ALLOTMENT_SPECIFIER_BOXST_H
#ifndef DF_RESOURCE_ALLOTMENT_SPECIFIER_H
#include "resource_allotment_specifier.h"
#endif
namespace df {
  struct DFHACK_EXPORT resource_allotment_specifier_boxst : resource_allotment_specifier {
    int16_t mat_type;
    int32_t mat_index;
    static virtual_identity _identity;
  protected:
    resource_allotment_specifier_boxst(virtual_identity *_id = &resource_allotment_specifier_boxst::_identity);
    friend void *df::allocator_fn<resource_allotment_specifier_boxst>(void*,const void*);
  };
}
#endif
