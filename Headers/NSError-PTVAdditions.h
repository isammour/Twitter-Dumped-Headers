//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (PTVAdditions)
+ (id)ptv_associatedAccountAlreadyAssociatedToAnotherUserErrorWithName:(id)arg1 currentlyLoggedInName:(id)arg2;
+ (id)ptv_alreadyHaveAnAssociatedAccountErrorWithExistingName:(id)arg1 currentlyLoggedInName:(id)arg2;
+ (id)ptv_accountRequiredErrorWithDescription:(id)arg1;
+ (id)ptv_accountRequiredError;
+ (id)ptv_errorWithDescription:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3;
+ (id)ptv_errorWithDescription:(id)arg1 errorCode:(long long)arg2;
+ (id)ptv_errorWithDescription:(id)arg1;
@end

