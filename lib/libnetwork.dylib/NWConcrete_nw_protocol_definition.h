/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_protocol_definition : NSObject <OS_nw_protocol_definition> {
    int (* allocate_context_globals;
    int (* allocate_flow_state;
    int (* allocate_globals;
    int (* allocate_instance_state;
    int (* allocate_metadata;
    int (* allocate_options;
    int (* check_equality_options;
    int (* compare_options;
    int (* copy_data_transfer_snapshot;
    int (* copy_establishment_report;
    int (* copy_message_options;
    int (* copy_metadata;
    int (* copy_options;
    int (* copy_original;
    int (* create_reply;
    unsigned int  custom_flow_map_key_size;
    int (* deallocate_cache_entry;
    int (* deallocate_flow_state;
    int (* deallocate_globals;
    int (* deallocate_instance_state;
    int (* deallocate_metadata;
    int (* deallocate_options;
    int (* deserialize_metadata;
    int (* deserialize_options;
    int (* destroy;
    int (* fallback_changed_handler;
    int (* finalize_metadata;
    unsigned int  framer;
    int (* framer_create;
    id /* block */  framer_start;
    int (* handle_error;
    int (* handle_inbound;
    int (* handle_outbound;
    unsigned int  has_global_definition;
    struct nw_protocol_identifier { 
        BOOL name[32]; 
        int level; 
        int mapping; 
    }  identifier;
    int (* inbound_starting;
    int (* inbound_stopping;
    int (* initialize;
    int (* initialize_metadata;
    unsigned int  is_proxy;
    int (* link_state;
    int (* max_message_size;
    unsigned int  message_is_stream;
    int (* message_size_handler;
    unsigned int  metadata_size;
    unsigned int  multipath;
    int (* outbound_starting;
    int (* outbound_stopping;
    int (* path_changed_handler;
    unsigned int  receive_single_message;
    int (* replace_flow_state;
    unsigned int  serialize_in_parameters;
    int (* serialize_metadata;
    int (* serialize_options;
    int (* set_original;
    int (* should_flush_cache;
    int (* start;
    int (* stop;
    unsigned int  supports_discontiguous_data;
    unsigned int  supports_replies;
    int (* traffic_mgmt;
    unsigned char  unique_identifier;
    int  variant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
