//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, T1NativePlayerCardPlayerContainerView, TFNTwitterAccount, TFNTwitterCardContext, TFNTwitterCardViewEventHeatMapData, TFNTwitterUser, UIView;

@interface TFNTwitterCardViewEvent : NSObject
{
    _Bool _shouldOpenInExternalBrowser;
    _Bool _shouldShowFullScreen;
    UIView *_view;
    NSString *_eventType;
    TFNTwitterCardViewEventHeatMapData *_heatMapData;
    NSNumber *_userID;
    NSArray *_images;
    NSArray *_imageViews;
    NSArray *_imageSpecs;
    long long _imageSpecIndex;
    NSString *_URL;
    NSString *_composeText;
    CDUnknownBlockType _composeCompletionBlock;
    NSString *_capiURI;
    NSDictionary *_capiData;
    TFNTwitterAccount *_account;
    long long _playerType;
    T1NativePlayerCardPlayerContainerView *_playerContainerView;
    NSString *_zipcode;
    unsigned long long _buttonIndex;
    TFNTwitterCardContext *_collectionCardContext;
    TFNTwitterUser *_user;
    double _timecode;
}

+ (long long)scribeActionTypeForViewActionType:(long long)arg1;
+ (long long)scribeCardTypeForViewElementType:(long long)arg1;
@property(nonatomic) double timecode; // @synthesize timecode=_timecode;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(nonatomic) _Bool shouldShowFullScreen; // @synthesize shouldShowFullScreen=_shouldShowFullScreen;
@property(retain, nonatomic) TFNTwitterCardContext *collectionCardContext; // @synthesize collectionCardContext=_collectionCardContext;
@property(nonatomic) unsigned long long buttonIndex; // @synthesize buttonIndex=_buttonIndex;
@property(nonatomic) _Bool shouldOpenInExternalBrowser; // @synthesize shouldOpenInExternalBrowser=_shouldOpenInExternalBrowser;
@property(retain, nonatomic) NSString *zipcode; // @synthesize zipcode=_zipcode;
@property(retain, nonatomic) T1NativePlayerCardPlayerContainerView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
@property(nonatomic) long long playerType; // @synthesize playerType=_playerType;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSDictionary *capiData; // @synthesize capiData=_capiData;
@property(retain, nonatomic) NSString *capiURI; // @synthesize capiURI=_capiURI;
@property(copy, nonatomic) CDUnknownBlockType composeCompletionBlock; // @synthesize composeCompletionBlock=_composeCompletionBlock;
@property(retain, nonatomic) NSString *composeText; // @synthesize composeText=_composeText;
@property(retain, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(nonatomic) long long imageSpecIndex; // @synthesize imageSpecIndex=_imageSpecIndex;
@property(retain, nonatomic) NSArray *imageSpecs; // @synthesize imageSpecs=_imageSpecs;
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(readonly, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(readonly, nonatomic) TFNTwitterCardViewEventHeatMapData *heatMapData; // @synthesize heatMapData=_heatMapData;
@property(readonly, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithView:(id)arg1 eventType:(id)arg2;
- (id)initWithView:(id)arg1 userID:(id)arg2 eventType:(id)arg3;
- (id)initWithView:(id)arg1 eventType:(id)arg2 heatMapData:(id)arg3;
- (id)initWithView:(id)arg1 userID:(id)arg2 eventType:(id)arg3 heatMapData:(id)arg4;
- (id)init;
@property(readonly, nonatomic) NSDictionary *viewEvent;

@end
