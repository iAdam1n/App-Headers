/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface SLKLoadingCell : UITableViewCell {

	UIView* _avatarView;
	UIView* _titleView;
	UIView* _timestampView;
	UIView* _textView;
	UIView* _secondTextView;

}

@property (nonatomic,retain) UIView * avatarView;                  //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIView * titleView;                   //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UIView * timestampView;               //@synthesize timestampView=_timestampView - In the implementation block
@property (nonatomic,retain) UIView * textView;                    //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIView * secondTextView;              //@synthesize secondTextView=_secondTextView - In the implementation block
-(void)setTimestampView:(UIView *)arg1 ;
-(UIView *)timestampView;
-(void)setSecondTextView:(UIView *)arg1 ;
-(UIView *)secondTextView;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)titleView;
-(void)setTitleView:(UIView *)arg1 ;
-(void)setTextView:(UIView *)arg1 ;
-(UIView *)textView;
-(UIView *)avatarView;
-(void)setAvatarView:(UIView *)arg1 ;
@end

