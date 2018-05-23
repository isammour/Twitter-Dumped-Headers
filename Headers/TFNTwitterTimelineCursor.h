//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFSTwitterTimelinePlistSerialization-Protocol.h>

@class NSString, TFNTwitterTimelineCursorGapDetails;

@interface TFNTwitterTimelineCursor : NSObject <TFSTwitterTimelinePlistSerialization>
{
    _Bool _URTCursor;
    NSString *_top;
    NSString *_bottom;
    NSString *_gapString;
    TFNTwitterTimelineCursorGapDetails *_gapDetails;
}

@property(readonly, nonatomic, getter=isURTCursor) _Bool URTCursor; // @synthesize URTCursor=_URTCursor;
@property(readonly, nonatomic) TFNTwitterTimelineCursorGapDetails *gapDetails; // @synthesize gapDetails=_gapDetails;
@property(readonly, copy, nonatomic) NSString *gapString; // @synthesize gapString=_gapString;
@property(readonly, nonatomic) NSString *bottom; // @synthesize bottom=_bottom;
@property(readonly, nonatomic) NSString *top; // @synthesize top=_top;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTop:(id)arg1 bottom:(id)arg2;
- (id)initWithTop:(id)arg1 bottom:(id)arg2 gapString:(id)arg3 gapDetails:(id)arg4 isURTCursor:(_Bool)arg5;
- (id)init;

@end

