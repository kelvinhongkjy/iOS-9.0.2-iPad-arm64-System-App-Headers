//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICFreeTransformGestureRecognizer.h"

@class NSTimer;

@interface ICRulerGestureRecognizer : ICFreeTransformGestureRecognizer
{
    NSTimer *_startTimer;
    _Bool _initialSnap;
    double _startDelay;
    double _startSnapThreshold;
}

- (void).cxx_destruct;
- (struct CGAffineTransform)freeTransform;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (struct CGAffineTransform)rulerTransform;
@property(nonatomic) double startDelay; // @synthesize startDelay=_startDelay;
@property(nonatomic) double startSnapThreshold; // @synthesize startSnapThreshold=_startSnapThreshold;
- (void)start;
- (void)stopTimer;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGAffineTransform)unscaledFreeTransform;

@end

