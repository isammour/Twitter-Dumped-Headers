//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class T1URTTimelineMomentViewModel, UIView;

@interface T1MomentCell : TFNTableViewCell
{
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: momentView
}

+ (double)estimatedHeightFor:(id)arg1 account:(id)arg2 delegate:(id)arg3;
- (CDUnknownBlockType).cxx_destruct;
- (void)setViewModel:(id)arg1 account:(id)arg2 delegate:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, retain) T1URTTimelineMomentViewModel *viewModel; // @synthesize viewModel;
@property(nonatomic, readonly) UIView *presentationSourceView;

@end

