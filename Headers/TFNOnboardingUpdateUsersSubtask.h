//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSubtask.h>

@class NSArray, TFNOnboardingNavigationLink;

@interface TFNOnboardingUpdateUsersSubtask : TFNOnboardingSubtask
{
    NSArray *_users;
    TFNOnboardingNavigationLink *_nextLink;
}

+ (id)typeNames;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *nextLink; // @synthesize nextLink=_nextLink;
@property(readonly, nonatomic) NSArray *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 error:(id *)arg4;

@end
