//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFSTwitterLegacyScribeOptions-Protocol.h>

@class NSSet, NSString;

@interface TFNTwitterScribeOptions : NSObject <TFSTwitterLegacyScribeOptions>
{
    _Bool _perftownEnabled;
    _Bool _scribeEventCompressionEnabled;
    NSSet *_perftownEventWhitelist;
}

@property(readonly, nonatomic) NSSet *perftownEventWhitelist; // @synthesize perftownEventWhitelist=_perftownEventWhitelist;
@property(readonly, nonatomic, getter=isScribeEventCompressionEnabled) _Bool scribeEventCompressionEnabled; // @synthesize scribeEventCompressionEnabled=_scribeEventCompressionEnabled;
@property(readonly, nonatomic, getter=isPerftownEnabled) _Bool perftownEnabled; // @synthesize perftownEnabled=_perftownEnabled;
- (void).cxx_destruct;
- (id)initWithPerftownEnabled:(_Bool)arg1 scribeEventCompressionEnabled:(_Bool)arg2 perftownEventWhitelist:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

