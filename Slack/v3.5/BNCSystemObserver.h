/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BNCSystemObserver : NSObject
+(id)getOSVersion;
+(id)getAppVersion;
+(id)getUniqueHardwareId:(BOOL*)arg1 isDebug:(BOOL)arg2 andType:(id*)arg3 ;
+(id)getVendorId;
+(BOOL)adTrackingSafe;
+(id)getDefaultUriScheme;
+(id)getBundleID;
+(id)getTeamIdentifier;
+(id)getBrand;
+(id)getUpdateState;
+(void)setUpdateState;
+(id)getOS;
+(id)getScreenWidth;
+(id)getScreenHeight;
+(BOOL)isSimulator;
+(id)getModel;
@end
