/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class FABNetworkClient;

@interface CLSAnalyticsNetworkingClient : NSObject {

	FABNetworkClient* _networkClient;

}

@property (nonatomic,readonly) FABNetworkClient * networkClient;              //@synthesize networkClient=_networkClient - In the implementation block
-(id)requestForLogFilesAtURLs:(id)arg1 toURL:(id)arg2 withAPIKey:(id)arg3 ;
-(FABNetworkClient *)networkClient;
-(void)transmitLogFilesAtURLs:(id)arg1 toURL:(id)arg2 withAPIKey:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)init;
@end

