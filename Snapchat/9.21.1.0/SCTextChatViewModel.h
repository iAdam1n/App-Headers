//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSavableItemChatViewModel.h"

#import "SCSavableTextChatCellViewConfig.h"

@interface SCTextChatViewModel : SCSavableItemChatViewModel <SCSavableTextChatCellViewConfig>
{
}

+ (id)emojiOnlyLabelFont;
- (void)logShowingAddressLinks;
- (_Bool)shouldShowMediaCardForAddress:(id)arg1;
- (_Bool)shouldShowMediaCardForURL:(id)arg1;
- (void)fetchURLMediaCardsFromServerIfNecessary;
- (void)fetchAddressMediaCardsFromServerIfNecessary;
- (id)createAddressMediaCardViewModelForAddress:(id)arg1;
- (id)createURLMediaCardViewModelForURL:(id)arg1;
- (id)attributedTextForPhoneNumber:(id)arg1;
- (id)phoneNumberIconImage;
- (_Bool)hasOnlyEmoji;
- (id)links;
- (id)productToDisplayLinkAttribute;
- (id)linkAttributes;
- (id)attributedText;
- (id)rawText;
- (id)colorForLinkUnderline;
- (id)colorForLink;
- (id)colorForChatLabel;
- (id)fontForChatLabel;
- (double)payloadVerticalMargin;
- (double)payloadHeightForWidth:(double)arg1;
- (id)text;
- (id)createChatCellWithDelegate:(id)arg1;
- (id)reusableCellIdentifier;

@end
