/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TWAPIManager : NSObject
+(BOOL)hasAppKeys;
+(BOOL)isLocalTwitterAccountAvailable;
-(void)_step2WithAccount:(id)arg1 signature:(id)arg2 andHandler:(/*^block*/id)arg3 ;
-(void)_step1WithCompletion:(/*^block*/id)arg1 ;
-(id)requestWithUrl:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3 ;
-(void)performReverseAuthForAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
@end

