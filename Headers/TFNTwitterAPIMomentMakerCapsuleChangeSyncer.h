//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterMomentMakerCapsuleChangeSyncer-Protocol.h>

@class NSMutableArray, NSString, TFNTwitterAccount;

@interface TFNTwitterAPIMomentMakerCapsuleChangeSyncer : NSObject <TFNTwitterMomentMakerCapsuleChangeSyncer>
{
    _Bool _syncing;
    TFNTwitterAccount *_account;
    NSMutableArray *_changes;
    NSMutableArray *_dependentChanges;
}

@property(retain, nonatomic) NSMutableArray *dependentChanges; // @synthesize dependentChanges=_dependentChanges;
@property(retain, nonatomic) NSMutableArray *changes; // @synthesize changes=_changes;
@property(nonatomic, getter=isSyncing) _Bool syncing; // @synthesize syncing=_syncing;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)syncChangesWithResponseBlock:(CDUnknownBlockType)arg1;
- (void)addDependentChange:(id)arg1 withSuccessCompletionBlock:(CDUnknownBlockType)arg2;
- (void)addChanges:(id)arg1;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

