//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class UIViewController;

@interface TFNEmbeddedViewControllerCell : TFNTableViewCell
{
    UIViewController *_parentForEmbeddedController;
    UIViewController *_embeddedController;
}

@property(retain, nonatomic) UIViewController *embeddedController; // @synthesize embeddedController=_embeddedController;
@property(nonatomic) __weak UIViewController *parentForEmbeddedController; // @synthesize parentForEmbeddedController=_parentForEmbeddedController;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)cleanup;

@end
