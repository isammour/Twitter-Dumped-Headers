//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNTwitterTypeaheadUser;
@protocol TFNDirectMessageConversation, TFNDirectMessageUser;

@interface TFNDirectMessageTypeaheadResult : NSObject
{
    unsigned long long _type;
    TFNTwitterTypeaheadUser *_typeaheadUser;
    id <TFNDirectMessageUser> _directMessageUser;
    id <TFNDirectMessageConversation> _directMessageConversation;
}

@property(readonly, nonatomic) id <TFNDirectMessageConversation> directMessageConversation; // @synthesize directMessageConversation=_directMessageConversation;
@property(readonly, nonatomic) id <TFNDirectMessageUser> directMessageUser; // @synthesize directMessageUser=_directMessageUser;
@property(readonly, nonatomic) TFNTwitterTypeaheadUser *typeaheadUser; // @synthesize typeaheadUser=_typeaheadUser;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithDirectMessageConversation:(id)arg1;
- (id)initWithDirectMessageUser:(id)arg1;
- (id)initWithTypeaheadUser:(id)arg1;

@end
