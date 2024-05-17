/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusRegionContainerProxy : NSObject <_UIFocusRegionContainer> {
    bool  _isFocusEnvironment;
    <UIFocusItemContainer> * _itemContainer;
}

@property (nonatomic) bool areChildrenFocused;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_isEligibleForFocusInteraction, nonatomic, readonly) bool eligibleForFocusInteraction;
@property (getter=_isEligibleForFocusOcclusion, nonatomic, readonly) bool eligibleForFocusOcclusion;
@property (nonatomic, readonly, copy) NSString *focusGroupIdentifier;
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFocusEnvironment;
@property (nonatomic, retain) <UIFocusItemContainer> *itemContainer;
@property (getter=_linearFocusMovementSequences, nonatomic, readonly, copy) NSArray *linearFocusMovementSequences;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (getter=_preferredFocusMovementStyle, nonatomic, readonly) long long preferredFocusMovementStyle;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_focusEnvironment;
- (id)_preferredFocusRegionCoordinateSpace;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusItemContainer;
- (id)initWithItemContainer:(id)arg1;
- (bool)isFocusEnvironment;
- (id)itemContainer;
- (id)parentFocusEnvironment;
- (id)preferredFocusEnvironments;
- (void)setIsFocusEnvironment:(bool)arg1;
- (void)setItemContainer:(id)arg1;
- (void)setNeedsFocusUpdate;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;

@end
