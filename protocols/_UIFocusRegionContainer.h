/* Generated by RuntimeBrowser.
 */

@protocol _UIFocusRegionContainer <_UIFocusEnvironmentPrivate>

@required

- (<UICoordinateSpace> *)_preferredFocusRegionCoordinateSpace;
- (_UIFocusRegion *)_regionForFocusedItem:(id <UIFocusItem>)arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (void)_searchForFocusRegionsInContext:(id <_UIFocusRegionSearchContext>)arg1;

@optional

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clippingRectInCoordinateSpace:(id <UICoordinateSpace>)arg1;

@end
