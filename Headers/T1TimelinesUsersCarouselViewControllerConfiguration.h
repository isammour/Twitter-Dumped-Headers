//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1TimelinesItemsCarouselViewControllerConfiguration-Protocol.h>

@class NSArray, T1TimelinesCarouselCollectionViewLayout;

@interface T1TimelinesUsersCarouselViewControllerConfiguration : NSObject <T1TimelinesItemsCarouselViewControllerConfiguration>
{
    T1TimelinesCarouselCollectionViewLayout *_layout;
}

@property(readonly, nonatomic) T1TimelinesCarouselCollectionViewLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (struct CGSize)sizeForItemInCarouselCollectionViewLayout:(id)arg1;
@property(readonly, nonatomic) NSArray *itemTypes;
- (id)adapterForController:(id)arg1;
- (id)initWithLayoutMetricsProvider:(id)arg1;

@end

