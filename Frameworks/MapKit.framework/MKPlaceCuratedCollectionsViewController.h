/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceCuratedCollectionsViewController : MKPlaceSectionViewController <MKCollectionCarouselAnalyticsDelegate, MKCollectionCarouselRoutingDelegate, MKModuleViewControllerProtocol> {
    MKCuratedCollectionsPlacecardAnalyticsManager * _analyticsManager;
    MKCollectionsCarouselView * _carouselView;
    NSArray * _collectionIds;
    <MKPlaceCollectionsDelegate> * _collectionsDelegate;
    MKPlaceSectionHeaderView * _headerView;
    MKMapItem * _mapItem;
    NSArray * _placeCollections;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
}

@property (nonatomic, retain) MKCuratedCollectionsPlacecardAnalyticsManager *analyticsManager;
@property (nonatomic, retain) MKCollectionsCarouselView *carouselView;
@property (nonatomic, retain) NSArray *collectionIds;
@property (nonatomic) <MKPlaceCollectionsDelegate> *collectionsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKPlaceSectionHeaderView *headerView;
@property (nonatomic, retain) NSArray *placeCollections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)analyticsManager;
- (id)carouselView;
- (id)collectionIds;
- (void)collectionsCarouselDidRouteToCollectionId:(id)arg1 atIndex:(long long)arg2 isSaved:(bool)arg3;
- (void)collectionsCarouselDidScrollBackward;
- (void)collectionsCarouselDidScrollForward;
- (id)collectionsDelegate;
- (id)headerView;
- (id)initWithDelegate:(id)arg1 withPlaceCollections:(id)arg2 usingSyncCoordinator:(id)arg3 usingMapItem:(id)arg4 usingCollectionIds:(id)arg5 exploreGuides:(id)arg6;
- (id)placeCollections;
- (void)refreshCollections;
- (void)routeToCuratedCollection:(id)arg1;
- (void)routeToGuidesHomeFromExploreGuides:(id)arg1;
- (void)setAnalyticsManager:(id)arg1;
- (void)setCarouselView:(id)arg1;
- (void)setCollectionIds:(id)arg1;
- (void)setCollectionsDelegate:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setPlaceCollections:(id)arg1;
- (void)setUpHeaderView;
- (bool)shouldShowMoreButton;
- (void)showMoreTapped;
- (void)updateConstraintsForCarouselView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
