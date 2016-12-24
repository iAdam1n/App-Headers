/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBBrowserLayoutPulseViewConfig, UILabel, UIImageView, NSString;

@interface FBBrowserPulseView : UIView {

	FBBrowserLayoutPulseViewConfig* _layoutConfig;
	UILabel* _pulseCount;
	UILabel* _pulseDescription;
	UIImageView* _pulseIcon;
	NSString* _pulseCountString;

}

@property (nonatomic,copy) NSString * pulseCountString;              //@synthesize pulseCountString=_pulseCountString - In the implementation block
-(id)initWithLayoutConfig:(id)arg1 ;
-(void)setPulseCountString:(NSString *)arg1 ;
-(NSString *)pulseCountString;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
