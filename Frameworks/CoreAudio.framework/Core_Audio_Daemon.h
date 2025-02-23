/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

@interface Core_Audio_Daemon : NSObject <Core_Audio_Hardware, NSXPCListenerDelegate, XPC_IO_Gateway> {
    struct shared_ptr<HAL::Aggregate::Manager> { 
        struct Manager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _aggregate_device_manager;
    bool  _allow_connection_free_requests;
    struct function<int ()>="__f_"{__value_func<int ()>="__buf_"{type="__lx"[24C] {}  _client_pid_getter;
    struct shared_ptr<std::shared_mutex> { 
        struct shared_mutex {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _creation_mutex;
    struct shared_ptr<AMCP::System::All_Control_Value_Observer> { 
        struct All_Control_Value_Observer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _default_device_all_control_value_observer;
    struct shared_ptr<HAL::Default_Device::Manager> { 
        struct Manager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _default_device_manager;
    struct shared_ptr<Daemon_Guts> { 
        struct Daemon_Guts {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _guts;
    struct shared_ptr<Server_Side_Client_IO_Host> { 
        struct Server_Side_Client_IO_Host {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _host;
    NSMutableSet * _io_listener_connections;
    bool  _is_alive;
    struct shared_ptr<HAL::Object_State::Manager> { 
        struct Manager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _object_state_manager;
    struct function<std::unique_ptr<HALIO::Client_Power_Settings_Base> ()>="__f_"{__value_func<std::unique_ptr<HALIO::Client_Power_Settings_Base> ()>="__buf_"{type="__lx"[24C] {}  _powerSettingsFactory;
    struct shared_ptr<HALS_PowerManager::System_Interface> { 
        struct System_Interface {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _power_manager_interface;
    NSMutableSet * _property_listener_connections;
    NSMutableSet * _remote_connections;
    struct queue { 
        struct object { 
            NSObject<OS_dispatch_object> *fObj; 
        } fObj; 
    }  _scratch_queue;
    struct shared_ptr<AMCP::Utility::Settings_Storage> { 
        struct Settings_Storage {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _settings_storage;
}

@property (nonatomic) struct shared_ptr<HAL::Aggregate::Manager> { struct Manager {} *x1; struct __shared_weak_count {} *x2; } aggregate_device_manager;
@property (nonatomic) bool allow_connection_free_requests;
@property (nonatomic) struct function<int ()>={__value_func<int ()>={type=[24C] {} client_pid_getter;
@property (nonatomic) struct shared_ptr<std::shared_mutex> { struct shared_mutex {} *x1; struct __shared_weak_count {} *x2; } creation_mutex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct shared_ptr<AMCP::System::All_Control_Value_Observer> { struct All_Control_Value_Observer {} *x1; struct __shared_weak_count {} *x2; } default_device_all_control_value_observer;
@property (nonatomic) struct shared_ptr<HAL::Default_Device::Manager> { struct Manager {} *x1; struct __shared_weak_count {} *x2; } default_device_manager;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct shared_ptr<Daemon_Guts> { struct Daemon_Guts {} *x1; struct __shared_weak_count {} *x2; } guts;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct shared_ptr<Server_Side_Client_IO_Host> { struct Server_Side_Client_IO_Host {} *x1; struct __shared_weak_count {} *x2; } host;
@property (nonatomic, retain) NSMutableSet *io_listener_connections;
@property (nonatomic) bool is_alive;
@property (nonatomic) struct shared_ptr<HAL::Object_State::Manager> { struct Manager {} *x1; struct __shared_weak_count {} *x2; } object_state_manager;
@property (nonatomic) struct function<std::unique_ptr<HALIO::Client_Power_Settings_Base> ()>={__value_func<std::unique_ptr<HALIO::Client_Power_Settings_Base> ()>={type=[24C] {} powerSettingsFactory;
@property (nonatomic) struct shared_ptr<HALS_PowerManager::System_Interface> { struct System_Interface {} *x1; struct __shared_weak_count {} *x2; } power_manager_interface;
@property (nonatomic, retain) NSMutableSet *property_listener_connections;
@property (nonatomic, retain) NSMutableSet *remote_connections;
@property (nonatomic) struct queue { struct object { id x_1_1_1; } x1; } scratch_queue;
@property (nonatomic) struct shared_ptr<AMCP::Utility::Settings_Storage> { struct Settings_Storage {} *x1; struct __shared_weak_count {} *x2; } settings_storage;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)add_device_token_to_user_info:(struct Device_Token { unsigned int x1; })arg1 user_info:(id)arg2;
- (void)add_property_listener:(id)arg1 reply:(id /* block */)arg2;
- (struct shared_ptr<HAL::Aggregate::Manager> { struct Manager {} *x1; struct __shared_weak_count {} *x2; })aggregate_device_manager;
- (bool)allow_connection_free_requests;
- (void)audio_object_get_property_data:(unsigned int)arg1 token:(struct Device_Token { unsigned int x1; })arg2 at:(struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })arg3 with:(id)arg4 reply:(id /* block */)arg5;
- (void)audio_object_get_property_info:(unsigned int)arg1 token:(struct Device_Token { unsigned int x1; })arg2 at:(struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })arg3 reply:(id /* block */)arg4;
- (void)audio_object_set_property_data:(unsigned int)arg1 token:(struct Device_Token { unsigned int x1; })arg2 at:(struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })arg3 with:(id)arg4 value:(id)arg5 reply:(id /* block */)arg6;
- (void)call_all_remote_listeners:(id)arg1;
- (void)call_all_remote_listeners_async:(id)arg1;
- (struct function<int ()>={__value_func<int ()>={type=[24C] {})client_pid_getter;
- (void)create_aggregate_device:(id)arg1 reply:(id /* block */)arg2;
- (void)create_config_change_observers;
- (void)create_device_for_client_io:(struct Transport_Token { unsigned int x1; })arg1 with:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)create_io_client_for_endpoint:(id)arg1 reply:(id /* block */)arg2;
- (id)create_io_listener_connection:(id)arg1;
- (id)create_listener_connection:(id)arg1;
- (void)create_power_manager:(struct shared_ptr<HALS_PowerManager::System_Interface> { struct System_Interface {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)create_property_observer;
- (struct shared_ptr<std::shared_mutex> { struct shared_mutex {} *x1; struct __shared_weak_count {} *x2; })creation_mutex;
- (void)dealloc;
- (struct shared_ptr<AMCP::System::All_Control_Value_Observer> { struct All_Control_Value_Observer {} *x1; struct __shared_weak_count {} *x2; })default_device_all_control_value_observer;
- (struct shared_ptr<HAL::Default_Device::Manager> { struct Manager {} *x1; struct __shared_weak_count {} *x2; })default_device_manager;
- (void)destroy_aggregate_device:(unsigned int)arg1 reply:(id /* block */)arg2;
- (struct Device_Token { unsigned int x1; })device_token_from_user_info_item:(id)arg1;
- (struct function<void (unsigned int, bool, const std::tuple<std::vector<unsigned int>, std::vector<unsigned int>, boost::container::flat_map<unsigned int, std::tuple<boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>>>> &)>={__value_func<void (unsigned int, bool, const std::tuple<std::vector<unsigned int>, std::vector<unsigned int>, boost::container::flat_map<unsigned int, std::tuple<boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>>>> &)>={type=[24C] {})get_begin_continuing_config_change_observer_proc:(bool)arg1;
- (int)get_client_pid;
- (struct function<void (unsigned int, bool, const std::tuple<std::vector<unsigned int>, std::vector<unsigned int>, boost::container::flat_map<unsigned int, std::tuple<boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>>>> &)>={__value_func<void (unsigned int, bool, const std::tuple<std::vector<unsigned int>, std::vector<unsigned int>, boost::container::flat_map<unsigned int, std::tuple<boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>>>> &)>={type=[24C] {})get_end_config_change_observer_proc;
- (void*)get_portal;
- (struct shared_ptr<Daemon_Guts> { struct Daemon_Guts {} *x1; struct __shared_weak_count {} *x2; })guts;
- (void)handle_io_message:(struct Transport_Token { unsigned int x1; })arg1 with:(struct Device_Token { unsigned int x1; })arg2 incoming:(id)arg3;
- (void)handle_io_message:(struct Transport_Token { unsigned int x1; })arg1 with:(struct Device_Token { unsigned int x1; })arg2 incoming:(id)arg3 reply:(id /* block */)arg4;
- (struct shared_ptr<Server_Side_Client_IO_Host> { struct Server_Side_Client_IO_Host {} *x1; struct __shared_weak_count {} *x2; })host;
- (id)init;
- (id)initWithMCPType:(long long)arg1;
- (id)io_listener_connections;
- (bool)is_alive;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (struct shared_ptr<HAL::Object_State::Manager> { struct Manager {} *x1; struct __shared_weak_count {} *x2; })object_state_manager;
- (void)ping:(int)arg1 reply:(id /* block */)arg2;
- (struct function<std::unique_ptr<HALIO::Client_Power_Settings_Base> ()>={__value_func<std::unique_ptr<HALIO::Client_Power_Settings_Base> ()>={type=[24C] {})powerSettingsFactory;
- (struct shared_ptr<HALS_PowerManager::System_Interface> { struct System_Interface {} *x1; struct __shared_weak_count {} *x2; })power_manager_interface;
- (id)property_listener_connections;
- (void)release_resources;
- (id)remote_connections;
- (struct queue { struct object { id x_1_1_1; } x1; })scratch_queue;
- (void)sendPropertiesChanged:(unsigned int)arg1 count:(unsigned long long)arg2 addresses:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg3;
- (id)send_io_message:(struct XPC_Message_Payload { struct Transport_Token { unsigned int x_1_1_1; } x1; struct Device_Token { unsigned int x_2_1_1; } x2; id x3; })arg1;
- (void)setAggregate_device_manager:(struct shared_ptr<HAL::Aggregate::Manager> { struct Manager {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setAllow_connection_free_requests:(bool)arg1;
- (void)setClient_pid_getter:(struct function<int ()>={__value_func<int ()>={type=[24C] {})arg1;
- (void)setCreation_mutex:(struct shared_ptr<std::shared_mutex> { struct shared_mutex {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setDefault_device_all_control_value_observer:(struct shared_ptr<AMCP::System::All_Control_Value_Observer> { struct All_Control_Value_Observer {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setDefault_device_manager:(struct shared_ptr<HAL::Default_Device::Manager> { struct Manager {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setGuts:(struct shared_ptr<Daemon_Guts> { struct Daemon_Guts {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setHost:(struct shared_ptr<Server_Side_Client_IO_Host> { struct Server_Side_Client_IO_Host {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setIo_listener_connections:(id)arg1;
- (void)setIs_alive:(bool)arg1;
- (void)setObject_state_manager:(struct shared_ptr<HAL::Object_State::Manager> { struct Manager {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setPowerSettingsFactory:(struct function<std::unique_ptr<HALIO::Client_Power_Settings_Base> ()>={__value_func<std::unique_ptr<HALIO::Client_Power_Settings_Base> ()>={type=[24C] {})arg1;
- (void)setPower_manager_interface:(struct shared_ptr<HALS_PowerManager::System_Interface> { struct System_Interface {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setProperty_listener_connections:(id)arg1;
- (void)setRemote_connections:(id)arg1;
- (void)setScratch_queue:(struct queue { struct object { id x_1_1_1; } x1; })arg1;
- (void)setSettings_storage:(struct shared_ptr<AMCP::Utility::Settings_Storage> { struct Settings_Storage {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<AMCP::Utility::Settings_Storage> { struct Settings_Storage {} *x1; struct __shared_weak_count {} *x2; })settings_storage;
- (void)start_all_client_io;
- (void)stop_all_client_io:(const void*)arg1;

@end
