/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBFacebookAPIRequest.h>

@class NSMutableArray, NSString, FBRequestDeviceAPIContext, NSArray;

@interface FBGraphBatchRequest : FBFacebookAPIRequest {

	NSMutableArray* _requests;
	BOOL _requireAllRequestsToSucceed;
	BOOL _flush;
	BOOL _rollbackOnFailure;
	/*^block*/id _responseHandlerFactory;
	NSString* _batchName;
	NSString* _callerContext;
	NSString* _batchAppID;
	FBRequestDeviceAPIContext* _deviceAPIContext;

}

@property (nonatomic,copy) NSString * batchName;                              //@synthesize batchName=_batchName - In the implementation block
@property (nonatomic,copy) NSString * callerContext;                          //@synthesize callerContext=_callerContext - In the implementation block
@property (nonatomic,readonly) BOOL requireAllRequestsToSucceed;              //@synthesize requireAllRequestsToSucceed=_requireAllRequestsToSucceed - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requests;                       //@synthesize requests=_requests - In the implementation block
@property (nonatomic,copy) NSString * batchAppID;                             //@synthesize batchAppID=_batchAppID - In the implementation block
@property (assign) BOOL flush;                                                //@synthesize flush=_flush - In the implementation block
@property (assign) BOOL rollbackOnFailure;                                    //@synthesize rollbackOnFailure=_rollbackOnFailure - In the implementation block
@property (retain) FBRequestDeviceAPIContext * deviceAPIContext;              //@synthesize deviceAPIContext=_deviceAPIContext - In the implementation block
-(id)initWithRequest:(id)arg1 requireAllRequestsToSucceed:(BOOL)arg2 ;
-(BOOL)requireAllRequestsToSucceed;
-(FBRequestDeviceAPIContext *)deviceAPIContext;
-(BOOL)useMultipartForm;
-(id)methodForSignature;
-(id)requestForUDPPriming;
-(id)initWithRequests:(id)arg1 requireAllRequestsToSucceed:(BOOL)arg2 ;
-(void)addGraphRequest:(id)arg1 ;
-(NSString *)batchName;
-(void)setBatchName:(NSString *)arg1 ;
-(NSString *)callerContext;
-(void)setCallerContext:(NSString *)arg1 ;
-(NSString *)batchAppID;
-(void)setBatchAppID:(NSString *)arg1 ;
-(void)setFlush:(BOOL)arg1 ;
-(BOOL)rollbackOnFailure;
-(void)setRollbackOnFailure:(BOOL)arg1 ;
-(void)setDeviceAPIContext:(FBRequestDeviceAPIContext *)arg1 ;
-(/*^block*/id)responseHandlerFactory;
-(void)setResponseHandlerFactory:(/*^block*/id)arg1 ;
-(unsigned long long)compressionMethod;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)flush;
-(id)host;
-(id)initWithRequest:(id)arg1 ;
-(id)httpMethod;
-(NSArray *)requests;
-(id)parameters;
-(id)relativePath;
@end
