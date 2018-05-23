//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSModel/TFSModelCacheLRURecord.h>

@class NSDictionary, NSSet, NSString;
@protocol TFSModelCacheable;

@interface TFSModelCacheRecord : TFSModelCacheLRURecord
{
    _Bool _isAutomaticUncachingEnabled;
    NSString *_key;
    id <TFSModelCacheable> _object;
    NSSet *_ownedKeys;
    NSDictionary *_searchKeyToLowercaseValues;
    NSDictionary *_searchKeyToScore;
}

+ (id)commaSeparatedKeysOfRecords:(id)arg1;
@property(readonly, nonatomic) NSDictionary *searchKeyToScore; // @synthesize searchKeyToScore=_searchKeyToScore;
@property(readonly, nonatomic) NSDictionary *searchKeyToLowercaseValues; // @synthesize searchKeyToLowercaseValues=_searchKeyToLowercaseValues;
@property(readonly, nonatomic) NSSet *ownedKeys; // @synthesize ownedKeys=_ownedKeys;
@property(readonly, nonatomic) _Bool isAutomaticUncachingEnabled; // @synthesize isAutomaticUncachingEnabled=_isAutomaticUncachingEnabled;
@property(readonly, nonatomic) id <TFSModelCacheable> object; // @synthesize object=_object;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)clearObject;
- (_Bool)shouldUpdateUsageTimestampOnDisk;
- (_Bool)doesValueForSearchKey:(id)arg1 searchOperator:(long long)arg2 matchLowercaseSearchValues:(id)arg3;
- (id)initWithObject:(id)arg1 automaticUncachingEnabled:(_Bool)arg2 ownedKeys:(id)arg3 searchKeyToLowercaseValues:(id)arg4 searchKeyToScore:(id)arg5;
- (id)initWithKey:(id)arg1;

@end

