//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNAutocompleteViewController, UIScrollView;
@protocol TFNAutocompleteResultItem;

@protocol TFNAutocompleteViewControllerDelegate <NSObject>
- (void)autocompleteViewController:(TFNAutocompleteViewController *)arg1 scrollViewDidScroll:(UIScrollView *)arg2;
- (void)autocompleteViewController:(TFNAutocompleteViewController *)arg1 didSelectItem:(id <TFNAutocompleteResultItem>)arg2;
@end

