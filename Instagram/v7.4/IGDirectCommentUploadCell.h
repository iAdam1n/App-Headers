/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:12 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectCommentCell.h>
#import <Instagram/IGDirectContentUploadObserver.h>
#import <Instagram/IGDirectContentUploadCell.h>

@class UIButton, UIView, NSString;

@interface IGDirectCommentUploadCell : IGDirectCommentCell <IGDirectContentUploadObserver, IGDirectContentUploadCell> {

	UIButton* _retryButton;
	UIView* _sendingDot;

}

@property (assign,nonatomic,__weak) id<IGDirectContentUpoadCellDelegate> delegate; 
@property (nonatomic,retain) UIButton * retryButton;                                            //@synthesize retryButton=_retryButton - In the implementation block
@property (nonatomic,retain) UIView * sendingDot;                                               //@synthesize sendingDot=_sendingDot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)loadingIndicatorOffset;
-(UIButton *)retryButton;
-(UIView *)sendingDot;
-(void)retryButtonTapped;
-(id)timestampText;
-(void)showRetryMenu;
-(void)performRetry;
-(void)notifyUploadFailureForUpload:(id)arg1 ;
-(void)handleUploadCellTap;
-(void)setRetryButton:(UIButton *)arg1 ;
-(void)setSendingDot:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)fillColor;
-(void)setContent:(id)arg1 ;
-(id)defaultTextColor;
@end

