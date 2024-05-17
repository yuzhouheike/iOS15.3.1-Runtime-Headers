/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

@interface Core_Audio_Gateway : NSObject <NSXPCListenerDelegate> {
    struct shared_ptr<HAL::Client::Object_ID_Map> { 
        struct Object_ID_Map {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _clientObjectMap;
    NSXPCListenerEndpoint * _endpoint;
    NSObject<OS_dispatch_queue> * _io_queue;
    NSXPCListener * _listener;
}

@property (nonatomic, readonly) struct shared_ptr<HAL::Client::Object_ID_Map> { struct Object_ID_Map {} *x1; struct __shared_weak_count {} *x2; } clientObjectMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *io_queue;
@property (nonatomic, retain) NSXPCListener *listener;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<HAL::Client::Object_ID_Map> { struct Object_ID_Map {} *x1; struct __shared_weak_count {} *x2; })clientObjectMap;
- (void)create_endpoint;
- (void)destroy_endpoint;
- (id)endpoint;
- (void)handle_server_disconnected;
- (void)handle_server_reconnected;
- (bool)has_endpoint;
- (id)initWithObjectMap:(struct shared_ptr<HAL::Client::Object_ID_Map> { struct Object_ID_Map {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)io_queue;
- (id)listener;
- (void)setEndpoint:(id)arg1;
- (void)setListener:(id)arg1;

@end
