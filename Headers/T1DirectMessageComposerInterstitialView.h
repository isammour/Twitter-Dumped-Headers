//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStackView.h>

@protocol T1DirectMessageComposerInterstitialViewDelegate;

@interface T1DirectMessageComposerInterstitialView : UIStackView
{
    // Error parsing type: , name: availableWidth
    // Error parsing type: , name: delegate
    // Error parsing type: , name: acceptButton
    // Error parsing type: , name: deleteButton
    // Error parsing type: , name: descriptionView
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (void)deleteTapped:(id)arg1;
- (void)acceptTapped:(id)arg1;
@property(nonatomic) __weak id <T1DirectMessageComposerInterstitialViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) double availableWidth; // @synthesize availableWidth;

@end

