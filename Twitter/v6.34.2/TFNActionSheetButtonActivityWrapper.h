/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class NSString, UIImage;

@interface TFNActionSheetButtonActivityWrapper : UIActivity {

	NSString* _title;
	/*^block*/id _action;
	UIImage* _icon;

}

@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id action;                              //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) UIImage * icon;                       //@synthesize icon=_icon - In the implementation block
-(id)initWithTFNActionSheetButton:(id)arg1 ;
-(id)_activityTypeFromTitle;
-(UIImage *)icon;
-(id)action;
-(NSString *)title;
-(void)setAction:(id)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)activityImage;
@end
