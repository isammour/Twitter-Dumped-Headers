//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterActivityStreamItem-Protocol.h>
#import <T1Twitter/TFSTwitterTimelinePlistSerialization-Protocol.h>

@class NSDate, NSString;

@interface TFNTwitterActivityGap : NSObject <TFNTwitterActivityStreamItem, TFSTwitterTimelinePlistSerialization>
{
    long long _maxPosition;
    NSDate *_createdAt;
}

@property(readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, nonatomic) long long maxPosition; // @synthesize maxPosition=_maxPosition;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToGap:(id)arg1;
- (id)timelinePlistDictionaryValue;
- (id)init;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)initWithMaxPosition:(long long)arg1 createdAt:(id)arg2;
- (long long)type;
- (long long)minPosition;
- (id)contextUserIDs;
- (id)representedTweetAuthorUserID;
- (id)filterByStatusID:(id)arg1;
- (id)filterByUserIDs:(id)arg1;
- (id)definitiveObjectWithAccount:(id)arg1;
- (_Bool)supportsAggregation;
- (_Bool)isDummyItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

