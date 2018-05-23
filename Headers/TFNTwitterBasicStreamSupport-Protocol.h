//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSString, TFNTwitterAccount;

@protocol TFNTwitterBasicStreamSupport <NSObject>
- (NSArray *)streamObjects;
- (_Bool)loadGap:(id)arg1 withSource:(long long)arg2;
- (_Bool)loadBottomWithSource:(long long)arg1;
- (_Bool)loadTopWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (_Bool)isLoadingGap;
- (_Bool)isLoadingBottom;
- (_Bool)isLoadingTop;
- (NSString *)displayName;
- (void)setAccount:(TFNTwitterAccount *)arg1;
- (TFNTwitterAccount *)account;
@end
