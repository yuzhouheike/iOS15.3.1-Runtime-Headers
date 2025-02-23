/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

@interface PBPasteButtonTag : NSObject <NSCopying, NSSecureCoding>

+ (id)calloutBarPasteButtonTagWithVariantIndex:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 titleOrigin:(struct CGPoint { double x1; double x2; })arg3 contentScaleLevel:(unsigned long long)arg4;
+ (id)calloutBarPasteButtonTagWithVariantIndex:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 titleOrigin:(struct CGPoint { double x1; double x2; })arg3 titleWidth:(double)arg4 contentScaleLevel:(unsigned long long)arg5;
+ (id)contextMenuPasteButtonTagWithVariantIndex:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 titleOrigin:(struct CGPoint { double x1; double x2; })arg3;
+ (bool)supportsSecureCoding;
+ (id)systemInputAssistantPasteButtonTag;
+ (id)systemInputAssistantPasteButtonTagWithSite:(long long)arg1;
+ (id)undoInteractionHUDIconPasteButtonTagWithMinWidth:(double)arg1;
+ (id)undoInteractionHUDTextPasteButtonTagWithMinWidth:(double)arg1;

- (id)_acceptCalloutBarPasteButtonTagVisit:(id /* block */)arg1 systemInputAssistantPasteButtonTagVisit:(id /* block */)arg2 undoInteractionHUDIconPasteButtonTagVisit:(id /* block */)arg3 undoInteractionHUDTextPasteButtonTagVisit:(id /* block */)arg4 contextMenuPasteButtonTagVisit:(id /* block */)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)grade;
- (id)initWithCoder:(id)arg1;
- (id)resolvedStyleForStyle:(id)arg1;

@end
