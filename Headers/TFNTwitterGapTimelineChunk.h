//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterTimelineChunk-Protocol.h>

@class NSArray, NSString, TFNTwitterTimelineCursor;

@interface TFNTwitterGapTimelineChunk : NSObject <TFNTwitterTimelineChunk>
{
    TFNTwitterTimelineCursor *_cursor;
    NSArray *_streamObjects;
}

@property(retain, nonatomic) NSArray *streamObjects; // @synthesize streamObjects=_streamObjects;
@property(retain, nonatomic) TFNTwitterTimelineCursor *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (_Bool)shouldBeSerialized;
- (void)filterStreamObjectsWithFilter:(CDUnknownBlockType)arg1;
- (id)initWithCursor:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

