//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNTwitterAccount, TFNTwitterCardContext, TFNTwitterCardData, UIViewController;
@protocol TFNDataViewCell, TFNTwitterAVPlayerControllerSource, TFNTwitterCardDataSource, TFNTwitterCardEventLogger, TFNTwitterCardScribeContextProvider;

@interface TFNTwitterCardViewEventContext : NSObject
{
    TFNTwitterCardContext *_cardContext;
    id <TFNTwitterCardEventLogger> _logger;
    UIViewController *_presentingViewController;
    id <TFNTwitterCardScribeContextProvider> _scribeContextProvider;
    id <TFNTwitterAVPlayerControllerSource> _playerSource;
    id <TFNDataViewCell> _presentingCell;
}

@property(nonatomic) __weak id <TFNDataViewCell> presentingCell; // @synthesize presentingCell=_presentingCell;
@property(nonatomic) __weak id <TFNTwitterAVPlayerControllerSource> playerSource; // @synthesize playerSource=_playerSource;
@property(readonly, nonatomic) id <TFNTwitterCardScribeContextProvider> scribeContextProvider; // @synthesize scribeContextProvider=_scribeContextProvider;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) id <TFNTwitterCardEventLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) TFNTwitterCardContext *cardContext; // @synthesize cardContext=_cardContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterCardData *cardData;
@property(readonly, nonatomic) long long displayMode;
@property(readonly, nonatomic) id <TFNTwitterCardDataSource> cardDataSource;
@property(readonly, nonatomic) TFNTwitterAccount *account;
- (id)initWithCardContext:(id)arg1 scribeContextProvider:(id)arg2 logger:(id)arg3 presentingViewController:(id)arg4;

@end
