//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsModuleTransformer.h>

@class TFNItemsDataViewSectionController, TFNTwitterAccount;
@protocol T1PeopleDiscoveryModuleLayoutTransformer;

@interface T1PeopleDiscoveryModuleTransformer : TFNItemsModuleTransformer
{
    TFNTwitterAccount *_account;
    id <T1PeopleDiscoveryModuleLayoutTransformer> _layoutTransformer;
    TFNItemsDataViewSectionController *_sectionController;
}

+ (id)scribeComponentForModule:(id)arg1;
@property(readonly, nonatomic) TFNItemsDataViewSectionController *sectionController; // @synthesize sectionController=_sectionController;
@property(readonly, nonatomic) id <T1PeopleDiscoveryModuleLayoutTransformer> layoutTransformer; // @synthesize layoutTransformer=_layoutTransformer;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)reuseIdentifierForModule:(id)arg1;
- (id)sectionControllerForModule:(id)arg1;
- (id)itemsForModule:(id)arg1;
- (void)useWithSectionTransformer:(id)arg1;
- (id)init;
- (id)initWithLayoutTransformer:(id)arg1;

@end

