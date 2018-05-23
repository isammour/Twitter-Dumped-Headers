//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterCardContextModel-Protocol.h>

@class NSString, TFNTwitterCardContext;

@interface TFNTwitterCardDataPromotionModel : NSObject <TFNTwitterCardContextModel>
{
    _Bool _hasDestinationURL;
    _Bool _isZipcodeRequired;
    NSString *_title;
    NSString *_callToAction;
    NSString *_viewingUserObfuscatedEmailAddress;
    NSString *_url;
    NSString *_apiURL;
    NSString *_privacyURL;
    NSString *_learnMoreURL;
    NSString *_zipcode;
    TFNTwitterCardContext *_cardContext;
}

@property(retain, nonatomic) TFNTwitterCardContext *cardContext; // @synthesize cardContext=_cardContext;
@property(readonly, nonatomic) _Bool isZipcodeRequired; // @synthesize isZipcodeRequired=_isZipcodeRequired;
@property(readonly, nonatomic) _Bool hasDestinationURL; // @synthesize hasDestinationURL=_hasDestinationURL;
@property(readonly, nonatomic) NSString *zipcode; // @synthesize zipcode=_zipcode;
@property(readonly, nonatomic) NSString *learnMoreURL; // @synthesize learnMoreURL=_learnMoreURL;
@property(readonly, nonatomic) NSString *privacyURL; // @synthesize privacyURL=_privacyURL;
@property(readonly, nonatomic) NSString *apiURL; // @synthesize apiURL=_apiURL;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *viewingUserObfuscatedEmailAddress; // @synthesize viewingUserObfuscatedEmailAddress=_viewingUserObfuscatedEmailAddress;
@property(readonly, nonatomic) NSString *callToAction; // @synthesize callToAction=_callToAction;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)promotionRequestParameters;
- (id)initWithCardContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

