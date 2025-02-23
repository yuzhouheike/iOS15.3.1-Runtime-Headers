/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIInternalDraggingSessionDestination : _UIDraggingImageSlotOwner <NSProgressReporting, _UIDataTransferMonitorDelegate, _UIDraggingInfo> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _centroid;
    UIWindow * _centroidWindow;
    bool  _connectedToDruid;
    _UIDataTransferMonitor * _dataTransferMonitor;
    NSPointerArray * _dragEvents;
    bool  _dragInteractionDidEnd;
    bool  _drivenByPointer;
    id /* block */  _dropCompletionBlock;
    <_UIDropInteractionOwning> * _dropDestinationOwner;
    UIWindowScene * _dropDestinationWindowScene;
    NSArray * _dropItemProviders;
    id /* block */  _dropPerformBlock;
    _UIDropSessionImpl * _dropSession;
    bool  _dropWasPerformed;
    PBItemCollection * _droppedItemCollection;
    <_UIDruidDestinationConnection> * _druidConnection;
    NSMutableSet * _enteredDestinations;
    NSArray * _internalItems;
    bool  _isAccessibilitySession;
    bool  _isPolicyDriven;
    _DUIPotentialDrop * _lastPotentialDrop;
    _UIApplicationModalProgressController * _modalProgressAlertController;
    unsigned long long  _outsideAppSourceOperationMask;
    id /* block */  _postDropAnimationCompletionBlock;
    NSProgress * _progress;
    unsigned long long  _progressIndicatorStyle;
    unsigned int  _sessionIdentifier;
    _UIInternalDraggingSessionSource * _sessionSource;
    _UIDragSetDownAnimation * _setDownAnimation;
    long long  _sourceDataOwner;
    unsigned int  _touchRoutingPolicyContextID;
    UIWindow * _weakCentroidWindow;
}

@property (nonatomic, readonly) UIDragEvent *activeDragEvent;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } centroid;
@property (nonatomic, readonly) UIWindow *centroidWindow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didRequestDropToBePerformed;
@property (nonatomic, readonly) NSArray *dragEvents;
@property (nonatomic, readonly) unsigned long long draggingSourceOperationMask;
@property (nonatomic, readonly) bool drivenByPointer;
@property (nonatomic, readonly) NSArray *dropItemProviders;
@property (nonatomic, readonly) _UIDropSessionImpl *dropSession;
@property (nonatomic, retain) <_UIDruidDestinationConnection> *druidConnection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIInternalDraggingSessionSource *inAppSessionSource;
@property (nonatomic, copy) NSArray *internalItems;
@property (nonatomic, readonly) bool isAccessibilitySession;
@property (nonatomic, readonly) unsigned long long outsideAppSourceOperationMask;
@property (nonatomic, readonly) NSArray *preDropItemProviders;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic) unsigned long long progressIndicatorStyle;
@property (nonatomic, readonly) unsigned int sessionIdentifier;
@property (nonatomic, readonly) bool shouldDragEventBeSentToGestureRecognizers;
@property (nonatomic, readonly) long long sourceDataOwner;
@property (nonatomic, readonly) unsigned long long sourceOperationMask;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIWindow *weakCentroidWindow;

- (void).cxx_destruct;
- (void)_removeFromDragManager;
- (void)_sessionDidEndNormally:(bool)arg1;
- (id)activeDragEvent;
- (unsigned long long)actualDragOperationForProposedDragOperation:(unsigned long long)arg1 destinationDataOwner:(long long)arg2 forbidden:(bool*)arg3;
- (void)addDragEvent:(id)arg1;
- (bool)canBeDrivenByDragEvent:(id)arg1;
- (struct CGPoint { double x1; double x2; })centroid;
- (id)centroidWindow;
- (void)connect;
- (void)dataTransferMonitorBeganTransfers:(id)arg1;
- (void)dataTransferMonitorFinishedTransfers:(id)arg1;
- (bool)didRequestDropToBePerformed;
- (void)dragDidExitApp;
- (id)dragEvents;
- (void)dragInteractionEnding;
- (struct CGPoint { double x1; double x2; })draggingLocationInCoordinateSpace:(id)arg1;
- (unsigned long long)draggingSourceOperationMask;
- (bool)drivenByPointer;
- (id)dropItemProviders;
- (id)dropSession;
- (id)druidConnection;
- (void)enteredDestination:(id)arg1;
- (void)enumerateItemsUsingBlock:(id /* block */)arg1;
- (void)handOffDroppedItems:(id)arg1;
- (id)inAppSessionSource;
- (id)initWithDragManager:(id)arg1 dragEvent:(id)arg2;
- (id)internalItems;
- (bool)isAccessibilitySession;
- (void)itemsBecameDirty:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (unsigned long long)outsideAppSourceOperationMask;
- (id)preDropItemProviders;
- (id)progress;
- (unsigned long long)progressIndicatorStyle;
- (void)requestDropOnOwner:(id)arg1 withOperation:(unsigned long long)arg2 perform:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)requestVisibleItems:(id /* block */)arg1;
- (void)sawDragEndEvent;
- (unsigned int)sessionIdentifier;
- (void)setDruidConnection:(id)arg1;
- (void)setInternalItems:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setProgressIndicatorStyle:(unsigned long long)arg1;
- (void)setUpDropAnimation:(id)arg1 contextID:(unsigned int*)arg2 layerRenderID:(unsigned long long*)arg3;
- (bool)shouldDragEventBeSentToGestureRecognizers;
- (long long)sourceDataOwner;
- (unsigned long long)sourceOperationMask;
- (void)takePotentialDrop:(id)arg1;
- (void)takeVisibleDroppedItems:(id)arg1;
- (void)updateCentroidFromDragEvent;
- (id)weakCentroidWindow;

@end
