//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UICompatibilityTextView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSLayoutConstraint, NSString, UILongPressGestureRecognizer;

@interface NoteTextView : _UICompatibilityTextView <UIGestureRecognizerDelegate>
{
    id <NoteTextViewActionDelegate> _actionDelegate;
    id <NoteTextViewLayoutDelegate> _layoutDelegate;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSLayoutConstraint *_contentSizeHeightConstraint;
    NSLayoutConstraint *_contentSizeWidthConstraint;
}

- (void).cxx_destruct;
- (id)_accessibilitySpeakSelectionAssociatedScrollView;
- (id)_contentAsPasteboardItemsForWebArchive:(id)arg1 selectionRange:(struct _NSRange)arg2;
- (id)_enclosingScrollerIncludingSelf;
- (_Bool)_forwardsToParentScroller;
- (id)_targetForAction:(SEL)arg1 withSender:(id)arg2 canPerformActionBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) __weak id <NoteTextViewActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)addGestureRecognizer:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contentAsPasteboardItems;
@property(retain, nonatomic) NSLayoutConstraint *contentSizeHeightConstraint; // @synthesize contentSizeHeightConstraint=_contentSizeHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentSizeWidthConstraint; // @synthesize contentSizeWidthConstraint=_contentSizeWidthConstraint;
- (void)copy:(id)arg1;
- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (id)htmlDocument;
- (id)initWithFrame:(struct CGRect)arg1 font:(id)arg2;
- (void)insertImage:(id)arg1;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic) __weak id <NoteTextViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
- (void)menuControllerWillHideNotification:(id)arg1;
- (id)nodeAtPoint:(struct CGPoint *)arg1;
- (void)paste:(id)arg1;
- (id)selectedContentAsPasteboardItems;
- (id)selectedDOMRange;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setEditable:(_Bool)arg1;
- (void)setGestureRecognizersPriorities;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)updateMenuController;
- (id)webArchive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

