//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray;
@protocol TFNTwitterMomentMakerDependentChange;

@protocol TFNTwitterMomentMakerCapsuleChangeSyncer <NSObject>
- (_Bool)isSyncing;
- (void)syncChangesWithResponseBlock:(void (^)(_Bool, TFNTwitterMomentCapsule *, NSError *))arg1;
- (void)addDependentChange:(id <TFNTwitterMomentMakerDependentChange>)arg1 withSuccessCompletionBlock:(void (^)(void))arg2;
- (void)addChanges:(NSArray *)arg1;
@end

