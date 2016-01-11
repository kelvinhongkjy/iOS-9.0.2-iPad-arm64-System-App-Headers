//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICAttachmentNavigationController.h"

@class ICDrawingViewController;

@interface ICDrawingNavigationController : ICAttachmentNavigationController
{
    ICDrawingViewController *_drawingViewController;
}

- (void).cxx_destruct;
- (struct CGRect)contentsRectForInlineAttachment;
- (void)didCancelTransitionTo;
@property(retain, nonatomic) ICDrawingViewController *drawingViewController; // @synthesize drawingViewController=_drawingViewController;
- (struct CGRect)frameForFullscreenAttachmentInView:(id)arg1;
- (id)freeTransformableViewController;
- (id)imageForTransition;
- (id)initWithPresentationDelegate:(id)arg1 gotoNoteButton:(id)arg2 editable:(_Bool)arg3;
- (id)scrimColor;
- (_Bool)shouldAutorotate;
- (void)willTransitionOut;

@end
