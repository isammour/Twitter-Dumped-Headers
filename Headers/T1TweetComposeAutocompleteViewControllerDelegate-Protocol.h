//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, T1TweetComposeAutocompleteViewController;

@protocol T1TweetComposeAutocompleteViewControllerDelegate <NSObject>

@optional
- (NSString *)currentPrefixForAutocompleteViewController:(T1TweetComposeAutocompleteViewController *)arg1;
- (void)autocompleteViewControllerDidEnterFullScreen:(T1TweetComposeAutocompleteViewController *)arg1;
- (void)autocompleteViewController:(T1TweetComposeAutocompleteViewController *)arg1 textDidChange:(NSString *)arg2;
@end

