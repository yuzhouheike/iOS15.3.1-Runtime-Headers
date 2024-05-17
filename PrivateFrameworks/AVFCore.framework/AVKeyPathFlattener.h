/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVKeyPathFlattener : NSObject <AVKeyPathDependencyHost, AVWeakObservable> {
    AVTwoPartKeyPath * _dependencyKeyPath;
    AVKeyPathDependencyManager * _dependencyManager;
    NSObject * _observedObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) id dependentProperty;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (void)dealloc;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (id)dependentProperty;
- (id)init;
- (id)initForObservingValueAtKeyPath:(id)arg1 onObject:(id)arg2;
- (id)observedObject;
- (id)topLevelDependencyProperty;

@end
