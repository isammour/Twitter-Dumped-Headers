//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/NSObject-Protocol.h>

@protocol H264DecoderOutput <NSObject>

@optional
- (void)hardwareDecoderUnavailable;
- (void)decompressedFrame:(struct __CVBuffer *)arg1 frameInfo:(CDStruct_a5be9c7f *)arg2;
@end
