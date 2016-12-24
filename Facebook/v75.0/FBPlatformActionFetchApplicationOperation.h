/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPlatformActionOperation.h>

@class NSString, FBPlatformApplicationGraphQLDownloadRequest;

@interface FBPlatformActionFetchApplicationOperation : FBPlatformActionOperation {

	NSString* _appName;
	FBPlatformApplicationGraphQLDownloadRequest* _applicationRequest;

}

@property (nonatomic,retain) FBPlatformApplicationGraphQLDownloadRequest * applicationRequest;              //@synthesize applicationRequest=_applicationRequest - In the implementation block
@property (nonatomic,copy,readonly) NSString * appName;                                                     //@synthesize appName=_appName - In the implementation block
-(void)_cancelApplicationRequest;
-(FBPlatformApplicationGraphQLDownloadRequest *)applicationRequest;
-(void)setApplicationRequest:(FBPlatformApplicationGraphQLDownloadRequest *)arg1 ;
-(id)defaultErrorMessage;
-(void)cancel;
-(id)initWithAction:(id)arg1 ;
-(void)cleanup;
-(NSString *)appName;
-(void)process;
@end
