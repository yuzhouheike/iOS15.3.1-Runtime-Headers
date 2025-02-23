/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingController : NSObject {
    NSDate * _allocationDate;
    NSDate * _beginDate;
    MRNowPlayingControllerConfiguration * _configuration;
    <MRNowPlayingControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSDate * _endDate;
    <MRNowPlayingControllerImpl> * _impl;
    NSError * _lastError;
    NSDate * _lastErrorDate;
    NSDate * _lastInitialLoadDate;
    NSDate * _lastInvalidationDate;
    NSDate * _lastUpdateDate;
    MRNowPlayingPlayerResponse * _response;
}

@property (nonatomic, retain) NSDate *allocationDate;
@property (nonatomic, retain) NSDate *beginDate;
@property (nonatomic, copy) MRNowPlayingControllerConfiguration *configuration;
@property (nonatomic) <MRNowPlayingControllerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly, copy) MRDestination *destination;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) <MRNowPlayingControllerImpl> *impl;
@property (nonatomic, retain) NSError *lastError;
@property (nonatomic, retain) NSDate *lastErrorDate;
@property (nonatomic, retain) NSDate *lastInitialLoadDate;
@property (nonatomic, retain) NSDate *lastInvalidationDate;
@property (nonatomic, retain) NSDate *lastUpdateDate;
@property (nonatomic, retain) MRNowPlayingPlayerResponse *response;

+ (id)localRouteController;
+ (void)performRequest:(id)arg1 withCompletion:(id /* block */)arg2;
+ (id)proactiveEndpointController;

- (void).cxx_destruct;
- (void)_notifyDelegateOfError:(id)arg1;
- (void)_notifyDelegateOfInvalidation;
- (void)_notifyDelegateOfNewResponse:(id)arg1;
- (void)_notifyDelegateOfPlaybackQueueChange:(id)arg1;
- (void)_notifyDelegateOfPlaybackStateChange:(unsigned int)arg1;
- (void)_notifyDelegateOfPlayerPathChange:(id)arg1;
- (void)_notifyDelegateOfSupportedCommandsChange:(id)arg1;
- (void)_notifyDelegateOfUpdate;
- (void)_notifyDelegateOfUpdatedArtwork:(id)arg1;
- (void)_notifyDelegateOfUpdatedClientProperties:(id)arg1;
- (void)_notifyDelegateOfUpdatedContentItemsWithContentItems:(id)arg1;
- (void)_notifyDelegateOfUpdatedDeviceLastPlayingDate:(id)arg1;
- (void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)arg1;
- (id)allocationDate;
- (id)beginDate;
- (void)beginLoadingUpdates;
- (id)configuration;
- (id)createImplWithConfiguration:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)delegateQueue;
- (id)description;
- (id)destination;
- (id)endDate;
- (void)endLoadingUpdates;
- (id)impl;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithDestination:(id)arg1;
- (id)initWithUID:(id)arg1;
- (id)lastError;
- (id)lastErrorDate;
- (id)lastInitialLoadDate;
- (id)lastInvalidationDate;
- (id)lastUpdateDate;
- (void)performRequestWithCompletion:(id /* block */)arg1;
- (id)playerPath;
- (id)response;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 appOptions:(unsigned int)arg3 completion:(id /* block */)arg4;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)setAllocationDate:(id)arg1;
- (void)setBeginDate:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setImpl:(id)arg1;
- (void)setLastError:(id)arg1;
- (void)setLastErrorDate:(id)arg1;
- (void)setLastInitialLoadDate:(id)arg1;
- (void)setLastInvalidationDate:(id)arg1;
- (void)setLastUpdateDate:(id)arg1;
- (void)setResponse:(id)arg1;

@end
