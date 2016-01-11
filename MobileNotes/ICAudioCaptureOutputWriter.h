//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"

@class AVAssetWriter, AVCaptureAudioDataOutput, AVCaptureSession, NSDate, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSURL, NSUUID;

@interface ICAudioCaptureOutputWriter : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate>
{
    _Bool _waitingForAVCaptureSessionDidStart;
    _Bool _handledAVCaptureSessionTerminatedAbnormally;
    _Bool _handledAVCaptureSessionFailedToStart;
    _Bool _isProcessingSamples;
    long long _AVCaptureSessionStartupState;
    unsigned long long _sampleBuffersWritten;
    NSMutableArray *_delegateBlocks;
    CDStruct_1b6d18a9 _sampleBuffersWrittenDuration;
    _Bool _finalizedAssetEncounteredError;
    double _maxRecordedDuration;
    unsigned long long _maxRecordedFileSize;
    AVCaptureSession *_AVCaptureSession;
    long long _writerState;
    id <ICAudioCaptureOutputWriterDelegate> _captureOutputDelegate;
    NSURL *_finalizedAssetURL;
    double _finalizedAssetDuration;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_recordingSessionID;
    NSURL *_activeOutputFileURL;
    NSDate *_recordingCreationDate;
    AVAssetWriter *_assetWriter;
    NSObject<OS_dispatch_queue> *_sampleBufferQueue;
    AVCaptureAudioDataOutput *_sampleBufferDataOutput;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AVCaptureSession *AVCaptureSession; // @synthesize AVCaptureSession=_AVCaptureSession;
- (void)_checkIfRecordingSessionEverStarted:(id)arg1;
- (void)_clearSampleDataOutput;
- (void)_finalizeAssetWriting;
- (_Bool)_handleEncounteredFatalAssetWriterError;
- (_Bool)_handleNotificationAsSessionStartFailure;
- (void)_interruptionDidBegin:(id)arg1;
- (void)_prepareCaptureSessionOutputsIfNecessary;
- (void)_registerForCatpureSessionNotifications;
- (void)_scheduleMainThreadDelegateBlock:(CDUnknownBlockType)arg1;
- (void)_sessionDidStartRunning:(id)arg1;
- (void)_sessionDidStopRunning:(id)arg1;
- (void)_sessionErrored:(id)arg1;
- (void)_setWriterState:(long long)arg1;
- (_Bool)_setupAssetWriter:(id *)arg1 sampleBufferRef:(struct opaqueCMSampleBuffer *)arg2;
- (void)_unregisterForCatpureSessionNotifications;
- (long long)_writerState;
@property(retain, nonatomic) NSURL *activeOutputFileURL; // @synthesize activeOutputFileURL=_activeOutputFileURL;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(readonly, nonatomic) double assetWritingCheckpointInterval;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
@property(nonatomic) __weak id <ICAudioCaptureOutputWriterDelegate> captureOutputDelegate; // @synthesize captureOutputDelegate=_captureOutputDelegate;
- (double)currentRecordedDuration;
- (void)dealloc;
- (void)endWriting;
@property(readonly, nonatomic) double finalizedAssetDuration; // @synthesize finalizedAssetDuration=_finalizedAssetDuration;
@property(readonly, nonatomic) _Bool finalizedAssetEncounteredError; // @synthesize finalizedAssetEncounteredError=_finalizedAssetEncounteredError;
@property(readonly, nonatomic) NSURL *finalizedAssetURL; // @synthesize finalizedAssetURL=_finalizedAssetURL;
- (id)initWithAVCaptureSession:(id)arg1;
@property(nonatomic) double maxRecordedDuration; // @synthesize maxRecordedDuration=_maxRecordedDuration;
@property(nonatomic) unsigned long long maxRecordedFileSize; // @synthesize maxRecordedFileSize=_maxRecordedFileSize;
- (void)pauseWriting;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSDate *recordingCreationDate; // @synthesize recordingCreationDate=_recordingCreationDate;
@property(copy, nonatomic) NSUUID *recordingSessionID; // @synthesize recordingSessionID=_recordingSessionID;
- (void)resumeWriting;
@property(retain, nonatomic) AVCaptureAudioDataOutput *sampleBufferDataOutput; // @synthesize sampleBufferDataOutput=_sampleBufferDataOutput;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferQueue; // @synthesize sampleBufferQueue=_sampleBufferQueue;
@property(nonatomic) long long writerState; // @synthesize writerState=_writerState;
- (_Bool)startCaptureSession;
- (_Bool)startWritingToOutputFileURL:(id)arg1 creationDate:(id)arg2 beginPaused:(_Bool)arg3 captureOutputDelegate:(id)arg4;
- (void)stopCaptureSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

