/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface FBFadingTextView : UIView {

	UILabel* _textLabel;
	UIImageView* _shadow;

}
+(void)showNetworkErrorViewIn:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 text:(id)arg2 ;
-(void)layoutSubviews;
-(void)show;
-(void)showInView:(id)arg1 ;
-(void)fadeOut;
-(void)removeFromView;
@end
