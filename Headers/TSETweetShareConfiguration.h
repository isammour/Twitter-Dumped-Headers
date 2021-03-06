//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TSETweet;
@protocol TSEAccount, TSEAutoCompletion, TSECardPreviewProvider, TSEGeoTagging, TSEImageDownloader, TSENetworking, TSEScribe, TSETweetShareViewControllerDelegate;

@interface TSETweetShareConfiguration : NSObject
{
    _Bool _shareSheetUIUpdateEnabled;
    NSArray *_accounts;
    id <TSEAccount> _initiallySelectedAccount;
    TSETweet *_initialTweet;
    id <TSEGeoTagging> _geoTagging;
    id <TSEAutoCompletion> _autoCompletion;
    id <TSECardPreviewProvider> _cardPreviewProvider;
    id <TSEImageDownloader> _imageDownloader;
    id <TSENetworking> _networking;
    id <TSEScribe> _scribe;
    Class _wordRangeCalculator;
    id <TSETweetShareViewControllerDelegate> _delegate;
}

@property(nonatomic, getter=isShareSheetUIUpdateEnabled) _Bool shareSheetUIUpdateEnabled; // @synthesize shareSheetUIUpdateEnabled=_shareSheetUIUpdateEnabled;
@property(readonly, nonatomic) __weak id <TSETweetShareViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) Class wordRangeCalculator; // @synthesize wordRangeCalculator=_wordRangeCalculator;
@property(readonly, nonatomic) id <TSEScribe> scribe; // @synthesize scribe=_scribe;
@property(readonly, nonatomic) id <TSENetworking> networking; // @synthesize networking=_networking;
@property(readonly, nonatomic) id <TSEImageDownloader> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(readonly, nonatomic) id <TSECardPreviewProvider> cardPreviewProvider; // @synthesize cardPreviewProvider=_cardPreviewProvider;
@property(readonly, nonatomic) id <TSEAutoCompletion> autoCompletion; // @synthesize autoCompletion=_autoCompletion;
@property(readonly, nonatomic) id <TSEGeoTagging> geoTagging; // @synthesize geoTagging=_geoTagging;
@property(readonly, copy, nonatomic) TSETweet *initialTweet; // @synthesize initialTweet=_initialTweet;
@property(readonly, nonatomic) id <TSEAccount> initiallySelectedAccount; // @synthesize initiallySelectedAccount=_initiallySelectedAccount;
@property(readonly, copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;
- (id)initWithInitialTweet:(id)arg1 accounts:(id)arg2 initiallySelectedAccount:(id)arg3 geoTagging:(id)arg4 autoCompletion:(id)arg5 cardPreviewProvider:(id)arg6 imageDownloader:(id)arg7 localizedResources:(Class)arg8 networking:(id)arg9 twitterText:(Class)arg10 twitterTextParser:(id)arg11 wordRangeCalculator:(Class)arg12 scribe:(id)arg13 delegate:(id)arg14;

@end

