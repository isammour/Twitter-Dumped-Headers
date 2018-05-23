//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribeThrift/NSCoding-Protocol.h>
#import <TFSScribeThrift/TBase-Protocol.h>

@class NSString, TFSScribeThriftAPICategory, TFSScribeThriftAudioCategory, TFSScribeThriftImageCategory, TFSScribeThriftOtherCategory, TFSScribeThriftVideoCategory, TFSScribeThriftWebCategory;

@interface TFSScribeThriftDataCategory : NSObject <TBase, NSCoding>
{
    _Bool _imageCategoryIsSet;
    _Bool _videoCategoryIsSet;
    _Bool _audioCategoryIsSet;
    _Bool _apiCategoryIsSet;
    _Bool _webCategoryIsSet;
    _Bool _otherCategoryIsSet;
    TFSScribeThriftImageCategory *_imageCategory;
    TFSScribeThriftVideoCategory *_videoCategory;
    TFSScribeThriftAudioCategory *_audioCategory;
    TFSScribeThriftAPICategory *_apiCategory;
    TFSScribeThriftWebCategory *_webCategory;
    TFSScribeThriftOtherCategory *_otherCategory;
}

@property(readonly, nonatomic) _Bool otherCategoryIsSet; // @synthesize otherCategoryIsSet=_otherCategoryIsSet;
@property(retain, nonatomic) TFSScribeThriftOtherCategory *otherCategory; // @synthesize otherCategory=_otherCategory;
@property(readonly, nonatomic) _Bool webCategoryIsSet; // @synthesize webCategoryIsSet=_webCategoryIsSet;
@property(retain, nonatomic) TFSScribeThriftWebCategory *webCategory; // @synthesize webCategory=_webCategory;
@property(readonly, nonatomic) _Bool apiCategoryIsSet; // @synthesize apiCategoryIsSet=_apiCategoryIsSet;
@property(retain, nonatomic) TFSScribeThriftAPICategory *apiCategory; // @synthesize apiCategory=_apiCategory;
@property(readonly, nonatomic) _Bool audioCategoryIsSet; // @synthesize audioCategoryIsSet=_audioCategoryIsSet;
@property(retain, nonatomic) TFSScribeThriftAudioCategory *audioCategory; // @synthesize audioCategory=_audioCategory;
@property(readonly, nonatomic) _Bool videoCategoryIsSet; // @synthesize videoCategoryIsSet=_videoCategoryIsSet;
@property(retain, nonatomic) TFSScribeThriftVideoCategory *videoCategory; // @synthesize videoCategory=_videoCategory;
@property(readonly, nonatomic) _Bool imageCategoryIsSet; // @synthesize imageCategoryIsSet=_imageCategoryIsSet;
@property(retain, nonatomic) TFSScribeThriftImageCategory *imageCategory; // @synthesize imageCategory=_imageCategory;
- (void).cxx_destruct;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageCategory:(id)arg1 videoCategory:(id)arg2 audioCategory:(id)arg3 apiCategory:(id)arg4 webCategory:(id)arg5 otherCategory:(id)arg6;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
