//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

@class NSString, T1EmptyContentPromptView, UIScrollView;

@interface T1EmptyContentViewController : TFNViewController
{
    T1EmptyContentPromptView *_emptyContentView;
    UIScrollView *_scrollView;
    NSString *_heading;
    NSString *_message;
    CDUnknownBlockType _activeMessageTextCallback;
    NSString *_actionText;
    CDUnknownBlockType _actionCallback;
    struct _NSRange _headingBoldTextRange;
    struct _NSRange _activeMessageRange;
}

@property(copy, nonatomic) CDUnknownBlockType actionCallback; // @synthesize actionCallback=_actionCallback;
@property(copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(copy, nonatomic) CDUnknownBlockType activeMessageTextCallback; // @synthesize activeMessageTextCallback=_activeMessageTextCallback;
@property(nonatomic) struct _NSRange activeMessageRange; // @synthesize activeMessageRange=_activeMessageRange;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) struct _NSRange headingBoldTextRange; // @synthesize headingBoldTextRange=_headingBoldTextRange;
@property(copy, nonatomic) NSString *heading; // @synthesize heading=_heading;
- (void).cxx_destruct;
- (void)_t1_updateActionButton;
- (void)_t1_updateSecondaryText;
- (void)_t1_updatePrimaryText;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

@end

