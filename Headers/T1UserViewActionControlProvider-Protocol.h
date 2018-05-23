//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>
#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>

@class TFNTwitterAccount, TFNTwitterUser, UIView;
@protocol T1UserViewActionControl;

@protocol T1UserViewActionControlProvider <NSObject, TFNTwitterAuthenticated>
- (_Bool)shouldHideActionControl:(UIView<T1UserViewActionControl> *)arg1;
- (struct CGSize)sizeForActionControlWithUser:(TFNTwitterUser *)arg1 account:(TFNTwitterAccount *)arg2;
- (UIView<T1UserViewActionControl> *)actionControl;
@end

