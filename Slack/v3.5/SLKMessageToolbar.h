/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>

@protocol SLKMessageFooterDelegate;
@class UIView;

@interface SLKMessageToolbar : UITableViewHeaderFooterView {

	id<SLKMessageFooterDelegate> _delegate;
	UIView* _topHairline;
	UIView* _bottomHairline;
	unsigned long long _items;

}

@property (assign,nonatomic) unsigned long long items;                                  //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) id<SLKMessageFooterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * topHairline;                                      //@synthesize topHairline=_topHairline - In the implementation block
@property (nonatomic,retain) UIView * bottomHairline;                                   //@synthesize bottomHairline=_bottomHairline - In the implementation block
+(double)height;
-(id)initWithReuseIdentifier:(id)arg1 andItems:(unsigned long long)arg2 ;
-(void)setItem:(unsigned long long)arg1 selected:(BOOL)arg2 ;
-(id)hairline;
-(CGRect)topHairlineRect;
-(CGRect)bottomHairlineRect;
-(id)itemButtons;
-(id)buttonImageForItem:(unsigned long long)arg1 selected:(BOOL)arg2 ;
-(id)buttonForItem:(unsigned long long)arg1 ;
-(id)buttonColorForItem:(unsigned long long)arg1 selected:(BOOL)arg2 ;
-(void)didTapButton:(id)arg1 ;
-(id)buttonsForItems:(unsigned long long)arg1 ;
-(void)setItem:(unsigned long long)arg1 interactive:(BOOL)arg2 ;
-(void)setDelegate:(id<SLKMessageFooterDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<SLKMessageFooterDelegate>)delegate;
-(unsigned long long)items;
-(void)setItems:(unsigned long long)arg1 ;
-(void)setTopHairline:(UIView *)arg1 ;
-(void)setBottomHairline:(UIView *)arg1 ;
-(UIView *)topHairline;
-(UIView *)bottomHairline;
@end
