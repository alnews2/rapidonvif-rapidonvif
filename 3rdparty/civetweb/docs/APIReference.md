# CivetWeb API Reference

CivetWeb is often used as HTTP and HTTPS library inside a larger application.
A C API is available to integrate the CivetWeb functionality in a larger
codebase. A C++ wrapper is also available, although it is not guaranteed
that all functionality available through the C API can also be accessed
from C++. This document describes the public C API. Basic usage examples of
the API can be found in [Embedding.md](Embedding.md).

## Macros

| Macro | Description |
| :--- | :--- |
| **`CIVETWEB_VERSION`** | The current version of the software as a string with the major and minor version number seperated with a dot. For version 1.9, this string will have the value "1.9", for thw first patch of this version "1.9.1". |
| **`CIVETWEB_VERSION_MAJOR`** | The current major version as number, e.g., (1) for version 1.9. |
| **`CIVETWEB_VERSION_MINOR`** | The current minor version as number, e.g., (9) for version 1.9. |
| **`CIVETWEB_VERSION_PATCH`** | The current patch version as number, e.g., (0) for version 1.9 or (1) for version 1.9.1. |


## Structures

* [`struct client_cert;`](api/client_cert.md)
* [`struct mg_client_options;`](api/mg_client_options.md)
* [`struct mg_callbacks;`](api/mg_callbacks.md)
* [`struct mg_form_data_handler;`](api/mg_form_data_handler.md)
* [`struct mg_header;`](api/mg_header.md)
* [`struct mg_option;`](api/mg_option.md)
* [`struct mg_request_info;`](api/mg_request_info.md)
* [`struct mg_server_ports;`](api/mg_server_ports.md)


## Library API Functions

* [`mg_init_library( feature );`](api/mg_init_library.md)
* [`mg_exit_library( feature );`](api/mg_exit_library.md)

* [`mg_check_feature( feature );`](api/mg_check_feature.md)
* [`mg_version();`](api/mg_version.md)


## Server API Functions

* [`mg_start( callbacks, user_data, options );`](api/mg_start.md)
* [`mg_stop( ctx );`](api/mg_stop.md)

* [`mg_get_builtin_mime_type( file_name );`](api/mg_get_builtin_mime_type.md)
* [`mg_get_option( ctx, name );`](api/mg_get_option.md)
* [`mg_get_server_ports( ctx, size, ports );`](api/mg_get_server_ports.md)
* [`mg_get_user_data( ctx );`](api/mg_get_user_data.md)
* [`mg_set_auth_handler( ctx, uri, handler, cbdata );`](api/mg_set_auth_handler.md)
* [`mg_set_request_handler( ctx, uri, handler, cbdata );`](api/mg_set_request_handler.md)
* [`mg_set_websocket_handler( ctx, uri, connect_handler, ready_handler, data_handler, close_handler, cbdata );`](api/mg_set_websocket_handler.md)

* [`mg_lock_context( ctx );`](api/mg_lock_context.md)
* [`mg_unlock_context( ctx );`](api/mg_unlock_context.md)

* [`mg_get_context( conn );`](api/mg_get_context.md)


## Client API Functions

* [`mg_connect_client( host, port, use_ssl, error_buffer, error_buffer_size );`](api/mg_connect_client.md)
* [`mg_connect_websocket_client( host, port, use_ssl, error_buffer, error_buffer_size, path, origin, data_func, close_func, user_data);`](api/mg_connect_websocket_client.md)
* [`mg_websocket_client_write( conn, opcode, data, data_len );`](api/mg_websocket_client_write.md)

* [`mg_download( host, port, use_ssl, error_buffer, error_buffer_size, fmt, ... );`](api/mg_download.md)


## Common API Functions

* [`mg_close_connection( conn );`](api/mg_close_connection.md)
* [`mg_cry( conn, fmt, ... );`](api/mg_cry.md)

* [`mg_get_cookie( cookie, var_name, buf, buf_len );`](api/mg_get_cookie.md)
* [`mg_get_header( conn, name );`](api/mg_get_header.md)
* [`mg_get_request_info( conn );`](api/mg_get_request_info.md)
* [`mg_get_response( conn, ebuf, ebuf_len, timeout );`](api/mg_get_response.md)
* [`mg_get_response_code_text( conn, response_code );`](api/mg_get_response_code_text.md)
* [`mg_get_user_connection_data( conn );`](api/mg_get_user_connection_data.md)
* [`mg_get_valid_options();`](api/mg_get_valid_options.md)
* [`mg_get_var( data, data_len, var_name, dst, dst_len );`](api/mg_get_var.md)
* [`mg_get_var2( data, data_len, var_name, dst, dst_len, occurrence );`](api/mg_get_var2.md)
* [`mg_handle_form_request( conn, fdh );`](api/mg_handle_form_request.md)
* [`mg_lock_connection( conn );`](api/mg_lock_connection.md)
* [`mg_md5( buf, ... );`](api/mg_md5.md)
* [`mg_modify_passwords_file( passwords_file_name, domain, user, password );`](api/mg_modify_passwords_file.md)
* [`mg_printf( conn, fmt, ... );`](api/mg_printf.md)
* [`mg_read( conn, buf, len );`](api/mg_read.md)
* [`mg_send_file( conn, path );`](api/mg_send_file.md)
* [`mg_send_mime_file( conn, path, mime_type );`](api/mg_send_mime_file.md)
* [`mg_send_mime_file2( conn, path, mime_type, additional_headers );`](api/mg_send_mime_file2.md)
* [`mg_set_user_connection_data( conn, data );`](api/mg_set_user_connection_data.md)
* [`mg_start_thread( f, p );`](api/mg_start_thread.md)
* [`mg_store_body( conn, path );`](api/mg_store_body.md)
* [`mg_strcasecmp( s1, s2 );`](api/mg_strcasecmp.md)
* [`mg_strncasecmp( s1, s2, len );`](api/mg_strncasecmp.md)
* [`mg_unlock_connection( conn );`](api/mg_unlock_connection.md)
* [`mg_url_decode( src, src_len, dst, dst_len, is_form_url_encoded );`](api/mg_url_decode.md)
* [`mg_url_encode( src, dst, dst_len );`](api/mg_url_encode.md)
* [`mg_websocket_write( conn, opcode, data, data_len );`](api/mg_websocket_write.md)
* [`mg_write( conn, buf, len );`](api/mg_write.md)


## Deprecated:

* [~~`mg_get_valid_option_names();`~~](api/mg_get_valid_option_names.md)
* [~~`mg_upload( conn, destination_dir );`~~](api/mg_upload.md)
