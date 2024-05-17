/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVAssetWriterInputInternal : NSObject {
    NSObject<OS_dispatch_queue> * appendFailureReadWriteQueue;
    AVAssetWriterInputHelper * helper;
    NSObject<OS_dispatch_queue> * helperQueue;
    AVKeyPathDependencyManager * keyPathDependencyManager;
    bool  markAsFinishedCalled;
    long long  numberOfAppendFailures;
    AVAssetWriterInputPassDescriptionResponder * passDescriptionResponder;
    AVWeakReference * weakReference;
    AVWeakReference * weakReferenceToAssetWriter;
    AVWeakReference * weakReferenceToAttachedAdaptor;
}

@end
