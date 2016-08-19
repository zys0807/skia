/*
 * Copyright 2016 Xamarin Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// EXPERIMENTAL EXPERIMENTAL EXPERIMENTAL EXPERIMENTAL
// DO NOT USE -- FOR INTERNAL TESTING ONLY

#ifndef gr_context_DEFINED
#define gr_context_DEFINED

#include "sk_types.h"

SK_C_PLUS_PLUS_BEGIN_GUARD

SK_API gr_context_t* gr_context_create(gr_backend_t backend, gr_backendcontext_t backendContext, const gr_context_options_t* options);
SK_API gr_context_t* gr_context_create_with_defaults(gr_backend_t backend, gr_backendcontext_t backendContext);
SK_API void gr_context_unref(gr_context_t* context);
SK_API void gr_context_abandon_context(gr_context_t* context);
SK_API void gr_context_release_resources_and_abandon_context(gr_context_t* context);
SK_API void gr_context_get_resource_cache_limits(gr_context_t* context, int* maxResources, size_t* maxResourceBytes);
SK_API void gr_context_set_resource_cache_limits(gr_context_t* context, int maxResources, size_t maxResourceBytes);
SK_API void gr_context_get_resource_cache_usage(gr_context_t* context, int* maxResources, size_t* maxResourceBytes);
SK_API int gr_context_get_recommended_sample_count(gr_context_t* context, gr_pixelconfig_t config, float dpi);

SK_API const gr_glinterface_t* gr_glinterface_default_interface();
SK_API const gr_glinterface_t* gr_glinterface_create_native_interface();
SK_API void gr_glinterface_unref(gr_glinterface_t* glInterface);
SK_API gr_glinterface_t* gr_glinterface_clone(gr_glinterface_t* glInterface);
SK_API bool gr_glinterface_validate(gr_glinterface_t* glInterface);
SK_API bool gr_glinterface_has_extension(gr_glinterface_t* glInterface, const char* extension);

SK_C_PLUS_PLUS_END_GUARD

#endif
