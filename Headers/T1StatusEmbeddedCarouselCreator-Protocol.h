//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class T1StatusMediaHandler, T1TimelinesItemsCarouselViewController, TFNTwitterAccount;
@protocol T1StatusEmbeddedCarouselHost, T1StatusViewModel;

@protocol T1StatusEmbeddedCarouselCreator
- (T1TimelinesItemsCarouselViewController *)embeddedCarouselViewControllerWithHost:(id <T1StatusEmbeddedCarouselHost>)arg1;
@property(nonatomic, readonly) T1TimelinesItemsCarouselViewController *previousCarouselController;
@property(nonatomic, readonly) unsigned long long layoutMode;
@property(nonatomic, readonly) id <T1StatusViewModel> statusViewModel;
@property(nonatomic, readonly) T1StatusMediaHandler *mediaHandler;
@property(nonatomic, readonly) TFNTwitterAccount *account;
@end

