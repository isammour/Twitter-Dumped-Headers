//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

@class NSString, T1RecentSearchCollectionItemAdapter, TFNTwitterScribe, TFSTwitterScribeContext, UICollectionViewFlowLayout;

@interface T1RecentSearchTypeaheadViewController : TFNItemsDataViewController
{
    TFSTwitterScribeContext *_scribeContext;
    _Bool _viewDidLoadFired;
    NSString *_accountID;
    T1RecentSearchCollectionItemAdapter *_recentSearchAdapter;
    UICollectionViewFlowLayout *_flowLayout;
    TFNTwitterScribe *_scribe;
}

@property(nonatomic) _Bool viewDidLoadFired; // @synthesize viewDidLoadFired=_viewDidLoadFired;
@property(retain, nonatomic) TFNTwitterScribe *scribe; // @synthesize scribe=_scribe;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) T1RecentSearchCollectionItemAdapter *recentSearchAdapter; // @synthesize recentSearchAdapter=_recentSearchAdapter;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (id)scribeElement;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribeContext;
- (id)_scribeItems;
- (void)layoutMetricsDidChange:(id)arg1;
- (void)_fontSizeDidUpdate;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (void)setResults:(id)arg1;
- (void)setRecentSearchDelegate:(id)arg1;
- (void)logImpression;
- (id)initWithScribe:(id)arg1 scribeContext:(id)arg2;

@end
