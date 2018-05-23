//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterFooterViewModel-Protocol.h>
#import <T1Twitter/TFSTwitterTimelinePlistSerialization-Protocol.h>

@class NSString, NSURL;

@interface TFNTwitterTweetPrompt : NSObject <TFNTwitterFooterViewModel, TFSTwitterTimelinePlistSerialization>
{
    _Bool _shouldLogImpression;
    _Bool _shouldDisplay;
    NSString *_text;
    NSURL *_url;
}

@property(nonatomic) _Bool shouldDisplay; // @synthesize shouldDisplay=_shouldDisplay;
@property(nonatomic) _Bool shouldLogImpression; // @synthesize shouldLogImpression=_shouldLogImpression;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithText:(id)arg1 url:(id)arg2 shouldLogImpression:(_Bool)arg3 shouldDisplay:(_Bool)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

