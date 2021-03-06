//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICAVPlayerViewController, ICMovieAttachmentView;

@interface ICMovieController : NSObject
{
    _Bool _playbackForPreview;
    ICMovieAttachmentView *_activeMovieAttachmentView;
    ICAVPlayerViewController *_moviePlayerController;
}

+ (void)pauseIfPlaying;
+ (id)sharedController;
+ (void)stopIfPlaying;
- (void).cxx_destruct;
@property(retain, nonatomic) ICMovieAttachmentView *activeMovieAttachmentView; // @synthesize activeMovieAttachmentView=_activeMovieAttachmentView;
- (void)dealloc;
@property(retain, nonatomic) ICAVPlayerViewController *moviePlayerController; // @synthesize moviePlayerController=_moviePlayerController;
- (void)moviePlayerTapped;
- (void)pauseIfPlaying;
- (void)play;
@property(nonatomic) _Bool playbackForPreview; // @synthesize playbackForPreview=_playbackForPreview;
- (_Bool)prepareForPlayback;
- (void)stopIfPlaying;
- (void)updatePlayer;

@end

