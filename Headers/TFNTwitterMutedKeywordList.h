//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TFNTwitterMutedKeywordList : NSObject
{
    NSString *_accountID;
    NSArray *_mutedKeywords;
}

+ (id)mutedKeywordListWithJSONData:(id)arg1 accountID:(id)arg2 error:(id *)arg3;
@property(copy, nonatomic) NSArray *mutedKeywords; // @synthesize mutedKeywords=_mutedKeywords;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (unsigned long long)private_indexForKeywordWithString:(id)arg1;
- (id)keywordForString:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 accountID:(id)arg2;
- (id)initWithAccountID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

