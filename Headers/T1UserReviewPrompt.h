//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol T1UserReviewPromptProvider;

@interface T1UserReviewPrompt : NSObject
{
    _Bool _showing;
    id <T1UserReviewPromptProvider> _provider;
}

@property(retain, nonatomic) id <T1UserReviewPromptProvider> provider; // @synthesize provider=_provider;
@property(nonatomic) _Bool showing; // @synthesize showing=_showing;
- (void).cxx_destruct;
- (void)_updateConsecutiveUsageCount;
- (_Bool)_userInDisabledCountry;
- (void)promptUserToRateAppConditionallyForAccount:(id)arg1;
- (_Bool)_userMeetsConditionsForPrompt;
- (void)_showPromptAfterDelay:(double)arg1 forAccount:(id)arg2;
- (void)_showPromptForAccount:(id)arg1;
- (id)initWithProvider:(id)arg1;

@end

