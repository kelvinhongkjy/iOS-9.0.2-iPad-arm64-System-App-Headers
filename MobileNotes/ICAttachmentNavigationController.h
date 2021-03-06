//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@class ICFreeTransformableViewController, UIBarButtonItem, UIView;

@interface ICAttachmentNavigationController : UINavigationController
{
    id <ICAttachmentPresentationDelegate> _attachmentPresentationDelegate;
    UIBarButtonItem *_goToNoteButton;
}

- (void).cxx_destruct;
@property __weak id <ICAttachmentPresentationDelegate> attachmentPresentationDelegate; // @synthesize attachmentPresentationDelegate=_attachmentPresentationDelegate;
@property(readonly) UIView *attachmentView;
- (struct CGRect)contentsRectForInlineAttachment;
- (struct CGRect)contentsRectInAttachmentViewForBounds:(struct CGRect)arg1 flipped:(_Bool)arg2;
- (void)didCancelTransitionTo;
- (struct CGRect)frameForFullscreenAttachmentInView:(id)arg1;
@property(readonly, nonatomic) ICFreeTransformableViewController *freeTransformableViewController;
@property(retain) UIBarButtonItem *goToNoteButton; // @synthesize goToNoteButton=_goToNoteButton;
- (id)imageForTransition;
- (id)initWithAttachmentPresentationDelegate:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (id)scrimColor;
- (_Bool)shouldHideStatusBar;
- (void)willTransitionOut;

@end

