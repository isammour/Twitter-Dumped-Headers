//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TFNLocalMediaAssetCache : NSObject
{
    NSMutableDictionary *_cacheDictionary;
    NSString *_accountID;
}

+ (id)_tfn_localURLForMediaAsset:(id)arg1;
+ (id)cacheForAccountID:(id)arg1;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)removeMediaAssetForURL:(id)arg1;
- (id)_tfn_addMediaAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addMediaAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)addMediaAsset:(id)arg1;
- (id)initWithAccountID:(id)arg1;

@end
