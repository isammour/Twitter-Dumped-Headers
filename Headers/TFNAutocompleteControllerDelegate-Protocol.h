//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, TFNTwitterAutocompleteController;

@protocol TFNAutocompleteControllerDelegate <NSObject>
- (void)autocompleteController:(TFNTwitterAutocompleteController *)arg1 didReceiveResults:(NSArray *)arg2;
- (void)autocompleteControllerDidEnd:(TFNTwitterAutocompleteController *)arg1;
- (void)autocompleteControllerDidBegin:(TFNTwitterAutocompleteController *)arg1;
@end
