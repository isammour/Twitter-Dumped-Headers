//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterMomentMakerCapsuleChange-Protocol.h>

@class NSMutableArray, NSNumber, NSString;

@interface TFNTwitterMomentMakerCapsuleCurationList : NSObject <TFNTwitterMomentMakerCapsuleChange>
{
    NSString *_momentID;
    NSNumber *_maxCount;
    NSMutableArray *_curationArray;
}

@property(retain, nonatomic) NSMutableArray *curationArray; // @synthesize curationArray=_curationArray;
@property(retain, nonatomic) NSNumber *maxCount; // @synthesize maxCount=_maxCount;
@property(copy, nonatomic) NSString *momentID; // @synthesize momentID=_momentID;
- (void).cxx_destruct;
- (id)apiCommandWithAccountID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (id)requestParameters;
- (id)modifiedCapsuleWithCapsule:(id)arg1;
- (_Bool)hasChanges;
- (void)removeLastChange;
- (id)lastChange;
- (void)addChange:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

