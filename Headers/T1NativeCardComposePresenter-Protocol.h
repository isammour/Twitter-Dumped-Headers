//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSDictionary, NSString, TFNTwitterCardViewEventContext;

@protocol T1NativeCardComposePresenter <NSObject>
- (void)presentComposeSheetWithText:(NSString *)arg1 cardViewEventContext:(TFNTwitterCardViewEventContext *)arg2 scribePage:(NSString *)arg3 dismissCompletion:(void (^)(_Bool))arg4 metadata:(NSDictionary *)arg5 flags:(CDStruct_d7010776)arg6;
@end

