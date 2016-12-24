/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSTimer;

@interface RCTLocationRequest : NSObject {

	/*^block*/id _successBlock;
	/*^block*/id _errorBlock;
	NSTimer* _timeoutTimer;
	UIEdgeInsets _options;

}

@property (nonatomic,copy) id successBlock;                       //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy) id errorBlock;                         //@synthesize errorBlock=_errorBlock - In the implementation block
@property (assign,nonatomic) UIEdgeInsets options;                //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSTimer * timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
-(void)setSuccessBlock:(id)arg1 ;
-(id)successBlock;
-(id)errorBlock;
-(void)setErrorBlock:(id)arg1 ;
-(void)dealloc;
-(UIEdgeInsets)options;
-(void)setOptions:(UIEdgeInsets)arg1 ;
-(void)setTimeoutTimer:(NSTimer *)arg1 ;
-(NSTimer *)timeoutTimer;
@end
