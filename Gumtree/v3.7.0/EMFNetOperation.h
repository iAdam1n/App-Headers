/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class EMFNetworkManager, NSString, EMFNetRequest, EMFNetResponse;

@interface EMFNetOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	BOOL _notActive;
	EMFNetworkManager* _manager;
	NSString* _identifier;
	EMFNetRequest* _request;
	EMFNetResponse* _response;
	/*^block*/id _completionHandler;
	unsigned long long _backgroundTaskID;

}

@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) EMFNetworkManager * manager;                      //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) EMFNetRequest * request;                          //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) EMFNetResponse * response;                        //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                                 //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                  //@synthesize isFinished=_isFinished - In the implementation block
@property (assign,nonatomic) BOOL notActive;                                   //@synthesize notActive=_notActive - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTaskID;              //@synthesize backgroundTaskID=_backgroundTaskID - In the implementation block
@property (nonatomic,copy) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)priorityQueue:(unsigned long long)arg1 ;
-(void)setNotActive:(BOOL)arg1 ;
-(unsigned long long)backgroundTaskID;
-(void)setBackgroundTaskID:(unsigned long long)arg1 ;
-(BOOL)notActive;
-(id)initWithRequest:(id)arg1 withID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(NSString *)identifier;
-(EMFNetRequest *)request;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)completionHandler;
-(EMFNetResponse *)response;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
-(EMFNetworkManager *)manager;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setResponse:(EMFNetResponse *)arg1 ;
-(void)setManager:(EMFNetworkManager *)arg1 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)setRequest:(EMFNetRequest *)arg1 ;
@end

