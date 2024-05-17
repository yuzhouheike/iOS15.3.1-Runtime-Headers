/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ExtensionFoundation.framework/ExtensionFoundation
 */

@interface _EXQueryObserver : NSObject <_EXActiveQueryObserver> {
    <_EXQueryObserverDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _extensionsLock;
    NSSet * _internalExtensions;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSArray * _queries;
}

@property (readonly) <_EXQueryObserverDelegate> *delegate;
@property (readonly) NSArray *extensions;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; }*extensionsLock;
@property (nonatomic, retain) NSSet *internalExtensions;
@property (readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (readonly, copy) NSArray *queries;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)extensions;
- (struct os_unfair_lock_s { unsigned int x1; }*)extensionsLock;
- (id)initWithQueries:(id)arg1 delegate:(id)arg2;
- (id)internalExtensions;
- (id)notificationQueue;
- (id)queries;
- (void)query:(id)arg1 resultDidUpdate:(id)arg2;
- (void)resultDidUpdate:(id)arg1;
- (void)resume;
- (void)setInternalExtensions:(id)arg1;
- (void)suspend;

@end
