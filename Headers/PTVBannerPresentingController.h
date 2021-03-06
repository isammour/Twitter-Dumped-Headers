//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PTVBannerViewController, PTVBannerWindow, UIWindow;

@interface PTVBannerPresentingController : NSObject
{
    UIWindow *_previousKeyWindow;
    PTVBannerWindow *_bannerWindow;
    PTVBannerViewController *_bannerViewController;
    NSMutableArray *_presentedBanners;
}

+ (void)SetStatusBarHidden:(_Bool)arg1;
+ (void)PresentViewAsBanner:(id)arg1;
+ (_Bool)ShowingBanners;
+ (id)BannerPresentingController;
@property(retain, nonatomic) NSMutableArray *presentedBanners; // @synthesize presentedBanners=_presentedBanners;
@property(retain, nonatomic) PTVBannerViewController *bannerViewController; // @synthesize bannerViewController=_bannerViewController;
@property(retain, nonatomic) PTVBannerWindow *bannerWindow; // @synthesize bannerWindow=_bannerWindow;
@property(retain, nonatomic) UIWindow *previousKeyWindow; // @synthesize previousKeyWindow=_previousKeyWindow;
- (void).cxx_destruct;
- (void)orientationDidChange:(id)arg1;
- (void)removePresentedBannerFromArray:(id)arg1;
- (void)addBannerToPresentedBannersArray:(id)arg1;
- (void)presentNextBanner;
- (void)presentViewAsBanner:(id)arg1;
- (id)init;
- (void)dealloc;

@end

