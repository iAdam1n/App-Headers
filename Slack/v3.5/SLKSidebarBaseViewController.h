/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class SLKActivityIndicator;

@interface SLKSidebarBaseViewController : UIViewController {

	SLKActivityIndicator* _activityIndicator;

}

@property (nonatomic,retain) SLKActivityIndicator * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(void)showLoadingState:(BOOL)arg1 ;
-(SLKActivityIndicator *)activityIndicator;
-(void)setActivityIndicator:(SLKActivityIndicator *)arg1 ;
@end

