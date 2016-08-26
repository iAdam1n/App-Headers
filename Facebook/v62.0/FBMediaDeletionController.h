/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequestDelegate.h>
#import <Facebook/FBPhotoDeletionProtocol.h>

@class FBUserSession, NSString;

@interface FBMediaDeletionController : NSObject <FBNetworkerRequestDelegate, FBPhotoDeletionProtocol> {

	FBUserSession* _session;
	/*^block*/id _successBlock;
	/*^block*/id _failBlock;
	NSString* _photoGraphQLID;
	NSString* _friendlyName;
	NSString* _requestPath;
	NSString* _requestName;

}

@property (nonatomic,copy) id successBlock;                         //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy) id failBlock;                            //@synthesize failBlock=_failBlock - In the implementation block
@property (nonatomic,copy) NSString * photoGraphQLID;               //@synthesize photoGraphQLID=_photoGraphQLID - In the implementation block
@property (nonatomic,copy) NSString * friendlyName;                 //@synthesize friendlyName=_friendlyName - In the implementation block
@property (nonatomic,copy) NSString * requestPath;                  //@synthesize requestPath=_requestPath - In the implementation block
@property (nonatomic,copy) NSString * requestName;                  //@synthesize requestName=_requestName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSuccessBlock:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(NSString *)photoGraphQLID;
-(void)deletePhoto:(id)arg1 successBlock:(/*^block*/id)arg2 failBlock:(/*^block*/id)arg3 ;
-(void)setFailBlock:(id)arg1 ;
-(id)successBlock;
-(id)failBlock;
-(void)deleteVideo:(id)arg1 successBlock:(/*^block*/id)arg2 failBlock:(/*^block*/id)arg3 ;
-(void)setPhotoGraphQLID:(NSString *)arg1 ;
-(void)setRequestPath:(NSString *)arg1 ;
-(void)setRequestName:(NSString *)arg1 ;
-(id)_deletePhotoRequestForPhotoWithGraphQLID:(id)arg1 ;
-(NSString *)requestPath;
-(NSString *)friendlyName;
-(void)setFriendlyName:(NSString *)arg1 ;
-(NSString *)requestName;
-(id)initWithSession:(id)arg1 ;
@end
