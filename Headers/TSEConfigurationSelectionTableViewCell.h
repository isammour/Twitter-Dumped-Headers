//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterShareExtensionUI/TSEBaseTableViewCell.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface TSEConfigurationSelectionTableViewCell : TSEBaseTableViewCell
{
    _Bool _loading;
    NSString *_configurationName;
    NSString *_currentConfigurationValue;
    UILabel *_configurationNameLabel;
    UILabel *_configurationValueLabel;
    UIActivityIndicatorView *_loadingIndicatorView;
}

@property(readonly, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(readonly, nonatomic) UILabel *configurationValueLabel; // @synthesize configurationValueLabel=_configurationValueLabel;
@property(readonly, nonatomic) UILabel *configurationNameLabel; // @synthesize configurationNameLabel=_configurationNameLabel;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSString *currentConfigurationValue; // @synthesize currentConfigurationValue=_currentConfigurationValue;
@property(copy, nonatomic) NSString *configurationName; // @synthesize configurationName=_configurationName;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setUpConstraints;
- (id)init;

@end

