//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterScribeImpressionCacheEntry-Protocol.h>
#import <T1Twitter/TFSPlistSerialization-Protocol.h>

@class NSString;

@interface TFNTwitterStreamScribeImpressionCacheEntry : NSObject <TFSPlistSerialization, TFNTwitterScribeImpressionCacheEntry>
{
    NSString *_contentID;
    NSString *_entryID;
    unsigned long long _impressionDuration;
}

@property(nonatomic) unsigned long long impressionDuration; // @synthesize impressionDuration=_impressionDuration;
@property(readonly, nonatomic) NSString *entryID; // @synthesize entryID=_entryID;
@property(readonly, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)plistDictionaryValue;
- (id)initWithEntryID:(id)arg1 contentID:(id)arg2 impressionDuration:(unsigned long long)arg3;
- (id)initWithPlistDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

