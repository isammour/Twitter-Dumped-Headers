//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1SlideshowViewController;

@protocol T1SlideshowViewControllerLoadingDelegate <NSObject>
- (void)slideshowDidRequestLoadingMoreSlides:(T1SlideshowViewController *)arg1 completion:(void (^)(_Bool))arg2;
- (_Bool)slideshowCanRequestLoadingMoreSlides:(T1SlideshowViewController *)arg1;
@end

