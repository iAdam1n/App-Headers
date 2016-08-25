/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, WAChatButton;

@interface WAReportSpamCell : UITableViewCell {

	UIView* _blurredBackgroundTrackingView;
	WAChatButton* _blockButton;
	WAChatButton* _reportButton;
	WAChatButton* _trustButton;
	BOOL _groupChat;
	/*^block*/id _blockAction;
	/*^block*/id _reportAction;
	/*^block*/id _trustAction;

}

@property (assign,getter=isGroupChat,nonatomic) BOOL groupChat;              //@synthesize groupChat=_groupChat - In the implementation block
@property (nonatomic,copy) id blockAction;                                   //@synthesize blockAction=_blockAction - In the implementation block
@property (nonatomic,copy) id reportAction;                                  //@synthesize reportAction=_reportAction - In the implementation block
@property (nonatomic,copy) id trustAction;                                   //@synthesize trustAction=_trustAction - In the implementation block
+(double)preferredHeightForWidth:(double)arg1 isGroupChat:(BOOL)arg2 ;
+(id)warningTextFont;
+(id)warningTextForGroup:(BOOL)arg1 ;
+(BOOL)selectable;
-(BOOL)isGroupChat;
-(void)reloadFonts;
-(void)setBlockButtonTitle:(id)arg1 ;
-(void)setGroupChat:(BOOL)arg1 ;
-(void)setTrustAction:(id)arg1 ;
-(void)setReportAction:(id)arg1 ;
-(void)blockButtonAction:(id)arg1 ;
-(void)reportButtonAction:(id)arg1 ;
-(void)trustButtonAction:(id)arg1 ;
-(id)reportAction;
-(id)trustAction;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setBlockAction:(id)arg1 ;
-(id)blockAction;
@end

