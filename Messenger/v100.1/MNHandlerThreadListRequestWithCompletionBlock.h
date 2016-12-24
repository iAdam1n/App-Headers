/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNHandlerThreadListRequest;

@interface MNHandlerThreadListRequestWithCompletionBlock : NSObject {

	MNHandlerThreadListRequest* _threadListRequest;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy,readonly) MNHandlerThreadListRequest * threadListRequest;              //@synthesize threadListRequest=_threadListRequest - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;                                          //@synthesize completionBlock=_completionBlock - In the implementation block
-(MNHandlerThreadListRequest *)threadListRequest;
-(id)initWithThreadListRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)completionBlock;
@end
