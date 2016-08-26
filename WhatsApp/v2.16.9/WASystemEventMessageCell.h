/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAMessageCell.h>

@class WALabel;

@interface WASystemEventMessageCell : WAMessageCell {

	WALabel* _textLabel;

}
+(BOOL)supportsDoubleTapGesture;
+(UIEdgeInsets)contentInsetsForCellData:(id)arg1 cellWidth:(double)arg2 ;
+(UIEdgeInsets)textInsetsForCellData:(id)arg1 ;
+(UIEdgeInsets)baseContentInsetsForCellData:(id)arg1 ;
+(id)cellReuseIdentifier;
+(CGSize)contentSizeForCellData:(id)arg1 maxWidth:(double)arg2 ;
+(BOOL)showsHighlightOnTouch;
+(Class)cellClassForCellData:(id)arg1 ;
+(UIEdgeInsets)bubbleMarginsForCellData:(id)arg1 ;
+(BOOL)layoutSubviewsOnlySetsBubbleBounds;
+(id)attributedTextChatCellData:(id)arg1 ;
+(BOOL)shouldShowDismissButtonForMessage:(id)arg1 ;
+(double)maxBubbleWidthForCellWidth:(double)arg1 ;
+(BOOL)selectable;
-(void)configureCellWithAnimation:(BOOL)arg1 ;
-(void)handleTapOnBubbleWithLocation:(CGPoint)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
@end
