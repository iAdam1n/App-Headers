/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BFCancellationToken;

@interface BFCancellationTokenSource : NSObject {

	BFCancellationToken* _token;

}

@property (nonatomic,readonly) BFCancellationToken * token;                                            //@synthesize token=_token - In the implementation block
@property (getter=isCancellationRequested,nonatomic,readonly) BOOL cancellationRequested; 
+(id)cancellationTokenSource;
-(BOOL)isCancellationRequested;
-(void)cancelAfterDelay:(int)arg1 ;
-(void)cancel;
-(id)init;
-(BFCancellationToken *)token;
-(void)dispose;
@end

