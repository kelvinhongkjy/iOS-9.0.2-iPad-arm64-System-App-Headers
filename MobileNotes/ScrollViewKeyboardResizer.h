//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView;

@interface ScrollViewKeyboardResizer : NSObject
{
    _Bool _autoResizing;
    _Bool _observingKeyboardNotifications;
    _Bool _didResizeScrollView;
    UIScrollView *_scrollView;
    id <ScrollViewKeyboardResizerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)applyInsetsFromKeyboardFrame:(struct CGRect)arg1;
- (void)clearInsets;
- (void)dealloc;
@property(nonatomic) __weak id <ScrollViewKeyboardResizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool didResizeScrollView; // @synthesize didResizeScrollView=_didResizeScrollView;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)handleKeyboardWillShow:(id)arg1;
- (id)init;
- (id)initWithScrollView:(id)arg1;
@property(nonatomic, getter=isAutoResizing) _Bool autoResizing; // @synthesize autoResizing=_autoResizing;
@property(nonatomic, getter=isObservingKeyboardNotifications) _Bool observingKeyboardNotifications; // @synthesize observingKeyboardNotifications=_observingKeyboardNotifications;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)startAutoResizing;
- (void)stopAutoResizing;

@end

