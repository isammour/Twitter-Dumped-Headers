//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TFNTwitterTimelineReplaceEntries : NSObject
{
    NSMutableDictionary *_entries;
}

@property(retain, nonatomic) NSMutableDictionary *entries; // @synthesize entries=_entries;
- (void).cxx_destruct;
- (id)replacementForEntryID:(id)arg1;
- (void)addReplacement:(id)arg1 forEntryID:(id)arg2;
- (id)replaceableEntryIDs;
- (id)init;

@end

