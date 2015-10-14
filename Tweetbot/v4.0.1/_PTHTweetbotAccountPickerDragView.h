/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:56 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>

@class PTHPopoverShapeView, NSString, PTHTweetbotAvatarView;

@interface _PTHTweetbotAccountPickerDragView : UIView {

	PTHPopoverShapeView* _shapeView;
	NSString* _colorGroupName;
	PTHTweetbotAvatarView* _avatarView;
	double _removePercentage;

}

@property (nonatomic,readonly) NSString * colorGroupName;                     //@synthesize colorGroupName=_colorGroupName - In the implementation block
@property (nonatomic,retain) PTHTweetbotAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
@property (assign,nonatomic) double removePercentage;                         //@synthesize removePercentage=_removePercentage - In the implementation block
@property (nonatomic,readonly) BOOL shouldRemove; 
-(id)initWithAccount:(id)arg1 colorGroupName:(id)arg2 avatarDiameter:(double)arg3 ;
-(BOOL)shouldRemove;
-(void)setRemovePercentage:(double)arg1 ;
-(double)removePercentage;
-(NSString *)colorGroupName;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PTHTweetbotAvatarView *)avatarView;
-(void)setAvatarView:(PTHTweetbotAvatarView *)arg1 ;
@end

