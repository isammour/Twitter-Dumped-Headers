//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsTableRowAdapter.h>

#import <T1Twitter/T1InlineTweetPromptViewDelegate-Protocol.h>

@interface T1InlineTweetPromptTableRowAdapter : TFNItemsTableRowAdapter <T1InlineTweetPromptViewDelegate>
{
    // Error parsing type: , name: tweetPromptViewToTweetPromptItemTable
    // Error parsing type: , name: tweetPromptViewToControllerTable
}

- (CDUnknownBlockType).cxx_destruct;
- (void)inlineTweetPromptViewDidTapTextField:(id)arg1;
- (void)inlineTweetPromptViewDidTapAvatarView:(id)arg1;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)init;

@end

