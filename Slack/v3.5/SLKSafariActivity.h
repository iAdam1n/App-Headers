/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class NSURL;

@interface SLKSafariActivity : UIActivity {

	NSURL* _url;

}

@property (nonatomic,copy) NSURL * url;              //@synthesize url=_url - In the implementation block
-(NSURL *)url;
-(id)activityType;
-(void)setUrl:(NSURL *)arg1 ;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityImage;
@end

