/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/SDWebImageOperation.h>

@class NSOperation, NSString;

@interface SDWebImageCombinedOperation : NSObject <SDWebImageOperation> {

	BOOL _cancelled;
	/*^block*/id _cancelBlock;
	NSOperation* _cacheOperation;

}

@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy) id cancelBlock;                                   //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,retain) NSOperation * cacheOperation;                   //@synthesize cacheOperation=_cacheOperation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCacheOperation:(NSOperation *)arg1 ;
-(NSOperation *)cacheOperation;
-(void)cancel;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
@end

