//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/NSObject-Protocol.h>

@class UIViewController;
@protocol TFNModalContainerViewControllerDelegate;

@protocol TFNModalContainerViewController <NSObject>
@property(readonly, nonatomic, getter=isDismissableWithGesture) _Bool dismissableWithGesture;
@property(nonatomic) __weak id <TFNModalContainerViewControllerDelegate> delegate;
@property(retain, nonatomic) UIViewController *modalContentViewController;
- (void)dismissAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)presentFromViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
@end

