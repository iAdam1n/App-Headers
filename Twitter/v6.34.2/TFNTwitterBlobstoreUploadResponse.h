/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSError, NSURL, TFNTwitterScribeNetworkRequest;

@interface TFNTwitterBlobstoreUploadResponse : NSObject {

	BOOL _created;
	NSError* _error;
	NSURL* _uploadURL;
	TFNTwitterScribeNetworkRequest* _networkRequest;

}

@property (nonatomic,readonly) BOOL created;                                                 //@synthesize created=_created - In the implementation block
@property (nonatomic,readonly) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSURL * uploadURL;                                            //@synthesize uploadURL=_uploadURL - In the implementation block
@property (nonatomic,readonly) TFNTwitterScribeNetworkRequest * networkRequest;              //@synthesize networkRequest=_networkRequest - In the implementation block
-(id)initWithHTTPRequestResponse:(id)arg1 appNamespace:(id)arg2 ;
-(TFNTwitterScribeNetworkRequest *)networkRequest;
-(id)init;
-(NSURL *)uploadURL;
-(NSError *)error;
-(BOOL)created;
@end

