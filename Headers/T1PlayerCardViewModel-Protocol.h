//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, TFNTwitterCardContext;

@protocol T1PlayerCardViewModel <NSObject>
@property(readonly, nonatomic) TFNTwitterCardContext *cardContext;
@property(readonly, nonatomic) long long playerControllerMode;
@property(readonly, nonatomic) _Bool canPlayStreamInline;
@property(readonly, nonatomic) _Bool isMediaStream;
@property(readonly, nonatomic) _Bool isAmplify;
@property(readonly, nonatomic) _Bool isVine;
@property(readonly, copy, nonatomic) NSString *streamURL;
@end

