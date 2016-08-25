/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class WAChatButton, UIButton;

@interface WAChatListHeaderCell : UITableViewCell {

	WAChatButton* _broadcastButton;
	WAChatButton* _groupButton;

}

@property (nonatomic,readonly) UIButton * broadcastButton;              //@synthesize broadcastButton=_broadcastButton - In the implementation block
@property (nonatomic,readonly) UIButton * groupButton;                  //@synthesize groupButton=_groupButton - In the implementation block
-(UIButton *)broadcastButton;
-(UIButton *)groupButton;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)preferredHeight;
@end

