//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFoundMediaStream.h>

@class TFNFoundMediaGroup;

@interface TFNFoundMediaObjectsStream : TFNFoundMediaStream
{
    TFNFoundMediaGroup *_group;
}

@property(readonly, nonatomic) TFNFoundMediaGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (id)displayName;
- (id)loadWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithGroup:(id)arg1 provider:(id)arg2 imageFormat:(long long)arg3;
- (id)initWithProvider:(id)arg1 imageFormat:(long long)arg2;

@end

