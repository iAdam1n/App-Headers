/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class FBRichTextView, UIView, NSString, UISwitch;

@interface FBEventsInviteThroughMessengerFooter : UIView <UIGestureRecognizerDelegate> {

	FBRichTextView* _titleLabel;
	UIView* _border;
	BOOL _enabled;
	NSString* _title;
	UIView* _toggleSwitchView;
	UISwitch* _toggleSwitch;

}

@property (nonatomic,readonly) UISwitch * toggleSwitch;                //@synthesize toggleSwitch=_toggleSwitch - In the implementation block
@property (nonatomic,readonly) UIView * toggleSwitchView;              //@synthesize toggleSwitchView=_toggleSwitchView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)toggleSwitchView;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(UISwitch *)toggleSwitch;
-(void)_updateTitle;
@end
