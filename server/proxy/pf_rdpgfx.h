/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * FreeRDP Proxy Server
 *
 * Copyright 2019 Mati Shabtay <matishabtay@gmail.com>
 * Copyright 2019 Kobi Mizrachi <kmizrachi18@gmail.com>
 * Copyright 2019 Idan Freiberg <speidy@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FREERDP_SERVER_PROXY_PFRDPGFX_H
#define FREERDP_SERVER_PROXY_PFRDPGFX_H

#include <freerdp/client/rdpgfx.h>
#include <freerdp/server/rdpgfx.h>
#include <freerdp/gdi/gfx.h>

#include <freerdp/server/proxy/proxy_context.h>

BOOL pf_server_rdpgfx_init(pServerContext* ps);
void pf_rdpgfx_pipeline_init(RdpgfxClientContext* gfx, RdpgfxServerContext* server,
                             proxyData* pdata);

#endif /*FREERDP_SERVER_PROXY_PFRDPGFX_H*/
