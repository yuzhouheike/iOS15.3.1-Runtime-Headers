/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIMenu : UIMenuElement <UIMenuSelectable, _UIMenuElementStateObserver> {
    NSArray * _children;
    bool  _forceAutomaticSelection;
    <UIMenuForcedAutomaticSelectionDelegate> * _forcedAutomaticSelectionDelegate;
    NSString * _identifier;
    struct { 
        bool isPreparedForDisplay; 
        bool hasVisibleSelectedItem; 
        bool hasDeepHierarchy; 
        bool hasAtLeastOneVisibleItem; 
    }  _metadata;
    unsigned long long  _options;
}

@property (nonatomic, readonly, copy) NSArray *_selectedElements;
@property (nonatomic, readonly) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceAutomaticSelection;
@property (nonatomic) <UIMenuForcedAutomaticSelectionDelegate> *forcedAutomaticSelectionDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) struct { bool x1; bool x2; bool x3; bool x4; } metadata;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSArray *selectedElements;
@property (readonly) Class superclass;

+ (id)_defaultInlineMenuWithIdentifier:(id)arg1 children:(id)arg2;
+ (id)_defaultMenuTitles;
+ (id)_defaultMenuWithIdentifier:(id)arg1 children:(id)arg2;
+ (id)menuWithChildren:(id)arg1;
+ (id)menuWithTitle:(id)arg1 children:(id)arg2;
+ (id)menuWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 children:(id)arg5;
+ (id)menuWithTitle:(id)arg1 imageName:(id)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 children:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (void)_acceptMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3 deferredElementVisit:(id /* block */)arg4;
- (void)_acceptMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (void)_elementStateDidChange:(id)arg1;
- (void)_elementWillPerformAction:(id)arg1;
- (id)_immutableCopy;
- (id)_immutableCopySharingLeafObservers:(bool)arg1;
- (id)_mutableCopy;
- (id)_selectedElements;
- (id)_spiRepresentation;
- (void)addAsStateObserver;
- (id)childElementForElement:(id)arg1;
- (id)children;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)establishInitialDefaultSingleSelection;
- (bool)forceAutomaticSelection;
- (id)forcedAutomaticSelectionDelegate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithMenu:(id)arg1 overrideChildren:(id)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3 identifier:(id)arg4 options:(unsigned long long)arg5 children:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)menuByReplacingChildren:(id)arg1;
- (struct { bool x1; bool x2; bool x3; bool x4; })metadata;
- (unsigned long long)options;
- (id)recurisvelySelectDefaultForcedSelection;
- (void)removeAsStateObserver;
- (id)selectedElements;
- (void)setForceAutomaticSelection:(bool)arg1;
- (void)setForcedAutomaticSelectionDelegate:(id)arg1;
- (void)setMetadata:(struct { bool x1; bool x2; bool x3; bool x4; })arg1;
- (void)updateChildrenForSingleSelectedElement:(id)arg1;

@end
