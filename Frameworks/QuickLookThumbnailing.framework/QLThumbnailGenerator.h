/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailGenerator : NSObject <QLIncrementalThumbnailGenerationHandler> {
    unsigned long long  _batchingCount;
    NSMutableDictionary * _pendingCancelledRequests;
    NSMutableDictionary * _pendingGenerationRequests;
    NSMutableDictionary * _preparingGenerationRequests;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _requestPreparationQueue;
    NSMutableDictionary * _requests;
    NSObject<OS_dispatch_queue> * _serialResponseQueue;
    QLThumbnailServiceProxy * _syncThumbnailServiceProxy;
    QLThumbnailServiceProxy * _thumbnailServiceProxy;
}

@property (nonatomic) unsigned long long batchingCount;
@property (nonatomic, retain) NSMutableDictionary *pendingCancelledRequests;
@property (nonatomic, retain) NSMutableDictionary *pendingGenerationRequests;
@property (nonatomic, retain) NSMutableDictionary *preparingGenerationRequests;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *requestPreparationQueue;
@property (nonatomic, retain) NSMutableDictionary *requests;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialResponseQueue;
@property (nonatomic, retain) QLThumbnailServiceProxy *syncThumbnailServiceProxy;
@property (nonatomic, retain) QLThumbnailServiceProxy *thumbnailServiceProxy;

+ (id)debugDescriptionForErrorCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 request:(id)arg2 additionalUserInfo:(id)arg3;
+ (void)initialize;
+ (id)sharedGenerator;

- (void).cxx_destruct;
- (void)__callCompletionBlockOfRequest:(id)arg1 withError:(id)arg2;
- (void)__finishRequest:(id)arg1 withError:(id)arg2;
- (bool)__finishRequestIfInvalid:(id)arg1;
- (bool)__finishRequestIfNeeded:(id)arg1;
- (void)__finishRequestWithoutError:(id)arg1;
- (void)__notifyClientWithNewThumbnailRepresentationForRequestIfNeeded:(id)arg1 thumbnail:(id)arg2 type:(long long)arg3 error:(id)arg4;
- (void)__removeRequestWithUUID:(id)arg1;
- (id)__requestWithUUID:(id)arg1;
- (bool)__requestWithUUIDIsStillRunning:(id)arg1;
- (void)_addRequest:(id)arg1;
- (void)_callCompletionBlockOfRequest:(id)arg1 withError:(id)arg2;
- (void)_callUpdateBlockOfRequestIfRunning:(id)arg1 andUpdateMostRepresentativeThumbnail:(id)arg2 type:(long long)arg3 error:(id)arg4;
- (bool)_cancelRequestIfNeeded:(id)arg1;
- (void)_createSyncThumbnailServiceProxy;
- (void)_createThumbnailServiceProxy;
- (void)_finishAllRequestsWithError:(id)arg1;
- (void)_finishAndCallCompletionBlockOfRequest:(id)arg1 withError:(id)arg2;
- (void)_finishRequest:(id)arg1 withError:(id)arg2;
- (bool)_finishRequestIfInvalid:(id)arg1;
- (bool)_finishRequestIfNeeded:(id)arg1;
- (void)_finishRequestWithoutError:(id)arg1;
- (void)_handleThumbnailGenerationCompletionWithUUID:(id)arg1 data:(id)arg2 format:(id)arg3 metadata:(id)arg4 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 iconFlavor:(int)arg6 thumbnailType:(long long)arg7 clientShouldTakeOwnership:(bool)arg8 error:(id)arg9;
- (bool)_isBuildingBatch;
- (void)_logRequestDuration:(id)arg1;
- (void)_notifyClientWithNewThumbnailRepresentationForRequestIfNeeded:(id)arg1 thumbnail:(id)arg2 type:(long long)arg3 error:(id)arg4;
- (void)_performInBatch:(id /* block */)arg1;
- (void)_prepareSyncThumbnailRequest:(id)arg1;
- (void)_prepareThumbnailRequestForQueueOrSending:(id)arg1 synchronous:(bool)arg2;
- (void)_queueIconGenerationForRequestIfNeeded:(id)arg1;
- (bool)_queueThumbnailGenerationForRequestIfNeeded:(id)arg1;
- (void)_queueThumbnailRequest:(id)arg1;
- (void)_removeRequest:(id)arg1;
- (bool)_requestRepresentationTypeIsMoreRepresentative:(id)arg1 thanType:(long long)arg2;
- (id)_requestWithUUID:(id)arg1;
- (void)_sendPendingBatches;
- (void)_sendPendingCancelledRequests;
- (void)_sendPendingGenerationRequests;
- (void)_sendSyncGenerationRequest:(id)arg1;
- (void)_setMostRepresentativeThumbnail:(id)arg1 forRequest:(id)arg2;
- (unsigned long long)batchingCount;
- (void)cancelRequest:(id)arg1;
- (void)didGenerateThumbnailForRequestWithUUID:(id)arg1 data:(id)arg2 bitmapFormat:(id)arg3 metadata:(id)arg4 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 iconFlavor:(int)arg6 thumbnailType:(long long)arg7 clientShouldTakeOwnership:(bool)arg8;
- (void)didUpdateStatus:(long long)arg1 ofThumbnailGenerationWithUUID:(id)arg2;
- (void)failedToGenerateThumbnailOfType:(long long)arg1 forRequestWithUUID:(id)arg2 error:(id)arg3;
- (void)generateBestRepresentationForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)generateRepresentationsForRequest:(id)arg1 updateHandler:(id /* block */)arg2;
- (void)generateThumbnailForRequest:(id)arg1 updateHandler:(id /* block */)arg2 statusHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)pendingCancelledRequests;
- (id)pendingGenerationRequests;
- (void)performInBatch:(id /* block */)arg1;
- (id)preparingGenerationRequests;
- (id)queue;
- (id)requestPreparationQueue;
- (id)requests;
- (void)saveBestRepresentationForRequest:(id)arg1 toFileAtURL:(id)arg2 withContentType:(id)arg3 allowingThumbnailDownloads:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)saveBestRepresentationForRequest:(id)arg1 toFileAtURL:(id)arg2 withContentType:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)serialResponseQueue;
- (void)setBatchingCount:(unsigned long long)arg1;
- (void)setPendingCancelledRequests:(id)arg1;
- (void)setPendingGenerationRequests:(id)arg1;
- (void)setPreparingGenerationRequests:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setSyncThumbnailServiceProxy:(id)arg1;
- (void)setThumbnailServiceProxy:(id)arg1;
- (id)syncThumbnailServiceProxy;
- (void)synchronousGenerateThumbnailForRequest:(id)arg1 updateHandler:(id /* block */)arg2 statusHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)thumbnailIconForContentType:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 iconVariant:(long long)arg4;
- (id)thumbnailIconForRequest:(id)arg1;
- (id)thumbnailServiceProxy;

@end
