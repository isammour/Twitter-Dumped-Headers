//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewSectionController.h>

#import <T1Twitter/TFNItemsTransformer-Protocol.h>

@class NSString, T1DismissibleHeaderTableRowAdapter, T1ModuleFooterTableRowAdapter, TFNTwitterStatusCarousel;

@interface T1StatusesModuleCarouselSectionController : TFNItemsDataViewSectionController <TFNItemsTransformer>
{
    TFNTwitterStatusCarousel *_statusesCarousel;
    T1DismissibleHeaderTableRowAdapter *_dismissHeaderAdapter;
    T1ModuleFooterTableRowAdapter *_moduleFooterAdapter;
}

@property(retain, nonatomic) T1ModuleFooterTableRowAdapter *moduleFooterAdapter; // @synthesize moduleFooterAdapter=_moduleFooterAdapter;
@property(retain, nonatomic) T1DismissibleHeaderTableRowAdapter *dismissHeaderAdapter; // @synthesize dismissHeaderAdapter=_dismissHeaderAdapter;
@property(retain, nonatomic) TFNTwitterStatusCarousel *statusesCarousel; // @synthesize statusesCarousel=_statusesCarousel;
- (void).cxx_destruct;
- (id)timelineObjectForItemAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)transformItem:(id)arg1;
- (id)initWithStatusCarousel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

