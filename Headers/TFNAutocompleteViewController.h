//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

@class NSArray;
@protocol TFNAutocompleteViewControllerDelegate;

@interface TFNAutocompleteViewController : TFNItemsDataViewController
{
    NSArray *_results;
    id <TFNAutocompleteViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <TFNAutocompleteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;

@end

