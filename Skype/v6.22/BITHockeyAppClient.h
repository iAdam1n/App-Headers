/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSOperationQueue;

@interface BITHockeyAppClient : NSObject {

	NSURL* _baseURL;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSURL * baseURL;                                //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
+(id)queryStringFromParameters:(id)arg1 withEncoding:(unsigned long long)arg2 ;
+(id)dataWithPostValue:(id)arg1 forKey:(id)arg2 boundary:(id)arg3 ;
+(id)dataWithPostValue:(id)arg1 forKey:(id)arg2 contentType:(id)arg3 boundary:(id)arg4 filename:(id)arg5 ;
-(unsigned long long)cancelOperationsWithPath:(id)arg1 method:(id)arg2 ;
-(void)getPath:(id)arg1 parameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)postPath:(id)arg1 parameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)requestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3 ;
-(id)operationWithURLRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enqeueHTTPOperation:(id)arg1 ;
-(void)dealloc;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSURL *)baseURL;
-(NSOperationQueue *)operationQueue;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)initWithBaseURL:(id)arg1 ;
@end
