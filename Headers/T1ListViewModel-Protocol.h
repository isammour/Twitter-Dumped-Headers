//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSDate, NSNumber, NSString, TFNTwitterList;

@protocol T1ListViewModel <NSObject>
@property(readonly, nonatomic) _Bool requiresLegacyHydration;
@property(readonly, nonatomic) NSString *ownerDisplayFullName;
@property(readonly, copy, nonatomic) NSString *ownerUsername;
@property(readonly, nonatomic) NSNumber *ownerUserIDNumber;
@property(readonly, nonatomic) long long ownerUserID;
@property(readonly, nonatomic) unsigned long long followingState;
@property(readonly, nonatomic) _Bool isPrivate;
@property(readonly, nonatomic) NSDate *lastUpdated;
@property(readonly, nonatomic) long long subscriberCount;
@property(readonly, nonatomic) long long memberCount;
@property(readonly, copy, nonatomic) NSString *desc;
@property(readonly, copy, nonatomic) NSString *slug;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSNumber *listIDNumber;
@property(readonly, nonatomic) long long listID;
- (TFNTwitterList *)legacyList;
@end
