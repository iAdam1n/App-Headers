/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface FBPageCTAConfirmationView : UIView {

	NSString* _ctaName;
	UIImageView* _checkmark;
	UILabel* _title;
	UILabel* _subtitle;
	unsigned long long _actionType;

}
-(id)initWithFrame:(CGRect)arg1 ctaName:(id)arg2 actionType:(unsigned long long)arg3 ;
-(void)layoutSubviews;
-(void)_configureViews;
@end
