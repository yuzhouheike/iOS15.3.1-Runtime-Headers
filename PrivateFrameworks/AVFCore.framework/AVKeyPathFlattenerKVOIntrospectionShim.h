/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVKeyPathFlattenerKVOIntrospectionShim : NSObject <AVCallbackCancellation, AVKVOIntrospection> {
    NSObject * _observedObject;
    <AVKVOIntrospection><AVCallbackCancellation> * _realNotifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject *observedObject;
@property (readonly) Class superclass;

- (void)cancelCallbacks;
- (void)dealloc;
- (id)initWithObservedObject:(id)arg1 realNotifier:(id)arg2;
- (id)observedObject;

@end
