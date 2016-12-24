/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/AOLMoatDecorator.h>

@class CALayer;

@interface AOLMoatBridge : AOLMoatDecorator {

	BOOL _isFullScreen;
	int _isNativeAd;
	CALayer* _target;
	id _client;

}

@property (__weak) CALayer * target;                         //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) BOOL isFullScreen;              //@synthesize isFullScreen=_isFullScreen - In the implementation block
@property (retain) id client;                                //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) int isNativeAd;                 //@synthesize isNativeAd=_isNativeAd - In the implementation block
+(id)toJSON:(id)arg1 ;
+(id)logToConsole:(const char*)arg1 ofSize:(int)arg2 ;
-(void)setIsNativeAd:(int)arg1 ;
-(void)markMoatActive;
-(void)addDebugInfoTo:(id)arg1 windowId:(int)arg2 topLayer:(id)arg3 topLayerName:(id)arg4 window:(id)arg5 adLayer:(id)arg6 ;
-(id)getMetaData;
-(int)isNativeAd;
-(id)initWithDelegate:(id)arg1 target:(id)arg2 delegateProtocol:(id)arg3 forNativeAd:(BOOL)arg4 ;
-(id)getJSEnvString;
-(BOOL)isMoatRequest:(id)arg1 ;
-(id)getResponseForMoatRequest:(id)arg1 ;
-(void)setTarget:(CALayer *)arg1 ;
-(CALayer *)target;
-(id)client;
-(void)setClient:(id)arg1 ;
-(BOOL)isFullScreen;
-(void)setIsFullScreen:(BOOL)arg1 ;
@end
