/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:45:35 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/7881866A-D1BE-4511-B548-423BBF260BEE/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class FBSDKGraphRequest, NSDictionary;

@interface FBSDKGraphRequestMetadata : NSObject {

	FBSDKGraphRequest* _request;
	/*^block*/id _completionHandler;
	NSDictionary* _batchParameters;

}

@property (nonatomic,retain) FBSDKGraphRequest * request;               //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id completionHandler;                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSDictionary * batchParameters;              //@synthesize batchParameters=_batchParameters - In the implementation block
-(void)setBatchParameters:(NSDictionary *)arg1 ;
-(id)initWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 batchParameters:(id)arg3 ;
-(NSDictionary *)batchParameters;
-(void)invokeCompletionHandlerForConnection:(id)arg1 withResults:(id)arg2 error:(id)arg3 ;
-(id)init;
-(id)description;
-(FBSDKGraphRequest *)request;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setRequest:(FBSDKGraphRequest *)arg1 ;
@end
