/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:12 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ModelObject.h>

@class NSString;

@interface ExecutablePromotionAd : ModelObject {

	int appleAppId;
	int androidAppId;
	NSString* appHandler;
	NSString* engagementUrl;
	NSString* installUrl;
	NSString* fallbackInstallUrl;
	NSString* _channelName;
	NSString* _viewName;

}

@property (nonatomic,retain) NSString * appHandler; 
@property (nonatomic,retain) NSString * engagementUrl; 
@property (nonatomic,retain) NSString * installUrl; 
@property (nonatomic,retain) NSString * fallbackInstallUrl; 
@property (assign,nonatomic) int appleAppId; 
@property (assign,nonatomic) int androidAppId; 
@property (nonatomic,retain) NSString * channelName;                     //@synthesize channelName=_channelName - In the implementation block
@property (nonatomic,retain) NSString * viewName;                        //@synthesize viewName=_viewName - In the implementation block
-(void)setViewName:(NSString *)arg1 ;
-(void)executeTouchActionFromLocation:(id)arg1 ;
-(BOOL)launchable;
-(int)appleAppId;
-(NSString *)installUrl;
-(NSString *)fallbackInstallUrl;
-(NSString *)viewName;
-(void)executeTouchAction;
-(void)setAppleAppId:(int)arg1 ;
-(int)androidAppId;
-(void)setAndroidAppId:(int)arg1 ;
-(NSString *)appHandler;
-(void)setAppHandler:(NSString *)arg1 ;
-(NSString *)engagementUrl;
-(void)setEngagementUrl:(NSString *)arg1 ;
-(void)setInstallUrl:(NSString *)arg1 ;
-(void)setFallbackInstallUrl:(NSString *)arg1 ;
-(void)setChannelName:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)channelName;
-(int)appId;
@end
