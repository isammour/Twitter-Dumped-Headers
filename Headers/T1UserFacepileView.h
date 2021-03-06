//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface T1UserFacepileView : UIView <TFNLayoutMetricsEnvironment>
{
    _Bool _isRTL;
    NSString *_accountID;
    NSArray *_users;
    CDUnknownBlockType _avatarTappedBlock;
    NSMutableArray *_avatarImageViews;
}

@property(readonly, nonatomic) NSMutableArray *avatarImageViews; // @synthesize avatarImageViews=_avatarImageViews;
@property(copy, nonatomic) CDUnknownBlockType avatarTappedBlock; // @synthesize avatarTappedBlock=_avatarTappedBlock;
@property(copy, nonatomic) NSArray *users; // @synthesize users=_users;
@property(nonatomic) _Bool isRTL; // @synthesize isRTL=_isRTL;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (id)avatarImageViewAtPoint:(struct CGPoint)arg1;
- (void)_avatarImageViewTapped:(id)arg1;
- (void)layoutSubviews;
- (void)private_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

