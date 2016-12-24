/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGGroupedCell.h>
#import <Telegram/TGSwitchViewDelegate.h>

@class ASHandle, NSString, UILabel, TGSwitchView;

@interface TGSwitchItemCell : TGGroupedCell <TGSwitchViewDelegate> {

	BOOL _isOn;
	ASHandle* _watcherHandle;
	id _itemId;
	NSString* _title;
	UILabel* _titleLabel;
	TGSwitchView* _switchView;

}

@property (nonatomic,retain) UILabel * titleLabel;                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) TGSwitchView * switchView;              //@synthesize switchView=_switchView - In the implementation block
@property (nonatomic,retain) ASHandle * watcherHandle;               //@synthesize watcherHandle=_watcherHandle - In the implementation block
@property (nonatomic,retain) id itemId;                              //@synthesize itemId=_itemId - In the implementation block
@property (nonatomic,retain) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL isOn;                              //@synthesize isOn=_isOn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWatcherHandle:(ASHandle *)arg1 ;
-(ASHandle *)watcherHandle;
-(void)setIsOn:(BOOL)arg1 ;
-(void)setIsOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setGroupedCellPosition:(int)arg1 ;
-(void)fireChangeEvent;
-(void)switchView:(id)arg1 didChangeIsOn:(BOOL)arg2 ;
-(void)setSwitchView:(TGSwitchView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)titleLabel;
-(BOOL)isOn;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)itemId;
-(void)setItemId:(id)arg1 ;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(TGSwitchView *)switchView;
@end
