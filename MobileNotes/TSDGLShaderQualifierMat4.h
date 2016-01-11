//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSDGLShaderQualifier.h"

@interface TSDGLShaderQualifierMat4 : TSDGLShaderQualifier
{
    struct CATransform3D _transform3D;
    struct CATransform3D _proposedTransform3D;
}

- (id)description;
- (id)initWithTransform3D:(struct CATransform3D)arg1;
@property(nonatomic) struct CATransform3D proposedTransform3D; // @synthesize proposedTransform3D=_proposedTransform3D;
- (void)setGLUniformWithShader:(id)arg1;
@property(readonly, nonatomic) struct CATransform3D transform3D; // @synthesize transform3D=_transform3D;

@end

