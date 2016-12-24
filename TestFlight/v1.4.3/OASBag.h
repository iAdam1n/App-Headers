/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:48:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/C8BBB3B7-A738-4D43-8A19-90B2CFB12AE1/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OASBagDelegate;
@class OASAuthenticationManager, NSURLSession, NSURLSessionTask, NSDictionary, NSMutableDictionary;

@interface OASBag : NSObject {

	id<OASBagDelegate> _delegate;
	OASAuthenticationManager* _authManager;
	NSURLSession* _session;
	NSURLSessionTask* _updateTask;
	NSDictionary* _originalBag;
	NSMutableDictionary* _workingBag;

}

@property (nonatomic,retain) id<OASBagDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) OASAuthenticationManager * authManager;              //@synthesize authManager=_authManager - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                                   //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * updateTask;                              //@synthesize updateTask=_updateTask - In the implementation block
@property (nonatomic,retain) NSDictionary * originalBag;                                 //@synthesize originalBag=_originalBag - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * workingBag;                           //@synthesize workingBag=_workingBag - In the implementation block
-(OASAuthenticationManager *)authManager;
-(NSURLSessionTask *)updateTask;
-(void)bagWasUpdatedWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)setUpdateTask:(NSURLSessionTask *)arg1 ;
-(NSDictionary *)originalBag;
-(void)setOriginalBag:(NSDictionary *)arg1 ;
-(void)setWorkingBag:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)workingBag;
-(void)updateBag;
-(void)setAuthManager:(OASAuthenticationManager *)arg1 ;
-(id)init;
-(void)setDelegate:(id<OASBagDelegate>)arg1 ;
-(id<OASBagDelegate>)delegate;
-(id)metricsConfiguration;
-(NSURLSession *)session;
@end
