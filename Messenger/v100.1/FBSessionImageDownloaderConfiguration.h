/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBImageDownloaderConfiguration.h>

@class FBUserSession, NSString;

@interface FBSessionImageDownloaderConfiguration : NSObject <FBImageDownloaderConfiguration> {

	FBUserSession* _session;
	BOOL _cdnCacheStatusQuery;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 cdnCacheStatusQuery:(BOOL)arg2 ;
-(BOOL)appendAccessToken;
-(BOOL)enabledCdnCacheStatusQuery;
-(id)actorFBIDForDownloadRequest;
-(BOOL)isViewerEmployee;
@end
