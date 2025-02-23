/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface __NSTextSelectionLineFragmentInfo : NSObject {
    long long  _baseDirection;
    struct { double x1; id x2; id x3; bool x4; bool x5; } * _carets;
    NSTextSelectionNavigation * _navigation;
    long long  _numberOfCarets;
    long long  _offset;
    NSArray * _otherLocations;
    NSMapTable * _primaryLocationTable;
    NSSet * _secondaryLocationTable;
    NSArray * _sortedLocations;
    NSTextRange * _textRange;
    int  _visualDirection;
}

@property (getter=isMonotonicDirection, readonly) bool monotonicDirection;
@property long long numberOfCaretPositions;
@property (readonly) NSTextRange *textRange;
@property (readonly) NSTextSelectionNavigation *textSelectionNavigation;

- (long long)_baseWritingDirection;
- (void)_cache;
- (id)_findNextCaretLocationForLocation:(id)arg1;
- (long long)_sortedLocationIndexForLocation:(id)arg1;
- (id)_sortedLocations;
- (const struct { double x1; id x2; id x3; bool x4; bool x5; }*)caretPositionAtIndex:(long long)arg1;
- (const struct { double x1; id x2; id x3; bool x4; bool x5; }*)caretPositionClosestToLocation:(id)arg1 visualDirection:(long long)arg2 matchLocation:(out bool*)arg3;
- (const struct { double x1; id x2; id x3; bool x4; bool x5; }*)caretPositionClosestToOffset:(double)arg1;
- (void)dealloc;
- (id)description;
- (long long)indexForEdgeLocationInTextRanges:(id)arg1 leading:(bool)arg2;
- (long long)indexForPrimaryLocation:(id)arg1;
- (id)initWithTextSelectionNavigation:(id)arg1 range:(id)arg2;
- (bool)isMonotonicDirection;
- (const struct { double x1; id x2; id x3; bool x4; bool x5; }*)logicalFirstCaret;
- (const struct { double x1; id x2; id x3; bool x4; bool x5; }*)logicalLastCaret;
- (long long)numberOfCaretPositions;
- (double)offsetForLocation:(id)arg1;
- (id)rangesBetweenStartingOffset:(double)arg1 endOffset:(double)arg2 continuous:(bool)arg3;
- (id)textRange;
- (id)textRangeOfCharacterAtOffset:(double)arg1 fractionOfDistanceThroughGlyph:(double*)arg2;
- (id)textSelectionNavigation;

@end
