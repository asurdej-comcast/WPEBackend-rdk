/*
 * If not stated otherwise in this file or this component's LICENSE file the
 * following copyright and licenses apply:
 *
 * Copyright 2020 RDK Management
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef wpe_platform_essos_interfaces_h
#define wpe_platform_essos_interfaces_h

#include <wpe/wpe.h>
#include <wpe/wpe-egl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct wpe_renderer_backend_egl_interface essos_renderer_backend_egl_interface;
extern struct wpe_renderer_backend_egl_target_interface essos_renderer_backend_egl_target_interface;
extern struct wpe_renderer_backend_egl_offscreen_target_interface essos_renderer_backend_egl_offscreen_target_interface;

extern struct wpe_view_backend_interface essos_view_backend_interface;

#ifdef __cplusplus
}
#endif

#endif // wpe_platform_essos_interfaces_h
