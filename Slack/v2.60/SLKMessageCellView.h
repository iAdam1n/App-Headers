/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIActionSheetDelegate.h>

@class NSTimer, SLKMessageNode, UIFont, SLKMessageCell, SLKMessageDrawParameters, SLKLink, SLKActivityIndicator, UIImageView, SLKReactionsView, NSString;

@interface SLKMessageCellView : UIView <UIActionSheetDelegate> {

	NSTimer* _touchTimer;
	SLKMessageNode* _messageNode;
	UIFont* _textFont;
	SLKMessageCell* _cell;
	SLKMessageDrawParameters* _parameters;
	SLKLink* _touchedLink;
	SLKActivityIndicator* _pendingView;
	UIImageView* _alertIconImageView;
	SLKReactionsView* _reactionsView;
	SLKActivityIndicator* _pendingMessageSendView;

}

@property (nonatomic,retain) SLKMessageNode * messageNode;                               //@synthesize messageNode=_messageNode - In the implementation block
@property (nonatomic,retain) UIFont * textFont;                                          //@synthesize textFont=_textFont - In the implementation block
@property (assign,nonatomic,__weak) SLKMessageCell * cell;                               //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) SLKMessageDrawParameters * parameters;                      //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) SLKLink * touchedLink;                                      //@synthesize touchedLink=_touchedLink - In the implementation block
@property (assign,nonatomic,__weak) SLKActivityIndicator * pendingView;                  //@synthesize pendingView=_pendingView - In the implementation block
@property (nonatomic,retain) UIImageView * alertIconImageView;                           //@synthesize alertIconImageView=_alertIconImageView - In the implementation block
@property (nonatomic,retain) SLKReactionsView * reactionsView;                           //@synthesize reactionsView=_reactionsView - In the implementation block
@property (nonatomic,retain) SLKActivityIndicator * pendingMessageSendView;              //@synthesize pendingMessageSendView=_pendingMessageSendView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMessageNode:(SLKMessageNode *)arg1 ;
-(SLKMessageNode *)messageNode;
-(void)setReactionsView:(SLKReactionsView *)arg1 ;
-(SLKReactionsView *)reactionsView;
-(void)displayPendingMessageSendViewIfNeeded;
-(void)updateUIForParameters;
-(BOOL)shouldDisplayPendingMessageSendView;
-(SLKActivityIndicator *)pendingMessageSendView;
-(void)setPendingMessageSendView:(SLKActivityIndicator *)arg1 ;
-(void)setTextFont:(UIFont *)arg1 ;
-(SLKLink *)touchedLink;
-(void)setTouchedLink:(SLKLink *)arg1 ;
-(SLKActivityIndicator *)pendingView;
-(void)setPendingView:(SLKActivityIndicator *)arg1 ;
-(UIImageView *)alertIconImageView;
-(void)setAlertIconImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)prepareForReuse;
-(SLKMessageDrawParameters *)parameters;
-(void)setParameters:(SLKMessageDrawParameters *)arg1 ;
-(SLKMessageCell *)cell;
-(UIFont *)textFont;
-(void)setCell:(SLKMessageCell *)arg1 ;
@end
