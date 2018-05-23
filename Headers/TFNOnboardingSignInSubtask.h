//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSubtask.h>

@class NSString, TFNOnboardingNavigationLink, TFNOnboardingRichText;

@interface TFNOnboardingSignInSubtask : TFNOnboardingSubtask
{
    TFNOnboardingRichText *_primaryText;
    TFNOnboardingRichText *_secondaryText;
    NSString *_usernameHint;
    NSString *_passwordHint;
    TFNOnboardingRichText *_detailText;
    TFNOnboardingNavigationLink *_nextLink;
    TFNOnboardingNavigationLink *_cancelLink;
}

+ (id)typeNames;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *cancelLink; // @synthesize cancelLink=_cancelLink;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *nextLink; // @synthesize nextLink=_nextLink;
@property(readonly, nonatomic) TFNOnboardingRichText *detailText; // @synthesize detailText=_detailText;
@property(readonly, nonatomic) NSString *passwordHint; // @synthesize passwordHint=_passwordHint;
@property(readonly, nonatomic) NSString *usernameHint; // @synthesize usernameHint=_usernameHint;
@property(readonly, nonatomic) TFNOnboardingRichText *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, nonatomic) TFNOnboardingRichText *primaryText; // @synthesize primaryText=_primaryText;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 error:(id *)arg4;

@end

