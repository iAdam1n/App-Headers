/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAMessageCell.h>
#import <WhatsApp/WADownloadProgressViewDelegate.h>

@class UILabel, _WADocumentMessageCellContainerView, NSString;

@interface WADocumentMessageCell : WAMessageCell <WADownloadProgressViewDelegate> {

	UILabel* _documentInfoLabel;
	_WADocumentMessageCellContainerView* _containerView;
	BOOL _needsUpdateProgressViewVisibility;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(UIEdgeInsets)contentInsetsForCellData:(id)arg1 cellWidth:(double)arg2 ;
+(UIEdgeInsets)textInsetsForCellData:(id)arg1 ;
+(double)maximumBubbleWidthForCellData:(id)arg1 cellWidth:(double)arg2 ;
+(id)cellReuseIdentifier;
+(CGSize)contentSizeForCellData:(id)arg1 maxWidth:(double)arg2 ;
+(void)initialize;
-(void)setProgressViewHidden:(BOOL)arg1 ;
-(void)configureCellWithAnimation:(BOOL)arg1 ;
-(CGRect)replyContextViewFrameFromDefaultFrame:(CGRect)arg1 ;
-(BOOL)canPerformCopy;
-(id)registerSubviewsForPreviewingUsingViewController:(id)arg1 previewingDelegate:(id)arg2 ;
-(id)dataForPreviewingContext:(id)arg1 atLocation:(CGPoint)arg2 ;
-(id)accessibilityHintText;
-(void)setShowsProgressBar:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setProgressViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)downloadProgressViewDidCancel:(id)arg1 ;
-(void)handleTapOnBubbleWithLocation:(CGPoint)arg1 ;
-(id)fileInfoAttributedString;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setProgress:(float)arg1 ;
-(void)prepareForReuse;
-(float)progress;
@end
