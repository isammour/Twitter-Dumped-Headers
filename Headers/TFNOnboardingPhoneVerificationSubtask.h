//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSubtask.h>

@class NSString, TFNOnboardingNavigationLink, TFNOnboardingRichText, TFNOnboardingSubtaskDataReference;

@interface TFNOnboardingPhoneVerificationSubtask : TFNOnboardingSubtask
{
    TFNOnboardingRichText *_primaryText;
    TFNOnboardingRichText *_secondaryText;
    TFNOnboardingRichText *_detailText;
    NSString *_hintText;
    NSString *_phoneNumberString;
    TFNOnboardingSubtaskDataReference *_phoneNumberSubtaskDataReference;
    TFNOnboardingNavigationLink *_nextLink;
    TFNOnboardingNavigationLink *_failLink;
    TFNOnboardingNavigationLink *_cancelLink;
}

+ (id)resendVoiceNavigationContextAction;
+ (id)resendSMSNavigationContextAction;
+ (id)typeNames;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *cancelLink; // @synthesize cancelLink=_cancelLink;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *failLink; // @synthesize failLink=_failLink;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *nextLink; // @synthesize nextLink=_nextLink;
@property(readonly, nonatomic) TFNOnboardingSubtaskDataReference *phoneNumberSubtaskDataReference; // @synthesize phoneNumberSubtaskDataReference=_phoneNumberSubtaskDataReference;
@property(readonly, nonatomic) NSString *phoneNumberString; // @synthesize phoneNumberString=_phoneNumberString;
@property(readonly, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
@property(readonly, nonatomic) TFNOnboardingRichText *detailText; // @synthesize detailText=_detailText;
@property(readonly, nonatomic) TFNOnboardingRichText *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, nonatomic) TFNOnboardingRichText *primaryText; // @synthesize primaryText=_primaryText;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 error:(id *)arg4;

@end
