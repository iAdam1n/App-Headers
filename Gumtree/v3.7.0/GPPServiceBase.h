/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface GPPServiceBase : NSObject {

	NSString* _onBehalfOf;

}

@property (nonatomic,copy) NSString * onBehalfOf;              //@synthesize onBehalfOf=_onBehalfOf - In the implementation block
+(void)setSDKHeadersForService:(id)arg1 clientID:(id)arg2 appName:(id)arg3 version:(id)arg4 versionSuffixFormat:(id)arg5 ;
-(NSString *)onBehalfOf;
-(void)setOnBehalfOf:(NSString *)arg1 ;
-(id)executeQuery:(id)arg1 usingService:(id)arg2 batchLogsFrom:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)sendLogQuery:(id)arg1 withService:(id)arg2 ;
@end
