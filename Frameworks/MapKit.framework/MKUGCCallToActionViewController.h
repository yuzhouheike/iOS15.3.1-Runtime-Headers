/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUGCCallToActionViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol> {
    NSArray * _callToActionAppearances;
    <MKUGCCallToActionViewDelegate> * _delegate;
    NSMutableArray * _sectionItemViews;
}

@property (nonatomic, retain) NSArray *callToActionAppearances;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKUGCCallToActionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reloadCallToActionViewsAnimated:(bool)arg1;
- (void)_setupCallToActionViewsAnimated:(bool)arg1;
- (id)callToActionAppearances;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)setCallToActionAppearances:(id)arg1;
- (void)setCallToActionAppearances:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
