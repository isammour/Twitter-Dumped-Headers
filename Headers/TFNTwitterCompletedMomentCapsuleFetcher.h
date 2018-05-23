//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterMomentCapsuleFetcher-Protocol.h>

@class NSString, TFNTwitterMomentCapsule;

@interface TFNTwitterCompletedMomentCapsuleFetcher : NSObject <TFNTwitterMomentCapsuleFetcher>
{
    TFNTwitterMomentCapsule *_momentCapsule;
}

@property(retain, nonatomic) TFNTwitterMomentCapsule *momentCapsule; // @synthesize momentCapsule=_momentCapsule;
- (void).cxx_destruct;
- (_Bool)isFetching;
- (void)fetchMomentCapsuleWithResponseBlock:(CDUnknownBlockType)arg1;
- (id)initWithMomentCapsule:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

