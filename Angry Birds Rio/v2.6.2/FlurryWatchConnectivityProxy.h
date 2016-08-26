/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol FlurryWatchConnectivityDelegate;
@class NSObject;

@interface FlurryWatchConnectivityProxy : NSProxy {

	NSObject* _realObject;
	id<FlurryWatchConnectivityDelegate> _sdkDelegate;

}

@property (assign,nonatomic,__weak) NSObject * realObject;                                        //@synthesize realObject=_realObject - In the implementation block
@property (assign,nonatomic,__weak) id<FlurryWatchConnectivityDelegate> sdkDelegate;              //@synthesize sdkDelegate=_sdkDelegate - In the implementation block
-(NSObject *)realObject;
-(id<FlurryWatchConnectivityDelegate>)sdkDelegate;
-(void)setRealObject:(NSObject *)arg1 ;
-(void)setSdkDelegate:(id<FlurryWatchConnectivityDelegate>)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(void)session:(id)arg1 didReceiveUserInfo:(id)arg2 ;
-(void)session:(id)arg1 didFinishUserInfoTransfer:(id)arg2 error:(id)arg3 ;
@end
