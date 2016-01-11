//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICAudioCaptureOutputWriterDelegate.h"

@class AVCaptureDeviceInput, AVCaptureSession, ICAudioCaptureInputWaveformDataSource, ICAudioCaptureOutputWriter, NSDate, NSHashTable, NSObject<OS_dispatch_group>, NSString;

@interface ICAudioCaptureSession : NSObject <ICAudioCaptureOutputWriterDelegate>
{
    AVCaptureSession *_captureSession;
    ICAudioCaptureOutputWriter *_captureOutputWriter;
    unsigned long long _backgroundTaskIdentifier;
    NSObject<OS_dispatch_group> *_endCaptureTaskGroup;
    long long _sessionCaptureState;
    NSString *_sessionRouteName;
    NSDate *_captureStartDate;
    _Bool _handledFinishedCapturingAfterCompletionSound;
    _Bool _handlingDidFinishCapturing;
    _Bool _deleteCapturedOutWhenFinished;
    _Bool _destinationShouldBeDeleted;
    _Bool _captureBeginSoundEffectDisabled;
    _Bool _captureEndSoundEffectDisabled;
    NSHashTable *_weakObservers;
    AVCaptureDeviceInput *_inputDevice;
    ICAudioCaptureInputWaveformDataSource *_captureWaveformDataSource;
    id <ICAudioCaptureSessionSampleObserver> _sampleObserver;
    long long _captureState;
}

+ (void)playCaptureDidFinishSoundEffectWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)playCaptureWillStartSoundEffectWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (_Bool)_attachInputToCaptureSession:(id)arg1;
- (void)_beginAVCapturingToDestinationInitiallyPaused:(_Bool)arg1;
- (void)_captureInputDeviceAvailabilityDidChangeNotification:(id)arg1;
- (void)_captureInputDeviceRouteDidChangeNotification:(id)arg1;
- (void)_closeCaptureSession;
- (void)_enumerateCaptureSessionObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleCaptureSessionDidError:(id)arg1;
- (_Bool)_openAVCaptureSessionAndWaitUntilRunning;
- (void)_postToObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_setPostPrepareRequestedState:(long long)arg1;
- (void)addCaptureSessionObserver:(id)arg1;
@property(readonly, nonatomic) double captureDestinationComposedDuration;
@property(readonly, nonatomic) ICAudioCaptureOutputWriter *captureOutputWriter; // @synthesize captureOutputWriter=_captureOutputWriter;
- (void)captureOutputWriter:(id)arg1 captureSessionDidTerminateWithError:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3;
- (void)captureOutputWriter:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)captureOutputWriter:(id)arg1 didPauseWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didResumeWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didStartWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 willFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3;
@property(readonly, nonatomic) long long captureState; // @synthesize captureState=_captureState;
@property(readonly, nonatomic) ICAudioCaptureInputWaveformDataSource *captureWaveformDataSource; // @synthesize captureWaveformDataSource=_captureWaveformDataSource;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)disableCaptureBeginSoundEffect;
- (void)disableCaptureEndSoundEffect;
- (void)finishCapturing;
- (id)init;
- (id)initWithInputDevice:(id)arg1 captureWaveformDataSource:(id)arg2;
@property(readonly, nonatomic) AVCaptureDeviceInput *inputDevice; // @synthesize inputDevice=_inputDevice;
- (_Bool)isCaptureActive;
- (_Bool)isCapturePaused;
@property(readonly, nonatomic) _Bool isCaptureSessionFinished;
- (_Bool)isPreparing;
- (void)pauseCapturing;
- (void)prepareToCaptureWithPreparedHandler:(CDUnknownBlockType)arg1;
- (void)removeCaptureSessionObserver:(id)arg1;
- (void)resumeCapturing;
@property __weak id <ICAudioCaptureSessionSampleObserver> sampleObserver; // @synthesize sampleObserver=_sampleObserver;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

