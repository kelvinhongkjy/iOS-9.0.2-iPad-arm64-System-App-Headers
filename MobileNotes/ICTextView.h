//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class CALayer, CATransformLayer, ICNoteEditorViewController, NSAttributedString, NSDictionary, UILabel, UIResponder, UIView;

@interface ICTextView : UITextView
{
    struct _NSRange _selectedRangeBeforeMarking;
    _Bool _shouldAvoidBecomingFirstResponder;
    _Bool __icaxShouldPreventUpdatingFakeCursorRange;
    _Bool _disableContentOffsetChanges;
    _Bool _isInSetBounds;
    ICNoteEditorViewController *_editorController;
    UILabel *_dateLabel;
    CALayer *_topSplitLayer;
    CALayer *_bottomSplitLayer;
    UIResponder *_nextResponderOverride;
    unsigned long long __icaxModifiedCursorPosition;
    NSAttributedString *__icaxCachedModifiedAttributedString;
    CATransformLayer *_splitLayerContainer;
    NSDictionary *_icTypingAttributes;
    NSDictionary *_pendingTypingAttributes;
    struct _NSRange __icaxModifiedSelectionRange;
    struct CGRect _currentSetBoundsRect;
}

- (void).cxx_destruct;
- (id)TTTextStorage;
- (id)TTTextStorageOptional;
- (void)_deleteBackwardAndNotify:(_Bool)arg1;
@property(copy, nonatomic) NSAttributedString *_icaxCachedModifiedAttributedString; // @synthesize _icaxCachedModifiedAttributedString=__icaxCachedModifiedAttributedString;
@property(nonatomic) unsigned long long _icaxModifiedCursorPosition; // @synthesize _icaxModifiedCursorPosition=__icaxModifiedCursorPosition;
@property(nonatomic) struct _NSRange _icaxModifiedSelectionRange; // @synthesize _icaxModifiedSelectionRange=__icaxModifiedSelectionRange;
@property(nonatomic) _Bool _icaxShouldPreventUpdatingFakeCursorRange; // @synthesize _icaxShouldPreventUpdatingFakeCursorRange=__icaxShouldPreventUpdatingFakeCursorRange;
@property(readonly, nonatomic) NSAttributedString *_icaxUnfilteredAttributedString;
- (id)_nextKeyResponder;
- (void)_pushPendingTypingAttributesIfNeeded;
- (void)applyLeftAndRightEdgeInsets:(struct UIEdgeInsets)arg1;
- (_Bool)becomeFirstResponder;
@property(retain, nonatomic) CALayer *bottomSplitLayer; // @synthesize bottomSplitLayer=_bottomSplitLayer;
- (_Bool)canBecomeFirstResponder;
- (struct CGRect)caretRectForPosition:(id)arg1;
@property(readonly, nonatomic) UIView *containerViewForAttachments;
- (void)copy:(id)arg1;
- (void)createDateLabel;
- (void)createLayersForSplitAtCharacter:(unsigned long long)arg1 topTargetFrame:(struct CGRect *)arg2 bottomTargetFrame:(struct CGRect *)arg3;
@property(nonatomic) struct CGRect currentSetBoundsRect; // @synthesize currentSetBoundsRect=_currentSetBoundsRect;
- (id)customCopyData;
- (void)cut:(id)arg1;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(readonly, nonatomic) double dateLabelOverscroll;
- (void)dealloc;
- (void)deleteBackward;
@property(nonatomic) _Bool disableContentOffsetChanges; // @synthesize disableContentOffsetChanges=_disableContentOffsetChanges;
@property(nonatomic) __weak ICNoteEditorViewController *editorController; // @synthesize editorController=_editorController;
- (void)handleAccessibilityDarkerSystemColorsStatusDidChange:(id)arg1;
@property(retain, nonatomic) NSDictionary *icTypingAttributes; // @synthesize icTypingAttributes=_icTypingAttributes;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)inputModeDidChange:(id)arg1;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) NSDictionary *internalTypingAttributes;
@property(nonatomic) _Bool isInSetBounds; // @synthesize isInSetBounds=_isInSetBounds;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (double)maxYContentOffset;
- (struct UIEdgeInsets)minimumMargins;
@property(nonatomic) __weak UIResponder *nextResponderOverride; // @synthesize nextResponderOverride=_nextResponderOverride;
- (void)paste:(id)arg1;
@property(retain, nonatomic) NSDictionary *pendingTypingAttributes; // @synthesize pendingTypingAttributes=_pendingTypingAttributes;
- (_Bool)replaceCharactersInSelectedRangeWithoutExceedingMaxLengthWithAttributedString:(id)arg1;
- (_Bool)resignFirstResponder;
- (void)select:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setClampedContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setEditable:(_Bool)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setSelectedRange:(struct _NSRange)arg1;
@property(nonatomic) _Bool shouldAvoidBecomingFirstResponder; // @synthesize shouldAvoidBecomingFirstResponder=_shouldAvoidBecomingFirstResponder;
@property(retain, nonatomic) CATransformLayer *splitLayerContainer; // @synthesize splitLayerContainer=_splitLayerContainer;
@property(retain, nonatomic) CALayer *topSplitLayer; // @synthesize topSplitLayer=_topSplitLayer;
- (void)setTypingAttributes:(id)arg1;
- (void)setupLinkTextAttributes;
- (struct CGRect)splitFrameForCharacterRange:(struct _NSRange)arg1 withTargetFrame:(struct CGRect *)arg2 top:(_Bool)arg3;
- (struct CGRect)splitFrameForCharacterRange:(struct _NSRange)arg1 withTargetFrame:(struct CGRect *)arg2 top:(_Bool)arg3 originForRendering:(struct CGPoint *)arg4;
- (id)splitLayerForCharacterRange:(struct _NSRange)arg1 withTargetFrame:(struct CGRect *)arg2 top:(_Bool)arg3;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)textStorageDidEndEditingNotification:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (id)typingAttributes;
- (id)undoManager;
- (void)unmarkText;

@end

