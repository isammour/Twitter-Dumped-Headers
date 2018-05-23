//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/TFNHashflagProvider-Protocol.h>

@class NSDictionary, NSString;

@interface TFNHashflagBasicProvider : NSObject <TFNHashflagProvider>
{
    NSDictionary *_hashflagsDictionary;
    long long _hashflagVersion;
}

@property(readonly, nonatomic) long long hashflagVersion; // @synthesize hashflagVersion=_hashflagVersion;
@property(readonly, copy, nonatomic) NSDictionary *hashflagsDictionary; // @synthesize hashflagsDictionary=_hashflagsDictionary;
- (void).cxx_destruct;
- (id)hashtags;
- (id)hashflagForHashtag:(id)arg1;
- (id)init;
- (id)initWithHashflagsDictionary:(id)arg1 hashflagVersion:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

