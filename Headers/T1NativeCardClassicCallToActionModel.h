//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterCardContextModel-Protocol.h>

@class NSString, TFNTwitterCardData;

@interface T1NativeCardClassicCallToActionModel : NSObject <TFNTwitterCardContextModel>
{
    TFNTwitterCardData *_cardData;
    NSString *_domain;
}

@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) TFNTwitterCardData *cardData; // @synthesize cardData=_cardData;
- (void).cxx_destruct;
- (_Bool)_isAppOpenable;
- (_Bool)_isAppInstallable;
@property(readonly, nonatomic) NSString *callToActionEventType;
@property(readonly, copy, nonatomic) NSString *callToActionText;
- (id)initWithCardContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

