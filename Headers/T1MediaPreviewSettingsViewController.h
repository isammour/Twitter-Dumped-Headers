//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1SettingsAccountInitializable-Protocol.h>

@class NSString, T1MediaCacheSettingsViewController, T1WebViewCacheSettingsViewController, TFNTwitterAccount, TFSTwitterScribeContext;

@interface T1MediaPreviewSettingsViewController : TFNItemsDataViewController <T1SettingsAccountInitializable>
{
    TFNTwitterAccount *_account;
    TFSTwitterScribeContext *_scribeContext;
    T1MediaCacheSettingsViewController *_mediaCacheViewController;
    T1WebViewCacheSettingsViewController *_webViewCacheViewController;
}

@property(retain, nonatomic) T1WebViewCacheSettingsViewController *webViewCacheViewController; // @synthesize webViewCacheViewController=_webViewCacheViewController;
@property(retain, nonatomic) T1MediaCacheSettingsViewController *mediaCacheViewController; // @synthesize mediaCacheViewController=_mediaCacheViewController;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (_Bool)t1_showsComposeAction;
- (void)_t1_loadSizes;
- (id)_t1_cacheItemWithCapitalizedName:(id)arg1 cacheSizeString:(id)arg2 triggerViewController:(id)arg3;
- (id)_t1_storageWebViewItem;
- (id)_t1_storageMediaItem;
- (id)_t1_videoQualityValues;
- (id)_t1_videoQualityNames;
- (id)_t1_videoQualityItem;
- (id)_t1_mediaAutoplayValues;
- (id)_t1_mediaAutoplayNames;
- (id)_t1_mediaAutoplayHelpItem;
- (id)_t1_mediaAutoplayItem;
- (id)_t1_mediaForwardItem;
- (void)update:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
