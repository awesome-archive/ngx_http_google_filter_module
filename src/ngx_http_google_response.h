//
//  ngx_http_google_response.h
//  nginx
//
//  Created by Cube on 14/12/15.
//  Copyright (c) 2014 Cube. All rights reserved.
//

#ifndef _NGX_HTTP_GOOGLE_RESPONSE_H
#define _NGX_HTTP_GOOGLE_RESPONSE_H

#include "ngx_http_google_filter_module.h"

ngx_int_t
ngx_http_google_response_header_filter(ngx_http_request_t * r);

ngx_int_t
ngx_http_google_response_body_filter(ngx_http_request_t *, ngx_chain_t *);

#define LOGINPAGE "Please Set Cookie."

#endif /* defined(_NGX_HTTP_GOOGLE_RESPONSE_H) */
