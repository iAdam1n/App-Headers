/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAMessageCellSubview.h>

@class UIView, UIImageView, UILabel, WAMessageReplyContext;

@interface WAMessageCellReplyContextView : WAMessageCellSubview {

	UIView* _contentView;
	UIView* _senderColorStripView;
	UIImageView* _imageView;
	UILabel* _contentLabel;
	WAMessageReplyContext* _replyContext;

}

@property (nonatomic,retain) WAMessageReplyContext * replyContext;              //@synthesize replyContext=_replyContext - In the implementation block
+(double)preferredWidthForAttributedText:(id)arg1 includesImage:(BOOL)arg2 ;
+(BOOL)supportsDoubleTapGesture;
+(double)preferredHeight;
-(WAMessageReplyContext *)replyContext;
-(void)setReplyContext:(WAMessageReplyContext *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(id)accessibilityHint;
@end

