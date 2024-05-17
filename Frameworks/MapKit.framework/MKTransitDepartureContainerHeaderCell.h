/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitDepartureContainerHeaderCell : MKCustomSeparatorCell {
    NSLayoutConstraint * _artworkToTitleLabelHorizontalSpacingConstraint;
    MKTransitInfoLabelView * _containerArtworkView;
    _MKUILabel * _containerTitleLabel;
    UILayoutGuide * _contentLayoutGuide;
    UIImageView * _incidentImageView;
    MKTransitDepartureContainerHeaderViewModel * _viewModel;
}

@property (nonatomic, retain) MKTransitDepartureContainerHeaderViewModel *viewModel;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_updateAppearance;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
