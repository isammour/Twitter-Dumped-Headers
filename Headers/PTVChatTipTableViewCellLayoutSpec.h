//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVChatTipTableViewCellLayoutSpec : NSObject
{
}

+ (struct CGRect)ChatTipTitleFrameWithImageSize:(struct CGSize)arg1 AttributedTitle:(id)arg2 ContainerSize:(struct CGSize)arg3;
+ (struct CGRect)LTRChatTipTitleFrameWithImageSize:(struct CGSize)arg1 ContainerSize:(struct CGSize)arg2 AttributedTitle:(id)arg3;
+ (struct CGRect)ChatTipImageFrameWithImageSize:(struct CGSize)arg1 ContainerSize:(struct CGSize)arg2;
+ (struct CGRect)LTRChatTipImageFrameWithImageSize:(struct CGSize)arg1;
+ (struct CGRect)ChatTipContentFrameWithWithImageSize:(struct CGSize)arg1 AttributedTitle:(id)arg2 ContainerSize:(struct CGSize)arg3;
+ (struct CGRect)LTRChatTipContentFrameWithWithImageSize:(struct CGSize)arg1 AttributedTitle:(id)arg2 ContainerSize:(struct CGSize)arg3;
+ (double)ChatTipCellHeightWithImage:(id)arg1 MessageBody:(id)arg2 ContainerSize:(struct CGSize)arg3 UseLargeChatFont:(_Bool)arg4;
+ (id)AttributedChatTipWithBody:(id)arg1 UseLargeChatFont:(_Bool)arg2;
+ (id)CommentTipIcon;
+ (struct UIEdgeInsets)ChatTipCellMargins;

@end
