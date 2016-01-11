//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, TSDGLDataBuffer, TSDGLShader;

@interface ICDrawingResourceHandler : NSObject
{
    TSDGLShader *_renderShader;
    TSDGLShader *_compositeWhiteShader;
    TSDGLShader *_compositePaperShader;
    TSDGLShader *_compositeOverShader[4];
    TSDGLShader *_compositeMultiplyShader[4];
    TSDGLShader *_compositeSoftWhiteShader[4];
    TSDGLShader *_compositeEraseShader[4];
    TSDGLShader *_paintShader;
    TSDGLShader *_paperShader;
    TSDGLShader *_particleShader;
    int _paperTexture;
    struct CGSize _paperTextureSize;
    int _pencilParticleTexture;
    int _markerParticleTexture;
    unsigned long long _reusablePaintDataBufferCapacity;
    TSDGLDataBuffer *_quadBuffer;
    struct __CVOpenGLESTextureCache *_textureCache;
    int _backingWidth;
    int _backingHeight;
    NSMutableArray *_drawingFrameBuffers;
    NSMutableArray *_paintFrameBuffers;
    NSMutableArray *_strokeBuffers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) int backingHeight; // @synthesize backingHeight=_backingHeight;
@property(readonly, nonatomic) int backingWidth; // @synthesize backingWidth=_backingWidth;
- (id)cachedQuadDataBuffer;
- (id)claimDrawingFrameBuffer;
- (id)claimPaintFrameBuffer;
- (id)compositeEraseShaderOnPaper:(_Bool)arg1 clipping:(_Bool)arg2;
- (id)compositeMultiplyShaderOnPaper:(_Bool)arg1 clipping:(_Bool)arg2;
- (id)compositeOverShaderOnPaper:(_Bool)arg1 clipping:(_Bool)arg2;
@property(readonly, nonatomic) TSDGLShader *compositePaperShader;
- (id)compositeShader:(id *)arg1 fragmentName:(id)arg2 onPaper:(_Bool)arg3 clipping:(_Bool)arg4;
- (id)compositeSoftWhiteShaderOnPaper:(_Bool)arg1 clipping:(_Bool)arg2;
- (id)compositeWhiteShader;
@property(readonly, nonatomic) NSMutableArray *drawingFrameBuffers; // @synthesize drawingFrameBuffers=_drawingFrameBuffers;
- (id)drawingTexConfig;
- (void)flushMemoryIfPossible;
- (id)init;
@property(readonly, nonatomic) unsigned int markerTexture;
- (id)paintDataBufferWithCapacity:(unsigned long long)arg1 dynamicDraw:(_Bool)arg2;
@property(readonly, nonatomic) NSMutableArray *paintFrameBuffers; // @synthesize paintFrameBuffers=_paintFrameBuffers;
@property(readonly, nonatomic) TSDGLShader *paintShader;
- (id)paintTexConfig;
@property(readonly, nonatomic) TSDGLShader *paperShader;
@property(readonly, nonatomic) unsigned int paperTexture;
@property(readonly, nonatomic) struct CGSize paperTextureSize;
@property(readonly, nonatomic) TSDGLShader *particleShader;
@property(readonly, nonatomic) unsigned int pencilTexture;
- (id)quadDataBufferForDynamicDraw:(_Bool)arg1;
- (void)releaseDrawingFrameBuffer:(id)arg1;
- (void)releasePaintFrameBuffer:(id)arg1;
@property(readonly, nonatomic) TSDGLShader *renderShader;
@property(readonly, nonatomic) NSMutableArray *strokeBuffers; // @synthesize strokeBuffers=_strokeBuffers;
- (void)updateFullScreenQuadDataBuffer:(id)arg1 flipped:(_Bool)arg2;

@end

