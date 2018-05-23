//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterAPI/TFSTwitterAPIConfiguration-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURLCache;
@protocol TFSTwitterAPIURLBaseProvider;

@interface TFSTwitterAPIConfiguration : NSObject <TFSTwitterAPIConfiguration>
{
    NSString *_cardsPlatformIdentifier;
    NSDictionary *_optionalStatusParametersDictionary;
    NSDictionary *_optionalUserParametersDictionary;
    NSArray *_additionalContentDecoders;
    NSArray *_additionalContentEncoders;
    id <TFSTwitterAPIURLBaseProvider> _URLBaseProvider;
    NSURLCache *_URLCache;
}

+ (void)_tfs_mergeCommaSeparatedEntriesInDictionariesWithKey:(id)arg1 sourceDictionary:(id)arg2 destinationDictionary:(id)arg3;
+ (void)_tfs_mergeEntriesInDictionariesWithKey:(id)arg1 sourceDictionary:(id)arg2 destinationDictionary:(id)arg3;
+ (void)_tfs_mergeEntriesInDictionary:(id)arg1 name:(id)arg2 toDictionary:(id)arg3;
+ (id)mergedCommaSeparatedParameters:(id)arg1;
@property(readonly, nonatomic) NSURLCache *URLCache; // @synthesize URLCache=_URLCache;
@property(readonly, nonatomic) id <TFSTwitterAPIURLBaseProvider> URLBaseProvider; // @synthesize URLBaseProvider=_URLBaseProvider;
- (void).cxx_destruct;
- (id)additionalContentEncoders;
- (id)additionalContentDecoders;
- (id)momentsParametersDictionary;
- (id)cardsParametersDictionary;
- (id)userParametersDictionary;
- (id)statusParametersDictionary;
- (id)initWithCardsPlatformIdentifier:(id)arg1 URLBaseProvider:(id)arg2 URLCache:(id)arg3 optionalStatusParametersDictionary:(id)arg4 optionalUserParametersDictionary:(id)arg5 additionalContentDecoders:(id)arg6 additionalContentEncoders:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

