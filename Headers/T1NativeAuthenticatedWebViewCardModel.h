//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1NativeCardImageResourceProvider-Protocol.h>
#import <T1Twitter/TFNTwitterCardContextModel-Protocol.h>

@class NSString, TFNTwitterAuthenticatedWebViewModel, TFNTwitterCardContext, TFNTwitterCardImageSpec;

@interface T1NativeAuthenticatedWebViewCardModel : NSObject <TFNTwitterCardContextModel, T1NativeCardImageResourceProvider>
{
    _Bool _promotion;
    NSString *_cardName;
    long long _displayMode;
    TFNTwitterCardContext *_cardContext;
    TFNTwitterAuthenticatedWebViewModel *_webViewModel;
    TFNTwitterCardImageSpec *_imageData;
}

@property(retain, nonatomic) TFNTwitterCardImageSpec *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) TFNTwitterAuthenticatedWebViewModel *webViewModel; // @synthesize webViewModel=_webViewModel;
@property(retain, nonatomic) TFNTwitterCardContext *cardContext; // @synthesize cardContext=_cardContext;
@property(readonly, nonatomic, getter=isPromotion) _Bool promotion; // @synthesize promotion=_promotion;
@property(readonly, nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) NSString *cardName; // @synthesize cardName=_cardName;
- (void).cxx_destruct;
- (id)_createCardImageSpec;
@property(readonly, nonatomic) struct CGSize imageDimensions;
@property(readonly, copy, nonatomic) NSString *imageURLString;
@property(readonly, nonatomic) NSString *callToAction;
@property(readonly, nonatomic) NSString *badgeText;
@property(readonly, nonatomic) NSString *byline;
@property(readonly, nonatomic) NSString *title;
- (id)initWithCardContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

