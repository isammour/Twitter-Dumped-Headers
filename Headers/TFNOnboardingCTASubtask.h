//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSubtask.h>

@class TFNOnboardingNavigationLink, TFNOnboardingRichText;

@interface TFNOnboardingCTASubtask : TFNOnboardingSubtask
{
    TFNOnboardingRichText *_primaryText;
    TFNOnboardingRichText *_secondaryText;
    TFNOnboardingRichText *_detailText;
    TFNOnboardingNavigationLink *_primaryActionLink;
    TFNOnboardingNavigationLink *_secondaryActionLink;
    long long _textAlignment;
}

+ (long long)version;
+ (id)typeNames;
@property(readonly, nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *secondaryActionLink; // @synthesize secondaryActionLink=_secondaryActionLink;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *primaryActionLink; // @synthesize primaryActionLink=_primaryActionLink;
@property(readonly, nonatomic) TFNOnboardingRichText *detailText; // @synthesize detailText=_detailText;
@property(readonly, nonatomic) TFNOnboardingRichText *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, nonatomic) TFNOnboardingRichText *primaryText; // @synthesize primaryText=_primaryText;
- (void).cxx_destruct;
- (long long)preferredPresentationType;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 error:(id *)arg4;

@end

