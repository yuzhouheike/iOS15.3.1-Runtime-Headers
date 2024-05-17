/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusBehavior_FKA : NSObject <_UIFocusBehavior>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (long long)buttonSelectionMode;
- (long long)cellFocusability;
- (bool)controlCanBecomeFocused:(id)arg1;
- (bool)defaultValueForSelectionFollowsFocusInCollectionView:(id)arg1;
- (bool)defaultValueForSelectionFollowsFocusInTableView:(id)arg1;
- (long long)deliverKeyEventsToFocusEngine;
- (bool)enforcesStrictTargetContentOffsetAdjustmentBehavior;
- (long long)focusCastingMode;
- (long long)focusDeferral;
- (long long)focusRingVisibility;
- (bool)honorsFocusSystemEnabledInfoPlistKey;
- (bool)ignoresKeyWindowStatusWhenRestoringFocus;
- (bool)includesContentScrollViewInPreferredFocusEnvironments;
- (long long)indirectMovementPriority;
- (bool)preventsCellFocusabilityWhileEditing;
- (long long)requiredInputDevices;
- (bool)searchBarTextFieldCanBecomeFocused;
- (bool)shouldConvertIndirectTapsIntoArrowKeys;
- (bool)shouldEnableFocusOnSelect;
- (bool)shouldSupressIndirectMovementOnSelect;
- (bool)shouldUseAccessibilityCompareForItemGeometry;
- (bool)showsFocusRingForItem:(id)arg1;
- (long long)skipKeyCommandsForKeyEvents;
- (bool)supportViewTransparencyAndMultipleWindows;
- (bool)supportsArrowKeys;
- (bool)supportsClipToBounds;
- (bool)supportsFocusGroups;
- (bool)supportsGameControllers;
- (bool)supportsIndirectPanningMovement;
- (bool)supportsLinearMovementDebugOverlay;
- (bool)supportsParentFocusRings;
- (bool)supportsTabKey;
- (bool)syncsFocusAndResponder;
- (bool)tabBarButtonCanBecomeFocused;
- (bool)tabBarCanBecomeFocused;
- (bool)tabBasedMovementLoops;
- (bool)textViewCanBecomeFocused:(id)arg1;
- (bool)throttlesProgrammaticFocusUpdates;
- (bool)treatFirstAndLastHeadingsAsGlobal;
- (bool)treatFocusableItemAsLeaf;
- (bool)wantsFocusSystemForScene:(id)arg1;
- (bool)wantsTreeLocking;

@end
