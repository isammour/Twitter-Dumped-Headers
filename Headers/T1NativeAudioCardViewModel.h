//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterCardContextModel-Protocol.h>

@class NSNumber, NSString, NSURL, TFNTwitterCardContext, TFNTwitterCardData, TFNTwitterCardImageSpec, TFNTwitterUser, UIColor;

@interface T1NativeAudioCardViewModel : NSObject <TFNTwitterCardContextModel>
{
    TFNTwitterCardData *_cardData;
    TFNTwitterUser *_artistUser;
    TFNTwitterCardContext *_cardContext;
}

@property(readonly, nonatomic) TFNTwitterCardContext *cardContext; // @synthesize cardContext=_cardContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *labelTitleColor;
@property(readonly, nonatomic) UIColor *labelTextTappableColor;
@property(readonly, nonatomic) UIColor *labelTextColor;
@property(readonly, nonatomic) long long displayMode;
@property(readonly, nonatomic) UIColor *imageDominantColor;
@property(readonly, nonatomic) NSURL *appDisplayURL;
@property(readonly, nonatomic) NSString *source;
@property(readonly, nonatomic) NSString *partner;
@property(readonly, nonatomic) NSNumber *artistUserIdNumber;
@property(readonly, nonatomic) NSString *artistHandle;
@property(readonly, nonatomic) NSString *artistName;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) TFNTwitterCardImageSpec *imageSpec;
- (id)initWithCardContext:(id)arg1;
- (id)initWithCardData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
