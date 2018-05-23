//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class TFNTwitterAvatarImageView, TFNTwitterList, TFNTwitterUserDataSource, TFSTwitterScribeContext, UIImageView, UILabel;

@interface T1ListCell : TFNTableViewCell
{
    TFNTwitterList *_list;
    TFNTwitterUserDataSource *_userDataSource;
    TFNTwitterAvatarImageView *_avatarImageView;
    UIImageView *_privateImageView;
    UILabel *_nameLabel;
    UILabel *_bylineLabel;
    UILabel *_descriptionLabel;
    UILabel *_memberCountLabel;
    long long _displayMode;
    TFSTwitterScribeContext *_scribeContext;
}

+ (id)_t1_memberCountStringForList:(id)arg1;
+ (double)heightForList:(id)arg1 displayMode:(long long)arg2 metrics:(id)arg3;
+ (id)_t1_memberCountFont;
+ (id)_t1_descriptionFont;
+ (id)_t1_bylineFont;
+ (id)_t1_nameFont;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
- (void).cxx_destruct;
- (void)_t1_layoutMemberCount:(double)arg1 textX:(double)arg2 textY:(double)arg3;
- (double)_t1_layoutDescription:(double)arg1 textX:(double)arg2 textY:(double)arg3;
- (double)_t1_layoutName:(double)arg1 textX:(double)arg2 textY:(double)arg3;
- (double)_t1_layoutTopLine:(double)arg1 textX:(double)arg2 textY:(double)arg3;
- (void)_t1_update;
- (struct CGSize)_t1_textSizeForLabel:(id)arg1 withSize:(struct CGSize)arg2;
- (struct CGSize)_t1_textSizeForLabel:(id)arg1 withWidth:(double)arg2;
- (void)layoutSubviews;
- (void)_t1_userDataSourceDidUpdate:(id)arg1;
- (void)setList:(id)arg1 account:(id)arg2;
- (void)cleanup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

