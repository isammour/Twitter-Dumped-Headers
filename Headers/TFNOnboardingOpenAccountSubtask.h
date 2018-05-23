//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSubtask.h>

@class NSString, TFNOnboardingNavigationLink, TFNTwitterUser;

@interface TFNOnboardingOpenAccountSubtask : TFNOnboardingSubtask
{
    TFNTwitterUser *_user;
    NSString *_oAuthToken;
    NSString *_oAuthTokenSecret;
    NSString *_knownDeviceToken;
    TFNOnboardingNavigationLink *_nextLink;
}

+ (id)typeNames;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *nextLink; // @synthesize nextLink=_nextLink;
@property(readonly, nonatomic) NSString *knownDeviceToken; // @synthesize knownDeviceToken=_knownDeviceToken;
@property(readonly, nonatomic) NSString *oAuthTokenSecret; // @synthesize oAuthTokenSecret=_oAuthTokenSecret;
@property(readonly, nonatomic) NSString *oAuthToken; // @synthesize oAuthToken=_oAuthToken;
@property(readonly, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 error:(id *)arg4;

@end

