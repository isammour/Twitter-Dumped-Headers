//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSCopying;

@interface TFNDataViewCellLayout : NSObject
{
    id <NSCopying> _objectIdentifier;
    struct CGSize _size;
    struct UIEdgeInsets _contentEdgeInsets;
}

+ (id)cellLayoutForDataView:(id)arg1 atIndexPath:(id)arg2 objectIdentifier:(id)arg3 initialization:(CDUnknownBlockType)arg4;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) id <NSCopying> objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;
- (void).cxx_destruct;
- (_Bool)isValidForConstrainingSize:(struct CGSize)arg1 contentEdgeInsets:(struct UIEdgeInsets)arg2;

@end

