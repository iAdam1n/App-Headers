/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
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
-(id)init;
-(void)cancel;
-(BFCancellationToken *)token;
-(void)dispose;
-(void)cancelAfterDelay:(int)arg1 ;
@end
