/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIViewLayoutFeedbackLoopDebugger : NSObject {
    UIView * _currentLayoutView;
    long long  _debuggingState;
    bool  _feedbackLoopConfirmed;
    NSMutableSet * _involvedViews;
    NSMutableArray * _layoutList;
    NSArray * _reducedLayoutList;
    UIView * _rootView;
    bool  _rootViewConfirmed;
    long long  _rootViewLayoutCount;
    NSMutableSet * _turningPointViews;
    NSMutableSet * _viewsWithChangingGeometry;
    NSMutableSet * _viewsWithVariableChangesTriggeringLayout;
}

@property (nonatomic, retain) UIView *currentLayoutView;

+ (void)createLayoutFeedbackLoopDebuggerForUnitTests;
+ (void)destroyLayoutFeedbackLoopDebuggerForUnitTests;
+ (id)layoutFeedbackLoopDebugger;

- (void).cxx_destruct;
- (void)_recordSetNeedsLayoutToLayerOfView:(id)arg1;
- (id)currentLayoutView;
- (id)description;
- (void)didEnterLayoutSublayersOfLayerForView:(id)arg1;
- (void)didSendLayoutSubviewsToView:(id)arg1;
- (void)didSendSetNeedsLayoutToLayerOfView:(id)arg1;
- (void)didSendViewDidLayoutSubviewsToViewControllerOfView:(id)arg1;
- (void)didSendViewWillLayoutSubviewsToViewControllerOfView:(id)arg1;
- (void)didUpdateLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 ofView:(id)arg2;
- (void)didUpdateSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 ofView:(id)arg2;
- (void)dumpInfoWithInfoCollectionSuccess:(bool)arg1;
- (void)setCurrentLayoutView:(id)arg1;
- (id)topLevelViewHierarchyTrace;
- (id)turningPointViewsCreateIfNecessary;
- (id)viewsWithChangingGeometryCreateIfNecessary;
- (id)viewsWithVariableChangesTriggeringLayoutCreateIfNecessary;
- (void)willChangeGeometryForLayerOfView:(id)arg1;
- (void)willExitLayoutSublayersOfLayerForView:(id)arg1;
- (void)willSendLayoutSubviewsToView:(id)arg1;
- (void)willSendSetBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayerOfView:(id)arg2;
- (void)willSendSetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayerOfView:(id)arg2;
- (void)willSendSetNeedsLayoutToLayerOfView:(id)arg1;
- (void)willSendSetNeedsLayoutToView:(id)arg1 becauseOfChangeInVariable:(id)arg2 inLayoutEngine:(id)arg3;
- (void)willSendSetPosition:(struct CGPoint { double x1; double x2; })arg1 toLayerOfView:(id)arg2;
- (void)willSendViewDidLayoutSubviewsToViewControllerOfView:(id)arg1;
- (void)willSendViewWillLayoutSubviewsToViewControllerOfView:(id)arg1;

@end
