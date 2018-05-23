//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

@class TFNButton, UIActivityIndicatorView, UILabel;
@protocol T1StickerCategoryEmptyViewControllerDelegate;

@interface T1StickerCategoryEmptyViewController : TFNViewController
{
    UIActivityIndicatorView *_indicatorView;
    UILabel *_errorTitleLabel;
    UILabel *_errorMessageLabel;
    TFNButton *_retryButton;
    _Bool _shouldShowError;
    id <T1StickerCategoryEmptyViewControllerDelegate> _delegate;
}

@property(nonatomic) _Bool shouldShowError; // @synthesize shouldShowError=_shouldShowError;
@property(nonatomic) __weak id <T1StickerCategoryEmptyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_retryButtonTapped:(id)arg1;
- (void)_updateViewStates;
- (void)viewDidLoad;

@end

