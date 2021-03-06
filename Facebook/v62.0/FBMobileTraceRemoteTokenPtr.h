/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBServerTrace, NSDictionary;

@interface FBMobileTraceRemoteTokenPtr : NSObject {

	NSString* _nodeID;
	NSString* _remoteNodeID;
	NSString* _nodeDescription;
	FBServerTrace* _trace;
	/*^block*/id _timeBlock;

}

@property (nonatomic,readonly) FBServerTrace * trace;                                  //@synthesize trace=_trace - In the implementation block
@property (nonatomic,readonly) id timeBlock;                                           //@synthesize timeBlock=_timeBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * remoteMetadata; 
@property (nonatomic,copy,readonly) NSString * nodeID;                                 //@synthesize nodeID=_nodeID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * remoteCallAnnotations; 
@property (nonatomic,copy,readonly) NSString * remoteNodeID;                           //@synthesize remoteNodeID=_remoteNodeID - In the implementation block
@property (nonatomic,copy,readonly) NSString * nodeDescription;                        //@synthesize nodeDescription=_nodeDescription - In the implementation block
-(id)timeBlock;
-(NSDictionary *)remoteCallAnnotations;
-(id)initWithNodeID:(id)arg1 remoteNodeID:(id)arg2 description:(id)arg3 trace:(id)arg4 timeBlock:(/*^block*/id)arg5 ;
-(NSString *)remoteNodeID;
-(NSString *)nodeDescription;
-(FBServerTrace *)trace;
-(id)debugInfo;
-(NSString *)nodeID;
-(NSString *)remoteMetadata;
@end

