/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_UNDERWORLD_FROM_LAYERST_H
#define DF_FEATURE_UNDERWORLD_FROM_LAYERST_H
#ifndef DF_FEATURE_H
#include "feature.h"
#endif
namespace df {
  struct DFHACK_EXPORT feature_underworld_from_layerst : feature {
    static virtual_identity _identity;
  protected:
    feature_underworld_from_layerst(virtual_identity *_id = &feature_underworld_from_layerst::_identity);
    friend void *df::allocator_fn<feature_underworld_from_layerst>(void*,const void*);
  };
}
#endif
