//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNButtonImageProvider-Protocol.h>

@class NSString, UIImage;

@interface T1StickerCategoryButtonImageProvider : NSObject <TFNButtonImageProvider>
{
    UIImage *_image;
}

@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)imageWithHeight:(double)arg1 forAppearanceKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

