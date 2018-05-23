//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TFNDirectMessageEntriesResponse : NSObject
{
    NSArray *_users;
    NSArray *_conversations;
    NSArray *_entries;
    NSArray *_customProfiles;
}

@property(readonly, copy, nonatomic) NSArray *customProfiles; // @synthesize customProfiles=_customProfiles;
@property(readonly, copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(readonly, copy, nonatomic) NSArray *conversations; // @synthesize conversations=_conversations;
@property(readonly, copy, nonatomic) NSArray *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (id)_makeEntryWithJSONDictionary:(id)arg1 userCache:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 userCache:(id)arg2;
- (id)init;

@end

