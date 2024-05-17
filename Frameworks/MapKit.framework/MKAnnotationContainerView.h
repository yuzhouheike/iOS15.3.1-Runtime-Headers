/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAnnotationContainerView : UIView <VKCustomFeatureDataSource, _MKPinAnnotationViewDelegate> {
    MKAnnotationView * _annotationViewToSelect;
    NSMutableOrderedSet * _annotationViews;
    double  _annotationViewsRotationRadians;
    NSMutableArray * _awaitingDropPins;
    bool  _clickedOnAnnotationView;
    NSMutableDictionary * _clusterableAnnotationViews;
    NSMutableDictionary * _clusteringAnnotationViews;
    NSMutableSet * _collidableAnnotationViews;
    NSMutableDictionary * _collidingAnnotationViews;
    NSMutableArray * _customFeatureDataSourceObservers;
    <MKAnnotationContainerViewDelegate> * _delegate;
    bool  _didDragAnnotationView;
    MKAnnotationView * _draggingAnnotationView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _draggingAnnotationViewCenter;
    NSMutableDictionary * _existingClusterAnnotationViews;
    bool  _isUpdating;
    double  _lastUpdate;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
        unsigned char searchResultsType; 
        bool mapHasLabels; 
    }  _mapDisplayStyle;
    double  _mapPitchRadians;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _mapTransform;
    unsigned long long  _mapType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _mouseDownPoint;
    NSMutableArray * _pinsToAnimate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousMouseDragPoint;
    double  _previousMouseDragTimeStamp;
    NSMutableSet * _prioritiesToAdd;
    MKPriorityToIndexMap * _priorityMap;
    NSMutableArray * _requiredPriorityAnnotationViews;
    MKAnnotationView * _selectedAnnotationView;
    bool  _suppress;
    bool  _suppressCallout;
    MKAnnotationView * _userLocationView;
}

@property (nonatomic, readonly) NSMutableOrderedSet *annotationViews;
@property (nonatomic, readonly) MKPinAnnotationView *bubblePin;
@property (nonatomic, readonly) struct { long long x1; struct CLLocationCoordinate2D { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; id x5; bool x6; } currentComparisonContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKAnnotationContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MKAnnotationView *draggingAnnotationView;
@property (nonatomic, readonly) bool hasDroppingPins;
@property (nonatomic, readonly) bool hasPendingAnimations;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long mapType;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressCallout;
@property (nonatomic, readonly) MKAnnotationView *userLocationView;

- (void).cxx_destruct;
- (void)_addPrioritiesForAnnotationViewIfNeeded:(id)arg1;
- (id)_annotationViewForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1 avoidCurrent:(bool)arg2 maxDistance:(double)arg3;
- (void)_draggingAnnotationViewDidPause:(id)arg1;
- (void)_dropDraggingAnnotationViewAnimated:(bool)arg1;
- (void)_dropPinsIfNeeded:(bool)arg1;
- (id)_existingClusterViewsForClusterID:(id)arg1;
- (void)_liftForDragging:(id)arg1 mouseDownPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapRectWithFraction:(double)arg1 ofVisible:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_performStateUpdatesIfNeeded;
- (void)_updateAnnotationView:(id)arg1;
- (bool)_updateAnnotationViewPositions;
- (bool)_updateAnnotationViews:(id)arg1;
- (void)_updateAnnotationViewsForReason:(long long)arg1 updatePositions:(bool)arg2;
- (void)_updateClusterableAnnotationViews:(id)arg1 withID:(id)arg2;
- (void)_updateCollidableAnnotationViews;
- (bool)_updatePriorityMapIfNeeded;
- (void)_updateZPositionForAnnotationView:(id)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleCenteringRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleCenteringRectInView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleRect;
- (void)_willRemoveInternalAnnotationView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })accessoryPadding;
- (void)addAnnotationView:(id)arg1 allowAnimation:(bool)arg2;
- (void)addObserver:(id)arg1;
- (void)annotationViewDidChangeHidden:(id)arg1;
- (void)annotationViewDidChangeMetrics:(id)arg1;
- (void)annotationViewDidChangeZPriority:(id)arg1;
- (id)annotationViewForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)annotationViews;
- (id)annotationsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)bubblePin;
- (bool)calloutContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)clusterStyleAttributes;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinateForAnnotationView:(id)arg1;
- (struct { long long x1; struct CLLocationCoordinate2D { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; id x5; bool x6; })currentComparisonContext;
- (void)dealloc;
- (id)delegate;
- (void)deselectAnnotationView:(id)arg1 animated:(bool)arg2;
- (id)draggingAnnotationView;
- (struct CGPoint { double x1; double x2; })draggingAnnotationViewDropPoint;
- (struct CGPoint { double x1; double x2; })draggingAnnotationViewDropPointForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)draggingTouchMovedToPoint:(struct CGPoint { double x1; double x2; })arg1 edgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)dropPinsIfNeeded;
- (void)finishAddingAndRemovingAnnotationViews;
- (void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
- (void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
- (id)globalAnnotations;
- (bool)hasDroppingPins;
- (bool)hasPendingAnimations;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateCustomFeatureDataSource;
- (void)invalidateCustomFeatureDataSourceRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isClusteringEnabled;
- (unsigned long long)mapType;
- (void)pinDidDrop:(id)arg1 animated:(bool)arg2;
- (struct CGPoint { double x1; double x2; })pointForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)removeAnnotationView:(id)arg1;
- (void)removeAnnotationViewsRotationAnimations;
- (void)removeObserver:(id)arg1;
- (unsigned char)sceneID;
- (unsigned char)sceneState;
- (void)selectAnnotationView:(id)arg1 animated:(bool)arg2;
- (void)setAnnotationViewsRotationRadians:(double)arg1 animation:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)setMapPitchRadians:(double)arg1;
- (void)setMapType:(unsigned long long)arg1;
- (void)setSuppressCallout:(bool)arg1;
- (void)setUserLocationView:(id)arg1;
- (void)stopSuppressingUpdates;
- (bool)suppressCallout;
- (void)suppressUpdates;
- (void)transitionTo:(long long)arg1;
- (void)updateAnnotationView:(id)arg1;
- (void)updateAnnotationViewsForReason:(long long)arg1;
- (void)updateAnnotationViewsWithDelay;
- (void)updateCalloutStateForSelectedAnnotationView:(id)arg1;
- (void)updateUserLocationView;
- (id)userLocationView;
- (void)visibleCenteringRectChanged;

@end
